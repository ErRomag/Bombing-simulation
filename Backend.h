#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <random>
#include <ctime>
#include <QVector>

class Backend : public QObject
{
    Q_OBJECT

    // ���������� C++ ���� � QML ��������

    Q_PROPERTY(QString aimDispersionTextField READ aimDispersionTextField
               WRITE setAimDispersionTextField NOTIFY aimDispersionTextFieldChanged)                  // ������� �������� "���������� �����������"

    Q_PROPERTY(QString technicalDispersionTextField READ technicalDispersionTextField
               WRITE setTechnicalDispersionTextField NOTIFY technicalDispersionTextFieldChanged)      // ������� �������� "����������� �����������"

    Q_PROPERTY(QString ammunitionDispersionTextField READ ammunitionDispersionTextField
               WRITE setAmmunitionDispersionTextField NOTIFY ammunitionDispersionTextFieldChanged)    // ������� �������� "����������� ��������������"

    Q_PROPERTY(QString combatRouteCenterPairTextField READ combatRouteCenterPairTextField
               WRITE setCombatRouteCenterPairTextField NOTIFY combatRouteCenterPairTextFieldChanged)  // ������� �������� "������ ������� ������ ����"

    Q_PROPERTY(QString rangeToTraverseTextField READ rangeToTraverseTextField
               WRITE setRangeToTraverseTextField NOTIFY rangeToTraverseTextFieldChanged)              // ������� �������� "��������� �� �������� ��"

    Q_PROPERTY(int intervalRegimeComboBox READ intervalRegimeComboBox
               WRITE setIntervalRegimeComboBox NOTIFY intervalRegimeComboBoxChanged)                  // ������� �������� "�������� �����"

    Q_PROPERTY(QString intervalSeriesTextField READ intervalSeriesTextField
               WRITE setIntervalSeriesTextField NOTIFY intervalSeriesTextFieldChanged)                // ������� �������� "�������� �����"

    Q_PROPERTY(int  bombingAltitudeComboBox READ bombingAltitudeComboBox
               WRITE setBombingAltitudeComboBox NOTIFY bombingAltitudeComboBoxChanged)                // ������� �������� "������ ������������"

    Q_PROPERTY(QString numberASPTextField READ numberASPTextField
               WRITE setNumberASPTextField NOTIFY numberASPTextFieldChanged)                          // ������� �������� "���������� ���"

    Q_PROPERTY(QString numberAmmunitionTextField READ numberAmmunitionTextField
               WRITE setNumberAmmunitionTextField NOTIFY numberAmmunitionTextFieldChanged)            // ������� �������� "���������� ��������������"

    Q_PROPERTY(int indexRadioButton READ indexRadioButton
               WRITE setIndexRadioButton NOTIFY indexRadioButtonChanged)                              // ������� �������� "��� ����������"

    Q_PROPERTY(QString radiusCPTextField READ radiusCPTextField
               WRITE setRadiusCPTextField NOTIFY radiusCPTextFieldChanged)                            // ������� �������� "������ ��������� ��"

    Q_PROPERTY(QString radiusCP12TextField READ radiusCP12TextField
               WRITE setRadiusCP12TextField NOTIFY radiusCP12TextFieldChanged)                        // ������� �������� "������ ��������� ��12"

    Q_PROPERTY(QString radiusSC123TextField READ radiusSC123TextField
               WRITE setRadiusSC123TextField NOTIFY radiusSC123TextFieldChanged)                      // ������� �������� "������ ��������� ��123"

    Q_PROPERTY(QString radiusRLSVTextField READ radiusRLSVTextField
               WRITE setRadiusRLSVTextField NOTIFY radiusRLSVTextFieldChanged)                        // ������� �������� "������ ��������� ��� � ��� "

    Q_PROPERTY(QString radiusEG12TextField READ radiusEG12TextField
               WRITE setRadiusEG12TextField NOTIFY radiusEG12TextFieldChanged)                        // ������� �������� "������ ��������� ��12"

