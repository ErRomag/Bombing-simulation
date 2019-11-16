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
    Q_PROPERTY(float aimDispTextField)

public:
    explicit calculationModel(QObject *parent = nullptr);

    void bindObjects();  // ����������������



    // Функции для CheckBox
    int numCheckBox(){
       return _numCheckBox;
    }
    void setNumCheckBox(int num){
        _numCheckBox = num ;
       emit  NumCheckBoxChanged();
    }

    // Функции для RadioButton
    int RadioButton(){
       return _radioButoon;
    }
    void setRadioButton(int val){
        _radioButoon = val ;
       emit  RadioButtonChanged();
    }

signals:
    void RadioButtonChanged();
    void NumCheckBoxChanged();


public slots:
    void cppSlot(const QString &msg);





private:
    float FEopt[26][7]; /* массив параметров элементов (Functional Element) З� К [нулевые элементы не используются]
                          FE[i][j], где: i - номер функционального элемента;
                          j = {1(коорд. [x]); 2(коорд. [y]); 3(длина элемента [a]); 4(ширина элемента [b]);
                          5(угол [fi]); 6(радиус [r])}. */
    float DEA[26][9];   /* массив координат области опасных разрывов (Dangerous Explosion Area)
                           элементов З� К [нулевые элементы не используются] */

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
};

#endif // CALCULATIONMODEL_H
