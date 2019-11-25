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

void Backend::initFEoptions()
{
    FEopt[1][1]=96;    FEopt[1][2]=224;   FEopt[1][3]=10;    FEopt[1][4]=3; FEopt[1][5]=15;    FEopt[1][6]=radiusCP;
    FEopt[2][1]=339;   FEopt[2][2]=308;   FEopt[2][3]=10;    FEopt[2][4]=3; FEopt[2][5]=15;    FEopt[2][6]=radiusCP12;
    FEopt[3][1]=316;   FEopt[3][2]=0;     FEopt[3][3]=10;    FEopt[3][4]=3; FEopt[3][5]=15;    FEopt[3][6]=radiusCP12;
    FEopt[4][1]=171;   FEopt[4][2]=349;   FEopt[4][3]=10;    FEopt[4][4]=3; FEopt[4][5]=15;    FEopt[4][6]=radiusRLSV;
    FEopt[5][1]=85;    FEopt[5][2]=103;   FEopt[5][3]=10;    FEopt[5][4]=3; FEopt[5][5]=15;    FEopt[5][6]=radiusRLSV;
    FEopt[6][1]=310;   FEopt[6][2]=249;   FEopt[6][3]=8;     FEopt[6][4]=4; FEopt[6][5]=15;    FEopt[6][6]=radiusSC123;
    FEopt[7][1]=270;   FEopt[7][2]=177;   FEopt[7][3]=8;     FEopt[7][4]=4; FEopt[7][5]=15;    FEopt[7][6]=radiusSC123;
    FEopt[8][1]=268;   FEopt[8][2]=95;    FEopt[8][3]=8;     FEopt[8][4]=4; FEopt[8][5]=15;    FEopt[8][6]=radiusSC123;
    FEopt[9][1]=0;     FEopt[9][2]=250;   FEopt[9][3]=6;     FEopt[9][4]=2; FEopt[9][5]=15;    FEopt[9][6]=radiusCable;
    FEopt[10][1]=350;  FEopt[10][2]=321;  FEopt[10][3]=6;    FEopt[10][4]=2;FEopt[10][5]=15;   FEopt[10][6]=radiusEG12;
    FEopt[11][1]=268;  FEopt[11][2]=12;   FEopt[11][3]=6;    FEopt[11][4]=2;FEopt[11][5]=15;   FEopt[11][6]=radiusEG12;
    FEopt[12][1]=-70.6;FEopt[12][2]=125;  FEopt[12][3]=200;  FEopt[12][4]=0;FEopt[12][5]=45;   FEopt[12][6]=radiusCable;
    FEopt[13][1]=96/2; FEopt[13][2]=237;  FEopt[13][3]=99.5; FEopt[13][4]=0;FEopt[13][5]=15.15;FEopt[13][6]=radiusCable;
    FEopt[14][1]=85.5; FEopt[14][2]=299.5;FEopt[14][3]=197.5;FEopt[14][4]=0;FEopt[14][5]=150;  FEopt[14][6]=radiusCable;
    FEopt[15][1]=42.5; FEopt[15][2]=176.5;FEopt[15][3]=169.8;FEopt[15][4]=0;FEopt[15][5]=60;   FEopt[15][6]=radiusCable;
    FEopt[16][1]=133.5;FEopt[16][2]=286.5;FEopt[16][3]=145.8;FEopt[16][4]=0;FEopt[16][5]=121;  FEopt[16][6]=radiusCable;
    FEopt[17][1]=90.5; FEopt[17][2]=163.5;FEopt[17][3]=121.5;FEopt[17][4]=0;FEopt[17][5]=95.5; FEopt[17][6]=radiusCable;
    FEopt[18][1]=247.5;FEopt[18][2]=266;  FEopt[18][3]=314.4;FEopt[18][4]=0;FEopt[18][5]=164.5;FEopt[18][6]=radiusCable;
    FEopt[19][1]=206;  FEopt[19][2]=112;  FEopt[19][3]=304;  FEopt[19][4]=0;FEopt[19][5]=45.5; FEopt[19][6]=radiusCable;
    FEopt[20][1]=374.5;FEopt[20][2]=314.5;FEopt[20][3]=50.6; FEopt[20][4]=0;FEopt[20][5]=15;   FEopt[20][6]=radiusCable;
    FEopt[21][1]=292;  FEopt[21][2]=6;    FEopt[21][3]=50;   FEopt[21][4]=0;FEopt[21][5]=15;   FEopt[21][6]=radiusCable;
    FEopt[22][1]=354.5;FEopt[22][2]=278.5;FEopt[22][3]=106.8;FEopt[22][4]=0;FEopt[22][5]=146.5;FEopt[22][6]=radiusCable;
    FEopt[23][1]=290;  FEopt[23][2]=213;  FEopt[23][3]=82.4; FEopt[23][4]=0;FEopt[23][5]=119.1;FEopt[23][6]=radiusCable;
    FEopt[24][1]=269;  FEopt[24][2]=136;  FEopt[24][3]=84;   FEopt[24][4]=0;FEopt[24][5]=91.3; FEopt[24][6]=radiusCable;
    FEopt[25][1]=292;  FEopt[25][2]=95/2; FEopt[25][3]=106.4;FEopt[25][4]=0;FEopt[25][5]=63.1; FEopt[25][6]=radiusCable;
}

