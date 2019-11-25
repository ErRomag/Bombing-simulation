#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <random>
#include <ctime>

class Backend : public QObject
{
    Q_OBJECT

    // Связывание C++ слоя и QML оболочки

    Q_PROPERTY(QString aimDispersionTextField READ aimDispersionTextField
               WRITE setAimDispersionTextField NOTIFY aimDispersionTextFieldChanged)                  // Находим параметр "Прицельное рассеивание"

    Q_PROPERTY(QString technicalDispersionTextField READ technicalDispersionTextField
               WRITE setTechnicalDispersionTextField NOTIFY technicalDispersionTextFieldChanged)      // Находим параметр "Техническое рассеивание"

    Q_PROPERTY(QString ammunitionDispersionTextField READ ammunitionDispersionTextField
               WRITE setAmmunitionDispersionTextField NOTIFY ammunitionDispersionTextFieldChanged)    // Находим параметр "Рассеивание суббоеприпасов"

    Q_PROPERTY(QString combatRouteCenterPairTextField READ combatRouteCenterPairTextField
               WRITE setCombatRouteCenterPairTextField NOTIFY combatRouteCenterPairTextFieldChanged)  // Находим параметр "Боевой маршрут центра пары"

    Q_PROPERTY(QString rangeToTraverseTextField READ rangeToTraverseTextField
               WRITE setRangeToTraverseTextField NOTIFY rangeToTraverseTextFieldChanged)              // Находим параметр "Дальность до траверза КП"

    Q_PROPERTY(int intervalRegimeComboBox READ intervalRegimeComboBox
               WRITE setIntervalRegimeComboBox NOTIFY intervalRegimeComboBoxChanged)                  // Находим параметр "Интервал строя"

    Q_PROPERTY(QString intervalSeriesTextField READ intervalSeriesTextField
               WRITE setIntervalSeriesTextField NOTIFY intervalSeriesTextFieldChanged)                // Находим параметр "Интервал серии"

    Q_PROPERTY(int  bombingAltitudeComboBox READ bombingAltitudeComboBox
               WRITE setBombingAltitudeComboBox NOTIFY bombingAltitudeComboBoxChanged)                // Находим параметр "Высота бомбометания"

    Q_PROPERTY(QString numberASPTextField READ numberASPTextField
               WRITE setNumberASPTextField NOTIFY numberASPTextFieldChanged)                          // Находим параметр "Количество АСП"

    Q_PROPERTY(QString numberAmmunitionTextField READ numberAmmunitionTextField
               WRITE setNumberAmmunitionTextField NOTIFY numberAmmunitionTextFieldChanged)            // Находим параметр "Количество суббоеприпасов"

    Q_PROPERTY(int indexRadioButton READ indexRadioButton
               WRITE setIndexRadioButton NOTIFY indexRadioButtonChanged)                              // Находим параметр "Тип вооружения"

    Q_PROPERTY(QString radiusCPTextField READ radiusCPTextField
               WRITE setRadiusCPTextField NOTIFY radiusCPTextFieldChanged)                            // Находим параметр "Радиус поражения КП"

    Q_PROPERTY(QString radiusCP12TextField READ radiusCP12TextField
               WRITE setRadiusCP12TextField NOTIFY radiusCP12TextFieldChanged)                        // Находим параметр "Радиус поражения КП12"

    Q_PROPERTY(QString radiusSC123TextField READ radiusSC123TextField
               WRITE setRadiusSC123TextField NOTIFY radiusSC123TextFieldChanged)                      // Находим параметр "Радиус поражения СУ123"

    Q_PROPERTY(QString radiusRLSVTextField READ radiusRLSVTextField
               WRITE setRadiusRLSVTextField NOTIFY radiusRLSVTextFieldChanged)                        // Находим параметр "Радиус поражения РЛС и РЛВ "

