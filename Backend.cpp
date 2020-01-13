#include "Backend.h"
#include <QDebug>
#include <QTime>

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

// Связь для параметра "Радиус поражения КП"
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

// Связь для параметра "Радиус поражения КП12"
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

// Связь для параметра "Радиус поражения СУ123"
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

// Связь для параметра "Радиус поражения РЛС и РЛВ"
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

// Связь для параметра "Радиус поражения ЭГ12"
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

// Связь для параметра "Радиус поражения кабелей"

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

int Backend::maxNumberElementX()
{
    //maxNumberX = m_VectCoordX.size();
    //qDebug()<<m_VectCoordX.count();
    return m_VectCoordX.count();
}

int Backend::maxNumberElementY()
{
    //maxNumberY = m_VectCoordY.size();
    //qDebug()<<m_VectCoordY.count();
    return m_VectCoordY.count();
}

void Backend::clearVectorXYColor()
{
    m_VectCoordX.clear();
    m_VectCoordY.clear();
    m_VectorColor.clear();
    m_FuncElem.clear();
    m_VectorEllipse.clear();
}

void Backend::onRadioButtonClicked()
{
    if (m_indexRadioButton == 1) {

        radiusCP = 23;
        setRadiusCPTextField(QString::number(radiusCP));

        radiusCP12 = 23;
        setRadiusCP12TextField(QString::number(radiusCP12));

        radiusSC123 = 23;
        setRadiusSC123TextField(QString::number(radiusSC123));

        radiusRLSV = 24;
        setRadiusRLSVTextField(QString::number(radiusRLSV));

        radiusEG12 = 20;
        setRadiusEG12TextField(QString::number(radiusEG12));

        radiusCable = 3.4;
        setRadiusCableTextField(QString::number(radiusCable));

        numberASP = 38;
        setNumberASPTextField(QString::number(numberASP));

        numberAmmunition = 0;
        setNumberAmmunitionTextField(QString::number(numberAmmunition));

    } else if (m_indexRadioButton == 2) {

        radiusCP = 26;
        setRadiusCPTextField(QString::number(radiusCP));

        radiusCP12 = 26;
        setRadiusCP12TextField(QString::number(radiusCP12));

        radiusSC123 = 26;
        setRadiusSC123TextField(QString::number(radiusSC123));

        radiusRLSV = 27;
        setRadiusRLSVTextField(QString::number(radiusRLSV));

        radiusEG12 = 22;
        setRadiusEG12TextField(QString::number(radiusEG12));

        radiusCable = 4.6;
        setRadiusCableTextField(QString::number(radiusCable));

        numberASP = 16;
        setNumberASPTextField(QString::number(numberASP));

        numberAmmunition = 0;
        setNumberAmmunitionTextField(QString::number(numberAmmunition));

    } else if (m_indexRadioButton == 3) {

        radiusCP = 13;
        setRadiusCPTextField(QString::number(radiusCP));

        radiusCP12 = 13;
        setRadiusCP12TextField(QString::number(radiusCP12));

        radiusSC123 = 13;
        setRadiusSC123TextField(QString::number(radiusSC123));

        radiusRLSV = 14;
        setRadiusRLSVTextField(QString::number(radiusRLSV));

        radiusEG12 = 12;
        setRadiusEG12TextField(QString::number(radiusEG12));

        radiusCable = 2.4;
        setRadiusCableTextField(QString::number(radiusCable));

        numberASP = 34;
        setNumberASPTextField(QString::number(numberASP));

        numberAmmunition = 3;
        setNumberAmmunitionTextField(QString::number(numberAmmunition));

    } else if (m_indexRadioButton == 4) {

        radiusCP = 0;
        setRadiusCPTextField(QString::number(radiusCP));

        radiusCP12 = 0;
        setRadiusCP12TextField(QString::number(radiusCP12));

        radiusSC123 = 0;
        setRadiusSC123TextField(QString::number(radiusSC123));

        radiusRLSV = 0;
        setRadiusRLSVTextField(QString::number(radiusRLSV));

        radiusEG12 = 0;
        setRadiusEG12TextField(QString::number(radiusEG12));

        radiusCable = 0.6;
        setRadiusCableTextField(QString::number(radiusCable));

        numberASP = 14;
        setNumberASPTextField(QString::number(numberASP));

        numberAmmunition = 42;
        setNumberAmmunitionTextField(QString::number(numberAmmunition));

    } else if (m_indexRadioButton == 5) {

        radiusCP = 0;
        setRadiusCPTextField(QString::number(radiusCP));

        radiusCP12 = 0;
        setRadiusCP12TextField(QString::number(radiusCP12));

        radiusSC123 = 0;
        setRadiusSC123TextField(QString::number(radiusSC123));

        radiusRLSV = 0;
        setRadiusRLSVTextField(QString::number(radiusRLSV));

        radiusEG12 = 0;
        setRadiusEG12TextField(QString::number(radiusEG12));

        radiusCable = 0.6;
        setRadiusCableTextField(QString::number(radiusCable));

        numberASP = 8;
        setNumberASPTextField(QString::number(numberASP));

        numberAmmunition = 56;
        setNumberAmmunitionTextField(QString::number(numberAmmunition));
    }
}