    Q_PROPERTY(QString radiusCableTextField READ radiusCableTextField
               WRITE setRadiusCableTextField NOTIFY radiusCableTextFieldChanged)                      // ������� �������� "������ ��������� �������"

    Q_PROPERTY(QString numberRealizationTextField READ numberRealizationTextField
               WRITE setNumberRealizationTextField NOTIFY numberRealizationTextFieldChanged)          // ������� �������� "���������� ����������"

    Q_PROPERTY(QString W0TextField READ W0TextField WRITE setW0TextField NOTIFY W0TextFieldChanged)   // ������� W0 - W6
    Q_PROPERTY(QString W1TextField READ W1TextField WRITE setW1TextField NOTIFY W1TextFieldChanged)
    Q_PROPERTY(QString W2TextField READ W2TextField WRITE setW2TextField NOTIFY W2TextFieldChanged)
    Q_PROPERTY(QString W3TextField READ W3TextField WRITE setW3TextField NOTIFY W3TextFieldChanged)
    Q_PROPERTY(QString W4TextField READ W4TextField WRITE setW4TextField NOTIFY W4TextFieldChanged)
    Q_PROPERTY(QString W5TextField READ W5TextField WRITE setW5TextField NOTIFY W5TextFieldChanged)
    Q_PROPERTY(QString W6TextField READ W6TextField WRITE setW6TextField NOTIFY W6TextFieldChanged)

    Q_PROPERTY(QVector<int> VectCoordX READ VectCoordX WRITE setVectCoordX NOTIFY VectCoordXChanged)
    Q_PROPERTY(QVector<int> VectCoordY READ VectCoordY WRITE setVectCoordY NOTIFY VectCoordYChanged)
    Q_PROPERTY(QVector<int> VectorColor READ VectorColor WRITE setVectorColor NOTIFY VectorColorChanged)

    Q_PROPERTY(QVector<int> VectorEllipse READ VectorEllipse WRITE setVectorEllipse NOTIFY VectorEllipseChanged)

   Q_PROPERTY(QVector<bool> FuncElem READ FuncElem WRITE setFuncElem NOTIFY FuncElemChanged)


public:
    explicit Backend(QObject *parent = nullptr);

    QString aimDispersionTextField() const;          // ������� ������ ��������� "����������� �����������"
    QString technicalDispersionTextField() const;    // ������� ������ ��������� "������������ �����������"
    QString ammunitionDispersionTextField() const;   // ������� ������ ��������� "����������� ��������������"
    QString combatRouteCenterPairTextField() const;  // ������� ������ ��������� "������ ������� ������ ����"
    QString rangeToTraverseTextField() const;        // ������� ������ ��������� "��������� �� �������� ��"
    int intervalRegimeComboBox() const;              // ������� ������ ��������� "�������� �����"
    QString intervalSeriesTextField() const;         // ������� ������ ��������� "�������� �����"
    int bombingAltitudeComboBox() const;             // ������� ������ ��������� "������ ������������"
    QString numberASPTextField() const;              // ������� ������ ��������� "���������� ���"
    QString numberAmmunitionTextField() const;       // ������� ������ ��������� "���������� ��������������"

    int indexRadioButton() const;                    // ������� ������ ��������� "��� ����������"
    QString radiusCPTextField() const;               // ������� ������ ��������� "������ ��������� ��"
    QString radiusCP12TextField() const;             // ������� ������ ��������� "������ ��������� ��12"
    QString radiusSC123TextField() const;            // ������� ������ ��������� "������ ��������� ��123"
    QString radiusRLSVTextField() const;             // ������� ������ ��������� "������ ��������� ��� � ���"
    QString radiusEG12TextField() const;             // ������� ������ ��������� "������ ��������� ��12"
    QString radiusCableTextField() const;            // ������� ������ ��������� "������ ��������� �������"
    QString numberRealizationTextField() const;      // ������� ������ ��������� "���������� ����������"

