#ifndef CALCULATIONMODEL_H
#define CALCULATIONMODEL_H

#include <QObject>
#include <QGroupBox>
#include <QVector>
#include <QMap>

class calculationModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int RadioButton READ RadioButton WRITE setRadioButton NOTIFY RadioButtonChanged)
    Q_PROPERTY(int numCheckBox READ numCheckBox WRITE setNumCheckBox NOTIFY NumCheckBoxChanged)

    Q_PROPERTY(float aimDispTextField READ aimDispTextField WRITE setAimDispTextField NOTIFY aimDispTextFieldChanged)

    Q_PROPERTY(float aimDispTextField)

public:
    explicit calculationModel(QObject *parent = nullptr);

    void bindObjects();  //



    // ������� ��� CheckBox
    int numCheckBox(){
       return _numCheckBox;
    }
    void setNumCheckBox(int num){
        _numCheckBox = num ;
       emit  NumCheckBoxChanged();
    }

    // ������� ��� RadioButton
    int RadioButton(){
       return _radioButoon;
    }
    void setRadioButton(int val){
        _radioButoon = val ;
       emit  RadioButtonChanged();
    }

    float aimDispTextField() const
    {
        return m_aimDispTextField;
    }

signals:
    void RadioButtonChanged();
    void NumCheckBoxChanged();


    void aimDispTextFieldChanged(float aimDispTextField);

public slots:
    void cppSlot(const QString &msg);





    void setAimDispTextField(float aimDispTextField)
    {
        qWarning("Floating point comparison needs context sanity check");
        if (qFuzzyCompare(m_aimDispTextField, aimDispTextField))
            return;

        m_aimDispTextField = aimDispTextField;
        emit aimDispTextFieldChanged(m_aimDispTextField);
    }

private:
    float FEopt[26][7]; /* ������ ���������� ��������� (Functional Element) ��� [������� �������� �� ������������]
                          FE[i][j], ���: i - ����� ��������������� ��������;
                          j = {1(�����. [x]); 2(�����. [y]); 3(����� �������� [a]); 4(������ �������� [b]);
                          5(���� [fi]); 6(������ [r])}. */
    float DEA[26][9];   /* ������ ��������� ������� ������� �������� (Dangerous Explosion Area)
                           ��������� ��� [������� �������� �� ������������] */

    void initFEoptions();
    void evalDangerousExplosionsArea();

    void damageCalculation();

    QMap<QString, QObject*> initMap; // textFields map
    QMap<QString, QObject*> cbMap;   // comboBoxes map
//    QGroupBox* radioBox = nullptr;   // weapon radioBox
    QMap<quint8, QObject*> resMap;   // damage map


    void clrInitMap();
    void clrResMap();


    int _radioButoon{0};
    int _numCheckBox{0};
    float m_aimDispTextField;
};

#endif // CALCULATIONMODEL_H