void Backend::onChangeAltitude()
{
    indexBombingAltitude = m_bombingAltitudeComboBox;  // Текущий индекс BombingAltitude

    if (indexBombingAltitude == 0) {
        bombingAltitude = 1000;
        technicalDispersion = bombingAltitude * 0.004;
        setTechnicalDispersionTextField(QString::number(technicalDispersion));
    }
    else if (indexBombingAltitude == 1) {
        bombingAltitude = 1500;
        technicalDispersion = bombingAltitude * 0.004;
        setTechnicalDispersionTextField(QString::number(technicalDispersion));
    }
    else if (indexBombingAltitude == 2) {
        bombingAltitude = 2000;
        technicalDispersion = bombingAltitude * 0.004;
        setTechnicalDispersionTextField(QString::number(technicalDispersion));
    }
}

float Backend::changeValueProgBar()
{
    float valuePB = m_valueProgreeBar;
    return valuePB;
}

void Backend::initFEoptions()
{
    quint8 d = 12;  // смещение для ФЭ с 1 по 11 так как отрисовка происходит не от центра, а от левого верхнегно угла

    // ----------------------------------------------- Расположение объектов ------------------------------------------------------
    // -- Координата X ------ Координата Y -------- Длина ------------ Ширина ------------- Угол ---------- Радиус поражения ------

    FEopt[1][1]=270+d;    FEopt[1][2]=280+d;    FEopt[1][3]=25;     FEopt[1][4]=25;    FEopt[1][5]=8;       FEopt[1][6]=radiusCP;
    FEopt[2][1]=420+d;    FEopt[2][2]=110+d;    FEopt[2][3]=25;     FEopt[2][4]=25;    FEopt[2][5]=15;      FEopt[2][6]=radiusCP12;
    FEopt[3][1]=300+d;    FEopt[3][2]=480+d;    FEopt[3][3]=25;     FEopt[3][4]=25;    FEopt[3][5]=41;      FEopt[3][6]=radiusCP12;

    FEopt[4][1]=170+d;    FEopt[4][2]=50+d;     FEopt[4][3]=25;     FEopt[4][4]=25;    FEopt[4][5]=35;      FEopt[4][6]=radiusRLSV;
    FEopt[5][1]=130+d;    FEopt[5][2]=500+d;    FEopt[5][3]=25;     FEopt[5][4]=25;    FEopt[5][5]=81;      FEopt[5][6]=radiusRLSV;

    FEopt[6][1]=480+d;    FEopt[6][2]=220+d;    FEopt[6][3]=25;     FEopt[6][4]=25;    FEopt[6][5]=0;       FEopt[6][6]=radiusSC123;
    FEopt[7][1]=440+d;    FEopt[7][2]=350+d;    FEopt[7][3]=25;     FEopt[7][4]=25;    FEopt[7][5]=0;       FEopt[7][6]=radiusSC123;
    FEopt[8][1]=550+d;    FEopt[8][2]=440+d;    FEopt[8][3]=25;     FEopt[8][4]=25;    FEopt[8][5]=130;     FEopt[8][6]=radiusSC123;

    FEopt[9][1]=90+d;     FEopt[9][2]=270+d;    FEopt[9][3]=25;     FEopt[9][4]=25;    FEopt[9][5]=0;       FEopt[9][6]=radiusEG12;
    FEopt[10][1]=540+d;   FEopt[10][2]=40+d;    FEopt[10][3]=25;    FEopt[10][4]=25;   FEopt[10][5]=32;     FEopt[10][6]=radiusEG12;
    FEopt[11][1]=490+d;   FEopt[11][2]=530+d;   FEopt[11][3]=25;    FEopt[11][4]=25;   FEopt[11][5]=13;     FEopt[11][6]=radiusEG12;

    FEopt[12][1]=0;     FEopt[12][2]=280;   FEopt[12][3]=200;   FEopt[12][4]=4;    FEopt[12][5]=0;      FEopt[12][6]=radiusCable;
    FEopt[13][1]=135;   FEopt[14][2]=280;   FEopt[14][3]=181;   FEopt[14][4]=4;    FEopt[14][5]=-2;     FEopt[14][6]=radiusCable;
    FEopt[14][1]=200;   FEopt[13][2]=168;   FEopt[13][3]=231;   FEopt[13][4]=4;    FEopt[13][5]=70;     FEopt[13][6]=radiusCable;
    FEopt[15][1]=120;   FEopt[15][2]=400;   FEopt[15][3]=243;   FEopt[15][4]=4;    FEopt[15][5]=-80;    FEopt[15][6]=radiusCable;
    FEopt[16][1]=220;   FEopt[16][2]=150;   FEopt[16][3]=254;   FEopt[16][4]=4;    FEopt[16][5]=-66;    FEopt[16][6]=radiusCable;
    FEopt[17][1]=210;   FEopt[17][2]=400;   FEopt[17][3]=235;   FEopt[17][4]=4;    FEopt[17][5]=-120;   FEopt[17][6]=radiusCable;
    FEopt[18][1]=355;   FEopt[18][2]=200;   FEopt[18][3]=219;   FEopt[18][4]=4;    FEopt[18][5]=45;     FEopt[18][6]=radiusCable;
    FEopt[19][1]=290;   FEopt[19][2]=400;   FEopt[19][3]=235;   FEopt[19][4]=4;    FEopt[19][5]=-80;    FEopt[19][6]=radiusCable;
    FEopt[20][1]=480;   FEopt[20][2]=90;    FEopt[20][3]=135;   FEopt[20][4]=4;    FEopt[20][5]=26;     FEopt[20][6]=radiusCable;
    FEopt[21][1]=410;   FEopt[21][2]=520;   FEopt[21][3]=195;   FEopt[21][4]=4;    FEopt[21][5]=-13;    FEopt[21][6]=radiusCable;
    FEopt[22][1]=460;   FEopt[22][2]=150;   FEopt[22][3]=127;   FEopt[22][4]=4;    FEopt[22][5]=-62;    FEopt[22][6]=radiusCable;
    FEopt[23][1]=460;   FEopt[23][2]=300;   FEopt[23][3]=131;   FEopt[23][4]=4;    FEopt[23][5]=-110;   FEopt[23][6]=radiusCable;
    FEopt[24][1]=500;   FEopt[24][2]=390;   FEopt[24][3]=150;   FEopt[24][4]=4;    FEopt[24][5]=-42;    FEopt[24][6]=radiusCable;
    FEopt[25][1]=420;   FEopt[25][2]=470;   FEopt[25][3]=254;   FEopt[25][4]=4;    FEopt[25][5]=11;     FEopt[25][6]=radiusCable;
}