    QString W0TextField() const;                     // ������� ������ ���������� W0 - W6
    QString W1TextField() const;
    QString W2TextField() const;
    QString W3TextField() const;
    QString W4TextField() const;
    QString W5TextField() const;
    QString W6TextField() const;

    Q_INVOKABLE void initialization();               // ������� ������������� ���������� ��� ����������

    Q_INVOKABLE int maxNumberElementX();
    Q_INVOKABLE int maxNumberElementY();
    Q_INVOKABLE void clearVectorXYColor();
    Q_INVOKABLE void onRadioButtonClicked();




    QVector<int> VectCoordX() const
    {
        return m_VectCoordX;
    }

    QVector<int> VectCoordY() const
    {
        return m_VectCoordY;
    }

    QVector<int> VectorColor() const
    {
        return m_VectorColor;
    }



    QVector<int> VectorEllipse() const
    {
        return m_VectorEllipse;
    }

    QVector<bool> FuncElem() const
    {
        return m_FuncElem;
    }

signals:

    void aimDispersionTextFieldChanged(QString aimDispersionTextField);                  // ������� ��������� ��������� "����������� �����������"
    void technicalDispersionTextFieldChanged(QString technicalDispersionTextField);      // ������� ��������� ��������� "������������ �����������"
    void ammunitionDispersionTextFieldChanged(QString ammunitionDispersionTextField);    // ������� ��������� ��������� "����������� ��������������"
    void combatRouteCenterPairTextFieldChanged(QString combatRouteCenterPairTextField);  // ������� ��������� ��������� "������ ������� ������ ����"
    void rangeToTraverseTextFieldChanged(QString rangeToTraverseTextField);              // ������� ��������� ��������� "��������� �� �������� ��"
    void intervalRegimeComboBoxChanged(int intervalRegimeComboBox);                      // ������� ��������� ��������� "�������� �����"
    void intervalSeriesTextFieldChanged(QString intervalSeriesTextField);                // ������� ��������� ��������� "�������� �����"
    void bombingAltitudeComboBoxChanged(int bombingAltitudeComboBox);                    // ������� ��������� ��������� "������ ������������"
    void numberASPTextFieldChanged(QString numberASPTextField);                          // ������� ��������� ��������� "���������� ���"
    void numberAmmunitionTextFieldChanged(QString numberAmmunitionTextField);            // ������� ��������� ��������� "���������� ��������������"
    void indexRadioButtonChanged(int indexRadioButton);                                  // ������� ��������� ��������� "��� ����������"

    void radiusCPTextFieldChanged(QString radiusCPTextField);                            // ������� ��������� ��������� "������ ��������� ��"
    void radiusCP12TextFieldChanged(QString radiusCP12TextField);                        // ������� ��������� ��������� "������ ��������� ��12"
    void radiusSC123TextFieldChanged(QString radiusSC123TextField);                      // ������� ��������� ��������� "������ ��������� ��123"
    void radiusRLSVTextFieldChanged(QString radiusRLSVTextField);                        // ������� ��������� ��������� "������ ��������� ��� � ���"
    void radiusEG12TextFieldChanged(QString radiusEG12TextField);                        // ������� ��������� ��������� "������ ��������� ��12"
    void radiusCableTextFieldChanged(QString radiusCableTextField);                      // ������� ��������� ��������� "������ ��������� �������"
    void numberRealizationTextFieldChanged(QString numberRealizationTextField);          // ������� ��������� ��������� "���������� ����������"

    void W0TextFieldChanged(QString W0TextField);                                        // ������� ��������� ���������� W0 - W6
    void W1TextFieldChanged(QString W1TextField);
    void W2TextFieldChanged(QString W2TextField);
    void W3TextFieldChanged(QString W3TextField);
    void W4TextFieldChanged(QString W4TextField);
    void W5TextFieldChanged(QString W5TextField);
    void W6TextFieldChanged(QString W6TextField);





    void VectCoordXChanged(QVector<int> VectCoordX);

