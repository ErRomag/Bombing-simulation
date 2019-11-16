#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class Backend : public QObject
{
    Q_OBJECT

    // Связываем C++ слой и QML оболочку

    Q_PROPERTY(QString aimDispersionTextField READ aimDispersionTextField
               WRITE setAimDispersionTextField NOTIFY aimDispersionTextFieldChanged)                  // Находим параметр "Прицельное рассеивание"


    Q_PROPERTY(QString technicalDispersionTextField READ technicalDispersionTextField
               WRITE setTechnicalDispersionTextField NOTIFY technicalDispersionTextFieldChanged)      // Находим параметр "Техническое рассеивание"


    Q_PROPERTY(QString ammunitionDispersionTextField READ ammunitionDispersionTextField
               WRITE setAmmunitionDispersionTextField NOTIFY ammunitionDispersionTextFieldChanged)    // Находим параметр "Рассеивание суббоеприпасов"

    Q_PROPERTY(QString combatRouteCenterPairTextField READ combatRouteCenterPairTextField
               WRITE setCombatRouteCenterPairTextField NOTIFY combatRouteCenterPairTextFieldChanged)  // Находим параметр "Боевой маршрут центра пары"


    Q_INVOKABLE void initialization(); // Функция инициализации переменных для вычислений

public:
    explicit Backend(QObject *parent = nullptr);

    QString aimDispersionTextField() const;          // Функция чтения параметра "Прицельного рассеивания"
    QString technicalDispersionTextField() const;    // Функция чтения параметра "Технического рассеивания"
    QString ammunitionDispersionTextField() const;   // Функция чтения параметра "Рассеивание суббоеприпасов"
    QString combatRouteCenterPairTextField() const;  // Функция чтения параметра "Боевой маршрут центра пары"

signals:

    void aimDispersionTextFieldChanged(QString aimDispersionTextField);                  // Функция изменения параметра "Прицельного рассеивания"
    void technicalDispersionTextFieldChanged(QString technicalDispersionTextField);      // Функция изменения параметра "Технического рассеивания"
    void ammunitionDispersionTextFieldChanged(QString ammunitionDispersionTextField);    // Функция изменения параметра "Рассеивание суббоеприпасов"
    void combatRouteCenterPairTextFieldChanged(QString combatRouteCenterPairTextField);  // Функция изменения параметра "Боевой маршрут центра пары"

public slots:

    void setAimDispersionTextField(QString aimDispersionTextField);                  // Функция установки параметра "Прицельного рассеивания"
    void setTechnicalDispersionTextField(QString technicalDispersionTextField);      // Функция установки параметра "Технического рассеивания"
    void setAmmunitionDispersionTextField(QString ammunitionDispersionTextField);    // Функция установки параметра "Рассеивание суббоеприпасов"
    void setCombatRouteCenterPairTextField(QString combatRouteCenterPairTextField);  // Функция установки параметра "Боевой маршрут центра пары"

private:

    // Объявление используемых переменных
    float aimDispersion;           // Переменная для параметра "Прицельное рассеивание"
    float technicalDispersion;     // Переменная для параметра "Техническое рассеивание"
    float ammunitionDispersion;    // Переменная для параметра "Рассеивание суббоеприпасов"
    float combatRouteCenterPair;   // Переменная для параметра "Боевой маршрут центра пары"

    QString m_aimDispersionTextField;
    QString m_technicalDispersionTextField;
    QString m_ammunitionDispersionTextField;
    QString m_combatRouteCenterPairTextField;
};

#endif // BACKEND_H
