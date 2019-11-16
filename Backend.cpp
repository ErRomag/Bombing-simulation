#include "Backend.h"

Backend::Backend(QObject *parent) : QObject(parent)
{

}

// Описание связки C++ слоя и QML оболочки

// Связь для параметра "Прицельное рассеивание"
QString Backend::aimDispersionTextField() const
{
    return m_aimDispersionTextField;
}

void Backend::setAimDispersionTextField(QString aimDispersionTextField)
{
    if (m_aimDispersionTextField == aimDispersionTextField)
        return;

    m_aimDispersionTextField = aimDispersionTextField;
    emit aimDispersionTextFieldChanged(m_aimDispersionTextField);
}

// Связь для параметра "Техническое рассеивание"
QString Backend::technicalDispersionTextField() const
{
    return m_technicalDispersionTextField;
}

void Backend::setTechnicalDispersionTextField(QString technicalDispersionTextField)
{
    if (m_technicalDispersionTextField == technicalDispersionTextField)
        return;

    m_technicalDispersionTextField = technicalDispersionTextField;
    emit technicalDispersionTextFieldChanged(m_technicalDispersionTextField);
}

// Связь для параметра "Рассеивание суббоеприпасов"
QString Backend::ammunitionDispersionTextField() const
{
    return m_ammunitionDispersionTextField;
}

void Backend::setAmmunitionDispersionTextField(QString ammunitionDispersionTextField)
{
    if (m_ammunitionDispersionTextField == ammunitionDispersionTextField)
        return;

    m_ammunitionDispersionTextField = ammunitionDispersionTextField;
    emit ammunitionDispersionTextFieldChanged(m_ammunitionDispersionTextField);
}

// Связь для параметра "Боевой маршрут центра пары"
QString Backend::combatRouteCenterPairTextField() const
{
    return m_combatRouteCenterPairTextField;
}

void Backend::setCombatRouteCenterPairTextField(QString combatRouteCenterPairTextField)
{
    if (m_combatRouteCenterPairTextField == combatRouteCenterPairTextField)
        return;

    m_combatRouteCenterPairTextField = combatRouteCenterPairTextField;
    emit combatRouteCenterPairTextFieldChanged(m_combatRouteCenterPairTextField);
}

// Функция инициализации переменных для вычислений
void Backend::initialization()
{
    aimDispersion = m_aimDispersionTextField.toFloat();
    technicalDispersion = m_technicalDispersionTextField.toFloat();
    ammunitionDispersion = m_ammunitionDispersionTextField.toFloat();
    combatRouteCenterPair = m_combatRouteCenterPairTextField.toFloat();
}
