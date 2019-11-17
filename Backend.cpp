#include "Backend.h"
#include <QDebug>

Backend::Backend(QObject *parent) : QObject(parent)
{

}
// ��������� ����� ������

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

// Связь для параметра "� ассеивание суббоеприпасов"
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

// Связь для параметра "Количество суббоеприпасов"
QString Backend::numberAmmunitionTextField() const
{
    return m_numberAmmunitionTextField;
}

void Backend::setNumberAmmunitionTextField(QString numberAmmunitionTextField)
{
    if (m_numberAmmunitionTextField == numberAmmunitionTextField)
        return;

    m_numberAmmunitionTextField = numberAmmunitionTextField;
    emit numberAmmunitionTextFieldChanged(m_numberAmmunitionTextField);
}

// Связь для параметра "Тип вооружения"
int Backend::indexRadioButton() const
{
    return m_indexRadioButton;
}

void Backend::setIndexRadioButton(int indexRadioButton)
{
    if (m_indexRadioButton == indexRadioButton)
        return;

    m_indexRadioButton = indexRadioButton;
    emit indexRadioButtonChanged(m_indexRadioButton);
}

// Связь для параметра "� адиус поражения КП"
QString Backend::radiusCPTextField() const
{
    return m_radiusCPTextField;
}

void Backend::setRadiusCPTextField(QString radiusCPTextField)
{
    if (m_radiusCPTextField == radiusCPTextField)
        return;

    m_radiusCPTextField = radiusCPTextField;
    emit radiusCPTextFieldChanged(m_radiusCPTextField);
}

// Связь для параметра "� адиус поражения КП12"
QString Backend::radiusCP12TextField() const
{
    return m_radiusCP12TextField;
}

void Backend::setRadiusCP12TextField(QString radiusCP12TextField)
{
    if (m_radiusCP12TextField == radiusCP12TextField)
        return;

    m_radiusCP12TextField = radiusCP12TextField;
    emit radiusCP12TextFieldChanged(m_radiusCP12TextField);
}

// Связь для параметра "� адиус поражения СУ123"
QString Backend::radiusSC123TextField() const
{
    return m_radiusSC123TextField;
}

void Backend::setRadiusSC123TextField(QString radiusSC123TextField)
{
    if (m_radiusSC123TextField == radiusSC123TextField)
        return;

    m_radiusSC123TextField = radiusSC123TextField;
    emit radiusSC123TextFieldChanged(m_radiusSC123TextField);
}

// Связь для параметра "� адиус поражения � ЛС и � ЛВ"
QString Backend::radiusRLSVTextField() const
{
    return m_radiusRLSVTextField;
}

void Backend::setRadiusRLSVTextField(QString radiusRLSVTextField)
{
    if (m_radiusRLSVTextField == radiusRLSVTextField)
        return;

    m_radiusRLSVTextField = radiusRLSVTextField;
    emit radiusRLSVTextFieldChanged(m_radiusRLSVTextField);
}

// Связь для параметра "� адиус поражения ЭГ12"
QString Backend::radiusEG12TextField() const
{
    return m_radiusEG12TextField;
}

void Backend::setRadiusEG12TextField(QString radiusEG12TextField)
{
    if (m_radiusEG12TextField == radiusEG12TextField)
        return;

    m_radiusEG12TextField = radiusEG12TextField;
    emit radiusEG12TextFieldChanged(m_radiusEG12TextField);
}

// Связь для параметра "� адиус поражения кабелей"
QString Backend::radiusCableTextField() const
{
    return m_radiusCableTextField;
}

void Backend::setRadiusCableTextField(QString radiusCableTextField)
{
    if (m_radiusCableTextField == radiusCableTextField)
        return;

    m_radiusCableTextField = radiusCableTextField;
    emit radiusCableTextFieldChanged(m_radiusCableTextField);
}

// Связь для параметра "Количество реализаций"
QString Backend::numberRealizationTextField() const
{
    return m_numberRealizationTextField;
}

void Backend::setNumberRealizationTextField(QString numberRealizationTextField)
{
    if (m_numberRealizationTextField == numberRealizationTextField)
        return;

    m_numberRealizationTextField = numberRealizationTextField;
    emit numberRealizationTextFieldChanged(m_numberRealizationTextField);
}