void Backend::evalDangerousExplosionsArea() // функция расчёта области опасных разрывов
{
    float fi_rad, deltaX1, deltaX2, deltaY1, deltaY2;

    for (int i = 1; i <= 25; ++i)
    {
        fi_rad = FEopt[i][5] * M_PI/180;
        deltaX1 = (FEopt[i][3] / 2 + FEopt[i][6]) * cos(fi_rad);
        deltaX2 = (FEopt[i][4] / 2 + FEopt[i][6]) * cos(M_PI / 2 - fi_rad);
        deltaY1 = (FEopt[i][3] / 2 + FEopt[i][6]) * sin(fi_rad);
        deltaY2 = (FEopt[i][4] / 2 + FEopt[i][6]) * sin(M_PI / 2 - fi_rad);

        // четыре координаты углов прямоугольника (цели)
        DEA[i][1] = FEopt[i][1] - deltaX1 - deltaX2;
        DEA[i][2] = FEopt[i][2] + deltaY1 - deltaY2;
        DEA[i][3] = FEopt[i][1] + deltaX1 - deltaX2;
        DEA[i][4] = FEopt[i][2] - deltaY1 - deltaY2;
        DEA[i][5] = FEopt[i][1] + deltaX1 + deltaX2;
        DEA[i][6] = FEopt[i][2] - deltaY1 + deltaY2;
        DEA[i][7] = FEopt[i][1] - deltaX1 + deltaX2;
        DEA[i][8] = FEopt[i][2] + deltaY1 + deltaY2;
    }
}