void Backend::evalDangerousExplosionsArea()
{
    float fi_rad, deltaX1, deltaX2, deltaY1, deltaY2;

    for (int i = 1; i <= 25; ++i)
    {
        fi_rad = FEopt[i][5] * M_PI/180;
        deltaX1 = (FEopt[i][3] / 2 + FEopt[i][6]) * cos(fi_rad);
        deltaX2 = (FEopt[i][4] / 2 + FEopt[i][6]) * cos(M_PI / 2 - fi_rad);
        deltaY1 = (FEopt[i][3] / 2 + FEopt[i][6]) * sin(fi_rad);
        deltaY2 = (FEopt[i][4] / 2 + FEopt[i][6]) * sin(M_PI / 2 - fi_rad);

        //Центры прицельного рассеивания
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
    bool FE[26];
    float aimPoint[5][3]; // координаты точки прицеливания
    float RBK[101][3];     //
    bool F0,F1,F2,F3,F4,F5,F6,KP;

    float Zalp_X, Zalp_Y;
    float xfab,yfab;

    int dukr[7] = {0, 0, 0, 0, 0, 0, 0};

    //  if MainForm.Edit10.Text<>''   //количество бомбометаний
    //    then KR:=StrToInt(MainForm.Edit10.Text)
    //    else KR:=2000;

    //Вычисляем точки прцеливания
    aimPoint[1][1] = 96 - rangeToTraverse;
    aimPoint[1][2] = combatRouteCenterPair + intervalRegime;
    aimPoint[2][1] = 96 - rangeToTraverse  + intervalSeries;
    aimPoint[2][2] = combatRouteCenterPair + intervalRegime;
    aimPoint[3][1] = 96 - rangeToTraverse;
    aimPoint[3][2] = combatRouteCenterPair - intervalRegime;
    aimPoint[4][1] = 96 - rangeToTraverse  + intervalSeries;
    aimPoint[4][2] = combatRouteCenterPair - intervalRegime;

//    for (int i = 1; i < 5; ++i) { вывод массива точек прицеливания
//        for (int j = 1; j < 3; ++j) {
//            qDebug() << "aimPoint[" << i << "][" << j << "] = " << aimPoint[i][j];
//        }
//    }


    std::mt19937 randomGenerator(time(0));
    for (int NumB = 1; NumB <= numberRealization; ++NumB) //Перебор всех бомбометаний по ЗРК
    {
        for (int j = 1; j <= 25; ++j) //Формируем массив ElementZRK
            FE[j] = true;

        for (int AreaNumber = 1; AreaNumber <= 4; ++AreaNumber) //Перебор 4-х залпов
        {
            //Реализация координат центров залпов (прицельное рассеивание)
            std::normal_distribution<float> ndX(aimPoint[AreaNumber][1], aimDispersion),
                                            ndY(aimPoint[AreaNumber][2], aimDispersion);
            Zalp_X = ndX(randomGenerator);
            Zalp_Y = ndY(randomGenerator);

            for (int N_ASP = 1; N_ASP <= round(numberASP/2); ++N_ASP) // номер АСП
            {
                if(RBKd == true) // если не ОФАБ
                {
                    for (int k = 1; k <= numberAmmunition; ++k) // рассеивание суббоеприпасов
                    {
                        std::uniform_real_distribution<float> udX(-20, 60), udY(-15, 15);
                        // !!!!!!!!!!!!!!!!!!!!!!ammunitionDispersion!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                        RBK[k][1] = Zalp_X + udX(randomGenerator); //Ребро квадрата
                        RBK[k][2] = Zalp_Y + udY(randomGenerator);
                        //qDebug() << "RBK[" << k << "][1]" << RBK[k][1];
                        //qDebug() << "RBK[" << k << "][2]" << RBK[k][2];
                        for (int N_FE = 1; N_FE <= 25; ++N_FE) // ФЭ
                        {
                            if(Destroy(RBK[k][1],RBK[k][2],
                                       DEA[N_FE][1],
                                       DEA[N_FE][2],
                                       DEA[N_FE][3],
                                       DEA[N_FE][4],
                                       DEA[N_FE][5],
                                       DEA[N_FE][6],
                                       DEA[N_FE][7],
                                       DEA[N_FE][8])) //  Если попал
                            {
                                FE[N_FE] = false;
                                if(NumB==1)
                                {
                                    /*
                                    Form1.Image4.Canvas.Pen.Color:=clred;
                                    Form1.Image4.Canvas.Polygon([Point(round(CoordFE[N_FE,1]),round(CoordFE[N_FE,2])),
                                    Point(round(CoordFE[N_FE,3]),round(CoordFE[N_FE,4])),
                                    Point(round(CoordFE[N_FE,5]),round(CoordFE[N_FE,6])),
                                    Point(round(CoordFE[N_FE,7]),round(CoordFE[N_FE,8]))]);;
                                    Form1.Image4.Canvas.Pen.Color:=clyellow;
                                    Form1.Image4.Canvas.Ellipse(round(RBK[k,1])-2,round(RBK[k,2])-2,round(RBK[k,1])+2,round(RBK[k,2])+2);
                                    */
                                }
                            } else //  Если не попал
                            {
                                if(NumB==1)
                                {
                                    /*
                                    Form1.Image1.Canvas.Pen.Color:=clgreen;
                                    Form1.Image1.Canvas.Ellipse(round(RBK[k,1])-1,round(RBK[k,2])-1,round(RBK[k,1])+1,round(RBK[k,2])+1);
                                    */
                                }
                            }
                        }
                    }
                } else // если ОФАБ
                {

                    std::normal_distribution<float> ndX(Zalp_X, 0.004*bombingAltitude), ndY(Zalp_Y, 0.004*bombingAltitude);
                    xfab = ndX(randomGenerator);
                    yfab = ndY(randomGenerator);
                    for (int N_FE = 1; N_FE <= 25; ++N_FE) // ФЭ
                    {
                        if(Destroy(xfab, yfab,
                                   DEA[N_FE][1],
                                   DEA[N_FE][2],
                                   DEA[N_FE][3],
                                   DEA[N_FE][4],
                                   DEA[N_FE][5],
                                   DEA[N_FE][6],
                                   DEA[N_FE][7],
                                   DEA[N_FE][8])) // если попал
                        {
                            FE[N_FE] = false;
                            if(NumB==1)
                            {
                                /*
                                Form1.Image4.Canvas.pen.Color:=clred;
                                Form1.Image4.Canvas.Polygon([Point(round(CoordFE[N_FE,1]),round(CoordFE[N_FE,2])),
                                Point(round(CoordFE[N_FE,3]),round(CoordFE[N_FE,4])),
                                Point(round(CoordFE[N_FE,5]),round(CoordFE[N_FE,6])),
                                Point(round(CoordFE[N_FE,7]),round(CoordFE[N_FE,8]))]);;
                                Form1.Image4.Canvas.Pen.Color:=clyellow;
                                Form1.Image4.Canvas.Ellipse(round(xfab)-1,round(yfab)-1,round(xfab)+1,round(yfab)+1);
                                */
                            }
                        } else // если не попал
                        {
                            if(NumB==1)
                            {
                                /*
                                Form1.Image1.Canvas.Pen.Color = clgreen;
                                Form1.Image1.Canvas.Ellipse(round(xfab)-1,round(yfab)-1,round(xfab)+1,round(yfab)+1);
                                */
                            }
                        }
                    }
                        }
                    }
                }
            }
            /*



    }

              // Увеличиваем элементы в массиве dukr,следуя значениям из массива ElementZRK(2.25)
              F0:= FE[2] and FE[3] and FE[6] and FE[7] and FE[8] and
              ((FE[18] and FE[22] and FE[23] and FE[24]and FE[25] and FE[19]) or
              (FE[18] and FE[22] and FE[23] and FE[24]and FE[25] and not(FE[19])) or
              (FE[18] and FE[22] and FE[23] and FE[24]and not(FE[25]) and FE[19]) or
              (FE[18] and FE[22] and FE[23] and not(FE[24])and FE[25] and FE[19]) or
              (FE[18] and FE[22] and not(FE[23]) and FE[24]and FE[25] and FE[19]) or
              (FE[18] and not(FE[22]) and FE[23] and FE[24]and FE[25] and FE[19]) or
              (not(FE[18]) and FE[22] and FE[23] and FE[24]and FE[25] and FE[19]));

              F1:=FE[2] and FE[3] and FE[18] and FE[19] and(FE[6] and FE[7] and FE[22] and FE[23] and
              (not(FE[8])or not(FE[24])or not(FE[25])) or FE[6] and FE[8] and FE[22] and FE[25] and
              (not(FE[7]) or not(FE[23]) or not(FE[24])) or FE[7] and FE[8] and FE[24] and FE[25]
              and (not(FE[6]) or not(FE[22])or not(FE[23])));

              F2:=FE[6] and FE[7] and FE[8] and FE[23] and FE[24] and (FE[2] and FE[18] and FE[22]and
              (not(FE[3] or not(FE[19]) or not(FE[25])) or FE[3] and FE[19]and FE[25] and
              (not(FE[2])or not(FE[18]) and FE[22])));

              F3:=FE[2] and FE[3] and FE[18] and FE[19] and (FE[6] and FE[22] and
              (not(FE[7]) or FE[23]) and (not(FE[8]) or not(FE[25])) and
              (not(FE[6]) or FE[22])and (not(FE[7]) or not(FE[24])));

              F4:=FE[7] and (FE[2] and FE[6] and FE[18] and FE[22] and FE[23] and
              (not(FE[3]) or not(FE[19])) and (not(FE[8]) or not(FE[24])) or
              FE[3] and FE[8]and FE[19]and FE[24]and FE[25]and
              (not(FE[2]) or not(FE[18]))and (not(FE[6])or not(FE[23])));

              F5:=FE[2] and FE[6] and FE[18] and FE[22]and (not(FE[3]) or not(FE[19]))and
              (not(FE[2]) or not(FE[23])) or FE[3] and FE[8]and FE[19]and FE[25]and
              (not(FE[2]) or not(FE[18]))and (not(FE[7]) or not(FE[23]));

              F6:=(not(FE[2]) or not(FE[6]) or FE[18] or not(FE[22])) and
              (not(FE[3]) or not(FE[8]) or not(FE[19]) or not(FE[25]));

              KP:=FE[1] and FE[5] and FE[9] and FE[17]and
              (FE[12] and FE[13] or FE[4]and FE[16] and(FE[13] or FE[14] or FE[15])) ;

              if (KP and F0) then inc(dukr[0])
              else if (KP and F1) then inc(dukr[1])
              else if (KP and F2) then inc(dukr[2])
              else if (KP and F3) then inc(dukr[3])
              else if (KP and F4) then inc(dukr[4])
              else if (KP and F5) then inc(dukr[5])
              else if (F6 or not(kp)) then inc(dukr[6]);
              end;
    }
              for (int i = 0; i <= 7; ++i)
        {
            float res = dukr[i] / numberRealization;
            resMap[i]->setProperty("text", QString::number(res, 'g', 3));
        }
        */
}

bool Backend::Destroy(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    int i = 0;

    if(std::signbit((x-x2)/(x2-x1)-(y-y2)/(y2-y1))==std::signbit((x3-x2)/(x2-x1)-(y3-y2)/(y2-y1)))
        i++;
    if(std::signbit((x-x3)/(x3-x2)-(y-y3)/(y3-y2))==std::signbit((x4-x3)/(x3-x2)-(y4-y3)/(y3-y2)))
        i++;
    if(std::signbit((x-x4)/(x4-x3)-(y-y4)/(y4-y3))==std::signbit((x1-x4)/(x4-x3)-(y1-y4)/(y4-y3)))
        i++;
    if(std::signbit((x-x1)/(x1-x4)-(y-y1)/(y1-y4))==std::signbit((x2-x1)/(x1-x4)-(y2-y1)/(y1-y4)))
        i++;
    if(i==4) return true;
    else return false;
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

    /*
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
    */

    // Основные вычисления
    initFEoptions(); // заполнили массив FEopt
    evalDangerousExplosionsArea(); // заполнили массив DEA

    /* Вывод массива областей опасных разрывов
    for (int i = 1; i < 26; ++i) {
        for (int j = 1; j < 9; ++j) {
            qDebug() << "DEA[" << i << "][" << j << "] = " << DEA[i][j];
        }
    } */
    //Destroy(6, 0, -5, -5, 5, -5, 5, 5, -5, 5);
    //damageCalculation(); // посчитали
}