    Q_PROPERTY(QString radiusEG12TextField READ radiusEG12TextField
               WRITE setRadiusEG12TextField NOTIFY radiusEG12TextFieldChanged)                        // Находим параметр "Радиус поражения ЭГ12"

    Q_PROPERTY(QString radiusCableTextField READ radiusCableTextField
               WRITE setRadiusCableTextField NOTIFY radiusCableTextFieldChanged)                      // Находим параметр "Радиус поражения кабелей"

    Q_PROPERTY(QString numberRealizationTextField READ numberRealizationTextField
               WRITE setNumberRealizationTextField NOTIFY numberRealizationTextFieldChanged)          // Находим параметр "Количество реализаций"

    Q_PROPERTY(QString W0TextField READ W0TextField WRITE setW0TextField NOTIFY W0TextFieldChanged)   // Находим W0 - W6
    Q_PROPERTY(QString W1TextField READ W1TextField WRITE setW1TextField NOTIFY W1TextFieldChanged)
    Q_PROPERTY(QString W2TextField READ W2TextField WRITE setW2TextField NOTIFY W2TextFieldChanged)
    Q_PROPERTY(QString W3TextField READ W3TextField WRITE setW3TextField NOTIFY W3TextFieldChanged)
    Q_PROPERTY(QString W4TextField READ W4TextField WRITE setW4TextField NOTIFY W4TextFieldChanged)
    Q_PROPERTY(QString W5TextField READ W5TextField WRITE setW5TextField NOTIFY W5TextFieldChanged)
    Q_PROPERTY(QString W6TextField READ W6TextField WRITE setW6TextField NOTIFY W6TextFieldChanged)

public:
    explicit Backend(QObject *parent = nullptr);

    QString aimDispersionTextField() const;          // Функция чтения параметра "Прицельного рассеивания"
    QString technicalDispersionTextField() const;    // Функция чтения параметра "Технического рассеивания"
    QString ammunitionDispersionTextField() const;   // Функция чтения параметра "Рассеивание суббоеприпасов"
    QString combatRouteCenterPairTextField() const;  // Функция чтения параметра "Боевой маршрут центра пары"
    QString rangeToTraverseTextField() const;        // Функция чтения параметра "Дальность до траверза КП"
    int intervalRegimeComboBox() const;              // Функция чтения параметра "Интервал строя"
    QString intervalSeriesTextField() const;         // Функция чтения параметра "Интервал серии"
    int bombingAltitudeComboBox() const;             // Функция чтения параметра "Высота бомбометания"
    QString numberASPTextField() const;              // Функция чтения параметра "Количество АСП"
    QString numberAmmunitionTextField() const;       // Функция чтения параметра "Количество суббоеприпасов"

    int indexRadioButton() const;                    // Функция чтения параметра "Тип вооружения"
    QString radiusCPTextField() const;               // Функция чтения параметра "Радиус поражения КП"
    QString radiusCP12TextField() const;             // Функция чтения параметра "Радиус поражения КП12"
    QString radiusSC123TextField() const;            // Функция чтения параметра "Радиус поражения СУ123"
    QString radiusRLSVTextField() const;             // Функция чтения параметра "Радиус поражения РЛС и РЛВ"
    QString radiusEG12TextField() const;             // Функция чтения параметра "Радиус поражения ЭГ12"
    QString radiusCableTextField() const;            // Функция чтения параметра "Радиус поражения кабелей"
    QString numberRealizationTextField() const;      // Функция чтения параметра "Количество реализаций"

    QString W0TextField() const;                     // Функции чтения параметров W0 - W6
    QString W1TextField() const;
    QString W2TextField() const;
    QString W3TextField() const;
    QString W4TextField() const;
    QString W5TextField() const;
    QString W6TextField() const;

    Q_INVOKABLE void initialization();               // Функция инициализации переменных для вычислений

signals:

    void aimDispersionTextFieldChanged(QString aimDispersionTextField);                  // Функция изменения параметра "Прицельного рассеивания"
    void technicalDispersionTextFieldChanged(QString technicalDispersionTextField);      // Функция изменения параметра "Технического рассеивания"
    void ammunitionDispersionTextFieldChanged(QString ammunitionDispersionTextField);    // Функция изменения параметра "Рассеивание суббоеприпасов"
    void combatRouteCenterPairTextFieldChanged(QString combatRouteCenterPairTextField);  // Функция изменения параметра "Боевой маршрут центра пары"
    void rangeToTraverseTextFieldChanged(QString rangeToTraverseTextField);              // Функция изменения параметра "Дальность до траверза КП"
    void intervalRegimeComboBoxChanged(int intervalRegimeComboBox);                      // Функция изменения параметра "Интервал строя"
    void intervalSeriesTextFieldChanged(QString intervalSeriesTextField);                // Функция изменения параметра "Интервал серии"
    void bombingAltitudeComboBoxChanged(int bombingAltitudeComboBox);                    // Функция изменения параметра "Высота бомбометания"
    void numberASPTextFieldChanged(QString numberASPTextField);                          // Функция изменения параметра "Количество АСП"
    void numberAmmunitionTextFieldChanged(QString numberAmmunitionTextField);            // Функция изменения параметра "Количество суббоеприпасов"
    void indexRadioButtonChanged(int indexRadioButton);                                  // Функция изменения параметра "Тип вооружения"

    void radiusCPTextFieldChanged(QString radiusCPTextField);                            // Функция изменения параметра "Радиус поражения КП"
    void radiusCP12TextFieldChanged(QString radiusCP12TextField);                        // Функция изменения параметра "Радиус поражения КП12"
    void radiusSC123TextFieldChanged(QString radiusSC123TextField);                      // Функция изменения параметра "Радиус поражения СУ123"
    void radiusRLSVTextFieldChanged(QString radiusRLSVTextField);                        // Функция изменения параметра "Радиус поражения РЛС и РЛВ"
    void radiusEG12TextFieldChanged(QString radiusEG12TextField);                        // Функция изменения параметра "Радиус поражения ЭГ12"
    void radiusCableTextFieldChanged(QString radiusCableTextField);                      // Функция изменения параметра "Радиус поражения кабелей"
    void numberRealizationTextFieldChanged(QString numberRealizationTextField);          // Функция изменения параметра "Количество реализаций"

    void W0TextFieldChanged(QString W0TextField);                                        // Функции изменения параметров W0 - W6
    void W1TextFieldChanged(QString W1TextField);
    void W2TextFieldChanged(QString W2TextField);
    void W3TextFieldChanged(QString W3TextField);
    void W4TextFieldChanged(QString W4TextField);
    void W5TextFieldChanged(QString W5TextField);
    void W6TextFieldChanged(QString W6TextField);

public slots:

    void setAimDispersionTextField(QString aimDispersionTextField);                  // Функция установки параметра "Прицельного рассеивания"
    void setTechnicalDispersionTextField(QString technicalDispersionTextField);      // Функция установки параметра "Технического рассеивания"
    void setAmmunitionDispersionTextField(QString ammunitionDispersionTextField);    // Функция установки параметра "Рассеивание суббоеприпасов"
    void setCombatRouteCenterPairTextField(QString combatRouteCenterPairTextField);  // Функция установки параметра "Боевой маршрут центра пары"
    void setRangeToTraverseTextField(QString rangeToTraverseTextField);              // Функция установки параметра "Дальность до траверза КП"
    void setIntervalRegimeComboBox(int intervalRegimeComboBox);                      // Функция установки параметра "Интервал строя"
    void setIntervalSeriesTextField(QString intervalSeriesTextField);                // Функция установки параметра "Интервал серии"
    void setBombingAltitudeComboBox(int bombingAltitudeComboBox);                    // Функция установки параметра "Высота бомбометания"
    void setNumberASPTextField(QString numberASPTextField);                          // Функция установки параметра "Количество АСП"
    void setNumberAmmunitionTextField(QString numberAmmunitionTextField);            // Функция установки параметра "Количество суббоеприпасов"
    void setIndexRadioButton(int indexRadioButton);                                  // Функция установки параметра "Тип вооружения"

