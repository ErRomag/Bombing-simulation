#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

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
               WRITE setNumberASPTextField NOTIFY numberASPTextFieldChanged)  // Находим параметр "Количество АСП"

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






private:

    // Объявление используемых переменных
    float aimDispersion;           // Переменная для параметра "Прицельное рассеивание"
    float technicalDispersion;     // Переменная для параметра "Техническое рассеивание"
    float ammunitionDispersion;    // Переменная для параметра "Рассеивание суббоеприпасов"
    float combatRouteCenterPair;   // Переменная для параметра "Боевой маршрут центра пары"
    float rangeToTraverse;         // Переменная для параметра "Дальность до траверза КП"

    float intervalRegime;          // Переменная для параметра "Интервал строя"
    int indexIntervalRegime;       // Переменная для параметра "Индекс интервала строя"

    float intervalSeries;          // Переменная для параметра "Интервал серии"

    float bombingAltitude;         // Переменная для параметра "Высота бомбометания"
    int indexBombingAltitude;      // Переменная для параметра "Индекс высоты бомбометания"

    float numberASP;               // Переменная для параметра "Количество АСП"

    QString m_aimDispersionTextField;
    QString m_technicalDispersionTextField;
    QString m_ammunitionDispersionTextField;
    QString m_combatRouteCenterPairTextField;
    QString m_rangeToTraverseTextField;
    int m_intervalRegimeComboBox;
    QString m_intervalSeriesTextField;
    int m_bombingAltitudeComboBox;
    QString m_numberASPTextField;
};

#endif // BACKEND_H