void Backend::damageCalculation()
{    
    float aimPoint[5][3]; // координаты точки прицеливания
    float RBK[static_cast<int>(numberAmmunition+1)][3]; // 14:32 14.12.2019 Vlad used static_cast first time
    /* координаты точек прицеливания суббоеприпасов
                           * с учётом рассеивания суббоеприпасов */
    float Zalp_X, Zalp_Y; // координаты точки, с учётом прицельного рассеивания
    float xfab, yfab;     // координаты точки, с учётом технического рассеивания
    bool ellipse = true;

    // сброс состояний системы
    for (int i = 0; i < 7; ++i) {
        dukr[i] = 0;
    }

    //Вычисляем точки прцеливания
    aimPoint[1][1] = FEopt[1][1] - rangeToTraverse;
    aimPoint[1][2] = 300 - combatRouteCenterPair + intervalRegime / 2;
    aimPoint[2][1] = FEopt[1][1] - rangeToTraverse  + intervalSeries;
    aimPoint[2][2] = 300 - combatRouteCenterPair + intervalRegime / 2;
    aimPoint[3][1] = FEopt[1][1] - rangeToTraverse;
    aimPoint[3][2] = 300 - combatRouteCenterPair - intervalRegime / 2;
    aimPoint[4][1] = FEopt[1][1] - rangeToTraverse  + intervalSeries;
    aimPoint[4][2] = 300 - combatRouteCenterPair - intervalRegime / 2;

    std::mt19937 randomGenerator(time(0)); /* инициализация генератора псевдослучайных чисел текущим
                                            * системным временем */
    m_valueProgreeBar = 0;

    for (int NumB = 1; NumB <= numberRealization; ++NumB) // цикл по реализациям
    {
        for (int j = 1; j <= 25; ++j) // сброс состояний элементов ЗРК в работоспособные
            FE[j] = true;

        for (int AreaNumber = 1; AreaNumber <= 4; ++AreaNumber) // цикл по четырём залпам
        {
            // нормальное распределение с [МО = точка прицеливания], [СКО = прицельное рассеивание]
            std::normal_distribution<float> ndX(aimPoint[AreaNumber][1], aimDispersion),
                    ndY(aimPoint[AreaNumber][2], aimDispersion);
            Zalp_X = ndX(randomGenerator);
            Zalp_Y = ndY(randomGenerator);

            for (int N_ASP = 1; N_ASP <= round(numberASP/2); ++N_ASP) // цикл по количеству АСП
            {
                if(RBKd == true)
                {
                    // если не ОФАБ
                    ellipse = false;

                    for (int k = 1; k <= numberAmmunition; ++k) // цикл по количеству суббоеприпасов
                    {
                        /* равномерное распределение с [a =-3 * рассеивание суббоеприпасов]
                         * [б =3 * рассеивание суббоеприпасов] (для udX) */
                        std::uniform_real_distribution<float> udX(-ammunitionDispersion/2, ammunitionDispersion/2),
                                udY(-ammunitionDispersion/2, ammunitionDispersion/2);
                        RBK[k][1] = Zalp_X + udX(randomGenerator);
                        RBK[k][2] = Zalp_Y + udY(randomGenerator);
                        bool flag = true; // флаг для рисования

                        for (int N_FE = 1; N_FE <= 25; ++N_FE) // цикл по ФЭ
                        {
                            if(Destroy(RBK[k][1],RBK[k][2],
                                       DEA[N_FE][1],
                                       DEA[N_FE][2],
                                       DEA[N_FE][3],
                                       DEA[N_FE][4],
                                       DEA[N_FE][5],
                                       DEA[N_FE][6],
                                       DEA[N_FE][7],
                                       DEA[N_FE][8]))
                            {
                                FE[N_FE] = false; // отмечаем элемент, по которому попали
                                flag = false;
                            }
                        }

                        if(NumB==1) // для рисования используем расчёты только первой реализации
                        {
                            // заполняем вектор координат попадания
                            m_VectCoordX.push_back(static_cast<int>(RBK[k][1]));
                            m_VectCoordY.push_back(static_cast<int>(RBK[k][2]));

                            // заполняем вектор цветов, для соответствующих координат попадания
                            if(!flag)
                                m_VectorColor.push_back(Qt::red);
                            else
                                m_VectorColor.push_back(Qt::green);

                            // эллипс рассеивания
                            if((k == 1) && (N_ASP == 1)) // будет 4 эллипса (для каждого залпа по одному)
                            {
                                m_VectorEllipse.push_back(static_cast<int>(Zalp_X));
                                m_VectorEllipse.push_back(static_cast<int>(Zalp_Y));
                                m_VectorEllipse.push_back(static_cast<int>(ammunitionDispersion));
                                m_VectorEllipse.push_back(static_cast<int>(ammunitionDispersion));
                            }
                        }
                    }
                } else
                {
                    // если ОФАБ

                    // нормальное распределение с [МО = точка прицеливания], [СКО = техническое рассеивание]
                    std::normal_distribution<float> ndX(Zalp_X, technicalDispersion), ndY(Zalp_Y, technicalDispersion);
                    xfab = ndX(randomGenerator);
                    yfab = ndY(randomGenerator);
                    bool flag = true; // флаг для рисования

                    for (int N_FE = 1; N_FE <= 25; ++N_FE) // цикл по ФЭ
                    {
                        if(Destroy(xfab, yfab,
                                   DEA[N_FE][1],
                                   DEA[N_FE][2],
                                   DEA[N_FE][3],
                                   DEA[N_FE][4],
                                   DEA[N_FE][5],
                                   DEA[N_FE][6],
                                   DEA[N_FE][7],
                                   DEA[N_FE][8]))
                        {
                            FE[N_FE] = false; // отмечаем элемент, по которому попали
                            flag = false;
                        }
                    }

                    if(NumB==1) // для рисования используем расчёты только первой реализации
                    {
                        // заполняем вектор координат попадания
                        m_VectCoordX.push_back(static_cast<int>(xfab));
                        m_VectCoordY.push_back(static_cast<int>(yfab));

                        // заполняем вектор цветов, для соответствующих координат попадания
                        if(!flag)
                            m_VectorColor.push_back(Qt::red);
                        else
                            m_VectorColor.push_back(Qt::green);

                        // эллипс рассеивания
                        if(N_ASP == 1) // будет 4 эллипса (для каждого залпа по одному)
                        {
                            m_VectorEllipse.push_back(static_cast<int>(Zalp_X));
                            m_VectorEllipse.push_back(static_cast<int>(Zalp_Y));
                            m_VectorEllipse.push_back(static_cast<int>(technicalDispersion*6));
                            m_VectorEllipse.push_back(static_cast<int>(technicalDispersion*6));
                        }
                    }
                }
            }
        }

        // заполнили вектор состояний ФЭ (для рисования)
        if(NumB == 1)
        {
            for (int i = 1; i < 26; ++i)
            {
                m_FuncElem.push_back(FE[i]);
            }
        }

        solveFE(0); // расчёт полного списка состояний ЗРК

        m_valueProgreeBar++;
        // float valPB = NumB / numberRealization;
        // float PB1 = static_cast<float>(valPB);
        //setValueProgreeBar(PB1);
        //qDebug() << "ProgressBar = " << m_valueProgreeBar;
    }

    m_VectorEllipse.push_back(static_cast<int>(ellipse));
    // Тест по графу
    //test();

    // вывод расчитанных состояний в процентах
    float res = 10000 * (dukr[0] / numberRealization) / 100;
    W0 = res;
    setW0TextField(QString::number(W0)+'%');
    res = 10000 * (dukr[1] / numberRealization) / 100;
    W1 = res;
    setW1TextField(QString::number(W1)+'%');
    res = 10000 * (dukr[2] / numberRealization) / 100;
    W2 = res;
    setW2TextField(QString::number(W2)+'%');
    res = 10000 * (dukr[3] / numberRealization) / 100;
    W3 = res;
    setW3TextField(QString::number(W3)+'%');
    res = 10000 * (dukr[4] / numberRealization) / 100;
    W4 = res;
    setW4TextField(QString::number(W4)+'%');
    res = 10000 * (dukr[5] / numberRealization) / 100;
    W5 = res;
    setW5TextField(QString::number(W5)+'%');
    res = 10000 * (dukr[6] / numberRealization) / 100;
    W6 = res;
    setW6TextField(QString::number(W6)+'%');
}