    void VectCoordYChanged(QVector<int> VectCoordY);

    void VectorColorChanged(QVector<int> VectorColor);


    void VectorEllipseChanged(QVector<int> VectorEllipse);

    void FuncElemChanged(QVector<bool> FuncElem);

public slots:

    void setAimDispersionTextField(QString aimDispersionTextField);                  // ������� ��������� ��������� "����������� �����������"
    void setTechnicalDispersionTextField(QString technicalDispersionTextField);      // ������� ��������� ��������� "������������ �����������"
    void setAmmunitionDispersionTextField(QString ammunitionDispersionTextField);    // ������� ��������� ��������� "����������� ��������������"
    void setCombatRouteCenterPairTextField(QString combatRouteCenterPairTextField);  // ������� ��������� ��������� "������ ������� ������ ����"
    void setRangeToTraverseTextField(QString rangeToTraverseTextField);              // ������� ��������� ��������� "��������� �� �������� ��"
    void setIntervalRegimeComboBox(int intervalRegimeComboBox);                      // ������� ��������� ��������� "�������� �����"
    void setIntervalSeriesTextField(QString intervalSeriesTextField);                // ������� ��������� ��������� "�������� �����"
    void setBombingAltitudeComboBox(int bombingAltitudeComboBox);                    // ������� ��������� ��������� "������ ������������"
    void setNumberASPTextField(QString numberASPTextField);                          // ������� ��������� ��������� "���������� ���"
    void setNumberAmmunitionTextField(QString numberAmmunitionTextField);            // ������� ��������� ��������� "���������� ��������������"
    void setIndexRadioButton(int indexRadioButton);                                  // ������� ��������� ��������� "��� ����������"

    void setRadiusCPTextField(QString radiusCPTextField);                            // ������� ��������� ��������� "������ ��������� ��"
    void setRadiusCP12TextField(QString radiusCP12TextField);                        // ������� ��������� ��������� "������ ��������� ��12"
    void setRadiusSC123TextField(QString radiusSC123TextField);                      // ������� ��������� ��������� "������ ��������� ��123"
    void setRadiusRLSVTextField(QString radiusRLSVTextField);                        // ������� ��������� ��������� "������ ��������� ��� � ���"
    void setRadiusEG12TextField(QString radiusEG12TextField);                        // ������� ��������� ��������� "������ ��������� ��12"
    void setRadiusCableTextField(QString radiusCableTextField);                      // ������� ��������� ��������� "������ ��������� �������"
    void setNumberRealizationTextField(QString numberRealizationTextField);          // ������� ��������� ��������� "���������� ����������"

    void setW0TextField(QString W0TextField);                                        // ������� ��������� ���������� W0 - W6
    void setW1TextField(QString W1TextField);
    void setW2TextField(QString W2TextField);
    void setW3TextField(QString W3TextField);
    void setW4TextField(QString W4TextField);
    void setW5TextField(QString W5TextField);
    void setW6TextField(QString W6TextField);





    void setVectCoordX(QVector<int> VectCoordX)
    {
        if (m_VectCoordX == VectCoordX)
            return;

        m_VectCoordX = VectCoordX;
        emit VectCoordXChanged(VectCoordX);
    }

    void setVectCoordY(QVector<int> VectCoordY)
    {
        if (m_VectCoordY == VectCoordY)
            return;

        m_VectCoordY = VectCoordY;
        emit VectCoordYChanged(VectCoordY);
    }

    void setVectorColor(QVector<int> VectorColor)
    {
        if (m_VectorColor == VectorColor)
            return;

        m_VectorColor = VectorColor;
        emit VectorColorChanged(VectorColor);
    }


    void setVectorEllipse(QVector<int> VectorEllipse)
    {
        if (m_VectorEllipse == VectorEllipse)
            return;

        m_VectorEllipse = VectorEllipse;
        emit VectorEllipseChanged(m_VectorEllipse);
    }