// Связь для параметров W1 - W6
QString Backend::W0TextField() const
{
    return m_W0TextField;
}

QString Backend::W1TextField() const
{
    return m_W1TextField;
}

QString Backend::W2TextField() const
{
    return m_W2TextField;
}

QString Backend::W3TextField() const
{
    return m_W3TextField;
}

QString Backend::W4TextField() const
{
    return m_W4TextField;
}

QString Backend::W5TextField() const
{
    return m_W5TextField;
}

QString Backend::W6TextField() const
{
    return m_W6TextField;
}

void Backend::setW0TextField(QString W0TextField)
{
    if (m_W0TextField == W0TextField)
        return;

    m_W0TextField = W0TextField;
    emit W0TextFieldChanged(m_W0TextField);
}

void Backend::setW1TextField(QString W1TextField)
{
    if (m_W1TextField == W1TextField)
        return;

    m_W1TextField = W1TextField;
    emit W1TextFieldChanged(m_W1TextField);
}

void Backend::setW2TextField(QString W2TextField)
{
    if (m_W2TextField == W2TextField)
        return;

    m_W2TextField = W2TextField;
    emit W2TextFieldChanged(m_W2TextField);
}

void Backend::setW3TextField(QString W3TextField)
{
    if (m_W3TextField == W3TextField)
        return;

    m_W3TextField = W3TextField;
    emit W3TextFieldChanged(m_W3TextField);
}

void Backend::setW4TextField(QString W4TextField)
{
    if (m_W4TextField == W4TextField)
        return;

    m_W4TextField = W4TextField;
    emit W4TextFieldChanged(m_W4TextField);
}

void Backend::setW5TextField(QString W5TextField)
{
    if (m_W5TextField == W5TextField)
        return;

    m_W5TextField = W5TextField;
    emit W5TextFieldChanged(m_W5TextField);
}

void Backend::setW6TextField(QString W6TextField)
{
    if (m_W6TextField == W6TextField)
        return;

    m_W6TextField = W6TextField;
    emit W6TextFieldChanged(m_W6TextField);
}



//----------------------------------------------------------

void Backend::initialization()  // Функция инициализации переменных для вычислений
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

    // Например вот так можно передать в поле для количества АСП
    numberASP = 10;
    setNumberASPTextField(QString::number(numberASP));

    numberAmmunition = m_numberAmmunitionTextField.toFloat();

    if (m_indexRadioButton == 1) {
        qDebug() << "currentIndexRadioButton" << m_indexRadioButton;
    } else if (m_indexRadioButton == 2) {
        qDebug() << "currentIndexRadioButton" << m_indexRadioButton;
    } else if (m_indexRadioButton == 3) {
        qDebug() << "currentIndexRadioButton" << m_indexRadioButton;
    } else if (m_indexRadioButton == 4) {
        qDebug() << "currentIndexRadioButton" << m_indexRadioButton;
    } else if (m_indexRadioButton == 5) {
        qDebug() << "currentIndexRadioButton" << m_indexRadioButton;
    }

    // Например вот так можно передать в поле для радиуса КП значение
    radiusCP = 20.20;
    setRadiusCPTextField(QString::number(radiusCP));

    radiusCP12 = 30.30;
    setRadiusCP12TextField(QString::number(radiusCP12));

    radiusSC123 = 40.40;
    setRadiusSC123TextField(QString::number(radiusSC123));

    radiusRLSV = 50.50;
    setRadiusRLSVTextField(QString::number(radiusRLSV));

    radiusEG12 = 60.60;
    setRadiusEG12TextField(QString::number(radiusEG12));

    radiusCable = 70.70;
    setRadiusCableTextField(QString::number(radiusCable));

    numberRealization = m_numberRealizationTextField.toFloat();

    W0 = 0.85;
    setW0TextField(QString::number(W0));

    W1 = 0.85;
    setW1TextField(QString::number(W1));

    W2 = 0.85;
    setW2TextField(QString::number(W2));

    W3 = 0.85;
    setW3TextField(QString::number(W3));

    W4 = 0.85;
    setW4TextField(QString::number(W4));

    W5 = 0.85;
    setW5TextField(QString::number(W5));

    W6 = 0.85;
    setW6TextField(QString::number(W6));

}