    void setRadiusCPTextField(QString radiusCPTextField);                            // Функция установки параметра "Радиус поражения КП"
    void setRadiusCP12TextField(QString radiusCP12TextField);                        // Функция установки параметра "Радиус поражения КП12"
    void setRadiusSC123TextField(QString radiusSC123TextField);                      // Функция установки параметра "Радиус поражения СУ123"
    void setRadiusRLSVTextField(QString radiusRLSVTextField);                        // Функция установки параметра "Радиус поражения РЛС и РЛС"
    void setRadiusEG12TextField(QString radiusEG12TextField);                        // Функция установки параметра "Радиус поражения ЭГ12"
    void setRadiusCableTextField(QString radiusCableTextField);                      // Функция установки параметра "Радиус поражения кабелей"
    void setNumberRealizationTextField(QString numberRealizationTextField);          // Функция установки параметра "Количество реализаций"

    void setW0TextField(QString W0TextField);                                        // Функции установки параметров W0 - W6
    void setW1TextField(QString W1TextField);
    void setW2TextField(QString W2TextField);
    void setW3TextField(QString W3TextField);
    void setW4TextField(QString W4TextField);
    void setW5TextField(QString W5TextField);
    void setW6TextField(QString W6TextField);

private:

    float FEopt[26][7]; /* массив параметров элементов (Functional Element) ЗРК [нулевые элементы не используются]
                         * FE[i][j], где: i - номер функционального элемента;
                         * j = {1(коорд. [x]); 2(коорд. [y]); 3(длина элемента [a]); 4(ширина элемента [b]);
                         * 5(угол [fi]); 6(радиус [r])}. */
    float DEA[26][9];   /* массив координат области опасных разрывов (Dangerous Explosion Area)
                         * элементов ЗРК [нулевые элементы не используются] */
    void initFEoptions();
    void evalDangerousExplosionsArea();
    void damageCalculation();

    bool RBKd;

    bool Destroy(float x,float y,float x1,
                 float y1,float x2,float y2,
                 float x3,float y3,float x4,float y4);

    // Используемые переменные
    float aimDispersion;               // Параметр "Прицельное рассеивание"
    float technicalDispersion;         // Параметр "Техническое рассеивание"
    float ammunitionDispersion;        // Параметр "Рассеивание суббоеприпасов"
    float combatRouteCenterPair;       // Параметр "Боевой маршрут центра пары"
    float rangeToTraverse;             // Параметр "Дальность до траверза КП"
    float intervalRegime;              // Параметр "Интервал строя"
    int   indexIntervalRegime;         // Параметр "Индекс интервала строя"
    float intervalSeries;              // Параметр "Интервал серии"
    float bombingAltitude;             // Параметр "Высота бомбометания"
    int   indexBombingAltitude;        // Параметр "Индекс высоты бомбометания"
    float numberASP;                   // Параметр "Количество АСП"
    float numberAmmunition;            // Параметр "Количество суббоеприпасов"
    int   currentIndexRadioButton;     // Параметр "Индекс типа вооружения"

    float radiusCP;                    // Параметр "Радиус поражения КП"
    float radiusCP12;                  // Параметр "Радиус поражения КП12"
    float radiusSC123;                 // Параметр "Радиус поражения СУ123"
    float radiusRLSV;                  // Параметр "Радиус поражения РЛС и РЛВ"
    float radiusEG12;                  // Параметр "Радиус поражения ЭГ12"
    float radiusCable;                 // Параметр "Радиус поражения кабелей"
    float numberRealization;           // Параметр "Количество реализаций"

    float W0, W1, W2, W3, W4, W5, W6;  // Параметры W1 - W6

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

};

#endif // BACKEND_H