bool Backend::Destroy(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    int i = 0;

    if(sgn((x-x2)/(x2-x1)-(y-y2)/(y2-y1))==sgn((x3-x2)/(x2-x1)-(y3-y2)/(y2-y1)))
        i++;
    if(sgn((x-x3)/(x3-x2)-(y-y3)/(y3-y2))==sgn((x4-x3)/(x3-x2)-(y4-y3)/(y3-y2)))
        i++;
    if(sgn((x-x4)/(x4-x3)-(y-y4)/(y4-y3))==sgn((x1-x4)/(x4-x3)-(y1-y4)/(y4-y3)))
        i++;
    if(sgn((x-x1)/(x1-x4)-(y-y1)/(y1-y4))==sgn((x2-x1)/(x1-x4)-(y2-y1)/(y1-y4)))
        i++;
    if(i==4) return true;
    else return false;
}

int Backend::sgn(float val)
{
    if(val < 0)
        return -1;
    if(val == 0)
        return 0;
    if (val > 0)
        return 1;
}

void Backend::test()
{
    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[19] = false;
    solveFE(1);
    writeFE(1);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[25] = false;
    solveFE(1);
    writeFE(2);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[23] = false;
    solveFE(1);
    writeFE(3);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[24] = false;
    solveFE(1);
    writeFE(4);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[18] = false;
    solveFE(1);
    writeFE(5);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[22] = false;
    solveFE(1);
    writeFE(6);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[8] = false;
    solveFE(1);
    writeFE(71);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[24] = false;
    FE[25] = false;
    solveFE(1);
    writeFE(72);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[7] = false;
    solveFE(1);
    writeFE(81);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[23] = false;
    FE[24] = false;
    solveFE(1);
    writeFE(82);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[6] = false;
    solveFE(1);
    writeFE(91);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[22] = false;
    FE[23] = false;
    solveFE(1);
    writeFE(92);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[3] = false;
    solveFE(1);
    writeFE(101);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[19] = false;
    FE[25] = false;
    solveFE(1);
    writeFE(102);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[2] = false;
    solveFE(1);
    writeFE(111);

    for (int j = 1; j <= 25; ++j)
        FE[j] = true;
    FE[18] = false;
    FE[22] = false;
    solveFE(1);
    writeFE(112);
}