    void setFuncElem(QVector<bool> FuncElem)
    {
        if (m_FuncElem == FuncElem)
            return;

        m_FuncElem = FuncElem;
        emit FuncElemChanged(m_FuncElem);
    }

private:

    float FEopt[26][7]; /* ������ ���������� ��������� (Functional Element) ��� [������� �������� �� ������������]
                         * FE[i][j], ���: i - ����� ��������������� ��������;
                         * j = {1(�����. [x]); 2(�����. [y]); 3(����� �������� [a]); 4(������ �������� [b]);
                         * 5(���� [fi]); 6(������ [r])}. */
    float DEA[26][9];   /* ������ ��������� ������� ������� �������� (Dangerous Explosion Area)
                         * ��������� ��� [������� �������� �� ������������] */
    void initFEoptions();
    void evalDangerousExplosionsArea(); // ������� ������� ������� ������� ��������
    void damageCalculation();

    bool RBKd;

    bool Destroy(float x, float y, float x1,
                 float y1,float x2,float y2,
                 float x3,float y3,float x4,float y4);
    int sgn(float val);
    bool FE[26];
    bool F0,F1,F2,F3,F4,F5,F6,KP;
    int dukr[7] = {0, 0, 0, 0, 0, 0, 0};
    void test();
    void solveFE(bool test);
    void writeFE(int Nv);

    // ������������ ����������
    float aimDispersion;               // �������� "���������� �����������"
    float technicalDispersion;         // �������� "����������� �����������"
    float ammunitionDispersion;        // �������� "����������� ��������������"
    float combatRouteCenterPair;       // �������� "������ ������� ������ ����"
    float rangeToTraverse;             // �������� "��������� �� �������� ��"
    float intervalRegime;              // �������� "�������� �����"
    int   indexIntervalRegime;         // �������� "������ ��������� �����"
    float intervalSeries;              // �������� "�������� �����"
    float bombingAltitude;             // �������� "������ ������������"
    int   indexBombingAltitude;        // �������� "������ ������ ������������"
    float numberASP;                   // �������� "���������� ���"
    float numberAmmunition;            // �������� "���������� ��������������"
    int   currentIndexRadioButton;     // �������� "������ ���� ����������"

    float radiusCP;                    // �������� "������ ��������� ��"
    float radiusCP12;                  // �������� "������ ��������� ��12"
    float radiusSC123;                 // �������� "������ ��������� ��123"
    float radiusRLSV;                  // �������� "������ ��������� ��� � ���"
    float radiusEG12;                  // �������� "������ ��������� ��12"
    float radiusCable;                 // �������� "������ ��������� �������"
    float numberRealization;           // �������� "���������� ����������"

    float W0, W1, W2, W3, W4, W5, W6;  // ��������� W1 - W6

    QString m_aimDispersionTextField;
    QString m_technicalDispersionTextField;
    QString m_ammunitionDispersionTextField;
    QString m_combatRouteCenterPairTextField;
    QString m_rangeToTraverseTextField;
    int m_intervalRegimeComboBox;
    QString m_intervalSeriesTextField;
    int m_bombingAltitudeComboBox;
    QString m_numberASPTextField;
    QString m_numberAmmunitionTextField;
    int m_indexRadioButton;

    QString m_radiusCPTextField;
    QString m_radiusCP12TextField;
    QString m_radiusSC123TextField;
    QString m_radiusRLSVTextField;
    QString m_radiusEG12TextField;
    QString m_radiusCableTextField;
    QString m_numberRealizationTextField;

    QString m_W0TextField;
    QString m_W1TextField;
    QString m_W2TextField;
    QString m_W3TextField;
    QString m_W4TextField;
    QString m_W5TextField;
    QString m_W6TextField;


    QVector<int> m_VectCoordX;
    QVector<int> m_VectCoordY;
    QVector<int> m_VectorColor;
    QVector<int> m_VectorEllipse;
    QVector<bool> m_FuncElem;
};

#endif // BACKEND_H
