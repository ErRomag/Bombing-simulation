#include "Backend.h"
#include <QDebug>

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

// Связь для параметра "Дальность до траверза КП"
QString Backend::rangeToTraverseTextField() const
{
    return m_rangeToTraverseTextField;
}

void Backend::setRangeToTraverseTextField(QString rangeToTraverseTextField)
{
    if (m_rangeToTraverseTextField == rangeToTraverseTextField)
        return;

    m_rangeToTraverseTextField = rangeToTraverseTextField;
    emit rangeToTraverseTextFieldChanged(m_rangeToTraverseTextField);
}

// Связь для параметра "Интервал строя"
int Backend::intervalRegimeComboBox() const
{
    return m_intervalRegimeComboBox;
}

void Backend::setIntervalRegimeComboBox(int intervalRegimeComboBox)
{
    if (m_intervalRegimeComboBox == intervalRegimeComboBox)
        return;

    m_intervalRegimeComboBox = intervalRegimeComboBox;
    emit intervalRegimeComboBoxChanged(m_intervalRegimeComboBox);
}

// Связь для параметра "Интервал серии"
QString Backend::intervalSeriesTextField() const
{
    return m_intervalSeriesTextField;
}

void Backend::setIntervalSeriesTextField(QString intervalSeriesTextField)
{
    if (m_intervalSeriesTextField == intervalSeriesTextField)
        return;

    m_intervalSeriesTextField = intervalSeriesTextField;
    emit intervalSeriesTextFieldChanged(m_intervalSeriesTextField);
}

// Связь для параметра "Высота бомбометания"
int Backend::bombingAltitudeComboBox() const
{
    return m_bombingAltitudeComboBox;
}

void Backend::setBombingAltitudeComboBox(int bombingAltitudeComboBox)
{
    if (m_bombingAltitudeComboBox == bombingAltitudeComboBox)
        return;

    m_bombingAltitudeComboBox = bombingAltitudeComboBox;
    emit bombingAltitudeComboBoxChanged(m_bombingAltitudeComboBox);
}

// Связь для параметра "Количество АСП"
QString Backend::numberASPTextField() const
{
    return m_numberASPTextField;
}

void Backend::setNumberASPTextField(QString numberASPTextField)
{
    if (m_numberASPTextField == numberASPTextField)
        return;

    m_numberASPTextField = numberASPTextField;
    emit numberASPTextFieldChanged(m_numberASPTextField);
}

//----------------------------------------------------------
// Функция инициализации переменных для вычислений
void Backend::initialization()
{
    aimDispersion = m_aimDispersionTextField.toFloat();
    technicalDispersion = m_technicalDispersionTextField.toFloat();
    ammunitionDispersion = m_ammunitionDispersionTextField.toFloat();
    combatRouteCenterPair = m_combatRouteCenterPairTextField.toFloat();
    rangeToTraverse = m_rangeToTraverseTextField.toFloat();

    indexIntervalRegime = m_intervalRegimeComboBox;  // Текущий индекс intervalRegimeCheckBox

    if (indexIntervalRegime == 0) {
        intervalRegime = 100;
    } else if (indexIntervalRegime == 1) {
        intervalRegime = 200;
    } else if (indexIntervalRegime == 2) {
        intervalRegime = 300;
    }

    intervalSeries = m_intervalSeriesTextField.toFloat();

    indexBombingAltitude = m_bombingAltitudeComboBox;  // Текущий индекс BombingAltitude

    if (indexBombingAltitude == 0) {
        bombingAltitude = 1000;
    } else if (indexBombingAltitude == 1) {
        bombingAltitude = 1500;
    } else if (indexBombingAltitude == 2) {
        bombingAltitude = 2000;
    }

    numberASP = m_numberASPTextField.toFloat();

}