void Backend::solveFE(bool test)
{
    if(test)
        for (int i = 0; i < 7; ++i)
        {
            dukr[i] = 0;
        }

    F0 = FE[2] && FE[3] && FE[6] && FE[7] && FE[8] &&
            ((FE[18] && FE[22] && FE[23] && FE[24]&& FE[25] && FE[19]) ||
            (FE[18] && FE[22] && FE[23] && FE[24] && FE[25] && (! FE[19])) ||
            (FE[18] && FE[22] && FE[23] && FE[24]&& !(FE[25]) && FE[19]) ||
            (FE[18] && FE[22] && FE[23] && !(FE[24])&& FE[25] && FE[19]) ||
            (FE[18] && FE[22] && !(FE[23]) && FE[24]&& FE[25] && FE[19]) ||
            (FE[18] && !(FE[22]) && FE[23] && FE[24]&& FE[25] && FE[19]) ||
            (!(FE[18]) && FE[22] && FE[23] && FE[24]&& FE[25] && FE[19]));

    F1 = FE[2] && FE[3] && FE[18] && FE[19] && ((FE[6] && FE[7] && FE[22] && FE[23] &&
            (!(FE[8]) || (FE[8] && !(FE[24]) && !(FE[25])))) || (FE[6] && FE[8] && FE[22] && FE[25] &&
            (!(FE[7]) || (FE[7] && !(FE[23]) && !(FE[24])))) || (FE[7] && FE[8] && FE[24] && FE[25]
            && (!(FE[6]) || (FE[6] && !(FE[22]) && !(FE[23])))));

    F2 = FE[6] && FE[23] && FE[7] && FE[24] && FE[8] && ((FE[2] && FE[18] && FE[22] &&
            (!FE[3] || (FE[3] && !FE[19] && !(FE[25])))) || (FE[3] && FE[19] && FE[25] &&
            ((!FE[2] || (FE[2] && !FE[18] && !FE[22])))));

    F3 = FE[2] && FE[3] && FE[18] && FE[19] && ((FE[6] && FE[22] &&
            (!(FE[7]) || (FE[7] && !FE[23])) && (!(FE[8]) || (FE[8] && !(FE[25])))) ||
            (((FE[8]) && FE[25]) && (!(FE[6]) || (FE[6] && !(FE[22]))) && (!FE[7] || (FE[7] && !FE[24]))));

    F4 = FE[7] && ((FE[2] && FE[6] && FE[18] && FE[22] && FE[23] &&
            (!(FE[3]) || (FE[3] && !(FE[19]))) && (!(FE[8]) || (FE[8] && !(FE[24]))))  ||
            ((FE[3] && FE[8]&& FE[19]&& FE[24]&& FE[25]&&
            (!(FE[2]) || (FE[2] && !(FE[18]))) && (!(FE[6])|| (FE[6] && !(FE[23]))))));

    F5 = (FE[2] && FE[6] && FE[18] && FE[22] && (!(FE[3]) || (FE[3] && !(FE[19]))) &&
            (!(FE[7]) || (FE[7] && !(FE[23])))) || (FE[3] && FE[8] && FE[19] && FE[25]&&
            (!(FE[2]) || (FE[2] && !(FE[18]))) && (!(FE[7]) || (FE[7] && !(FE[24]))));

    F6 = (!(FE[2]) || (FE[2] && !(FE[6])) || (FE[2] && FE[6] && !FE[18]) || (FE[2] && FE[6] && FE[18] && !FE[22])) &&
            (!(FE[3]) || (FE[3] && !(FE[8])) || (FE[3] && FE[8] && !(FE[19])) || (FE[3] && FE[8] && FE[19] &&!(FE[25])));

    KP = FE[1] && FE[5] && FE[9] && FE[17] &&
            ((FE[12] && FE[13]) ||
            (FE[4] && FE[16] && (FE[13] || FE[14] || FE[15])));

    if(KP && F0)
        dukr[0]++;
    else if (KP && F1)
        dukr[1]++;
    else if (KP && F2)
        dukr[2]++;
    else if (KP && F3)
        dukr[3]++;
    else if (KP && F4)
        dukr[4]++;
    else if (KP && F5)
        dukr[5]++;
    else if (F6 || !(KP))
        dukr[6]++;
}

void Backend::writeFE(int Nv)
{
    qDebug() << "Nv = " << Nv << endl;
    for (int i = 0; i < 7; ++i)
    {
        qDebug() << "dukr[" << i << "] = " << dukr[i];
    }
    qDebug() << endl;
}

//----------------------------------------------------------

void Backend::initialization()  // Функция инициализации переменных для вычислений
{
    aimDispersion = m_aimDispersionTextField.toFloat();

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

    numberASP = m_numberASPTextField.toFloat();

    numberAmmunition = m_numberAmmunitionTextField.toFloat();

    if (m_indexRadioButton == 1) {
        RBKd = false;
    } else if (m_indexRadioButton == 2) {
        RBKd = false;
    } else if (m_indexRadioButton == 3) {
        RBKd = true;
    } else if (m_indexRadioButton == 4) {
        RBKd = true;
    } else if (m_indexRadioButton == 5) {
        RBKd = true;
    }

    numberRealization = m_numberRealizationTextField.toFloat();

    // Основные вычисления
    initFEoptions(); // заполнили массив FEopt
    evalDangerousExplosionsArea(); // заполнили массив DEA
    damageCalculation(); // посчитали урон

    m_valueProgreeBar = 0.7;
}


