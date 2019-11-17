#include "calculationmodel.h"
#include "common.h"

#include <QDebug>
#include <random>

calculationModel::calculationModel(QObject *parent) : QObject(parent)
{
   // bindObjects();
}

void calculationModel::cppSlot(const QString &msg)
{
    Q_UNUSED(msg);

    initFEoptions(); // заполнили FEopt
//    evalDangerousExplosionsArea(); // заполнили DEA
   damageCalculation(); // посчитали
}

void calculationModel::initFEoptions()
{
    FEopt[1][1]=96;    FEopt[1][2]=224;   FEopt[1][3]=10;    FEopt[1][4]=3; FEopt[1][5]=15;    FEopt[1][6]=initMap[rCP]->property("text").toFloat();
    FEopt[2][1]=339;   FEopt[2][2]=308;   FEopt[2][3]=10;    FEopt[2][4]=3; FEopt[2][5]=15;    FEopt[2][6]=initMap[rCP12]->property("text").toFloat();
    FEopt[3][1]=316;   FEopt[3][2]=0;     FEopt[3][3]=10;    FEopt[3][4]=3; FEopt[3][5]=15;    FEopt[3][6]=initMap[rCP12]->property("text").toFloat();
    FEopt[4][1]=171;   FEopt[4][2]=349;   FEopt[4][3]=10;    FEopt[4][4]=3; FEopt[4][5]=15;    FEopt[4][6]=initMap[rRLSV]->property("text").toFloat();
    FEopt[5][1]=85;    FEopt[5][2]=103;   FEopt[5][3]=10;    FEopt[5][4]=3; FEopt[5][5]=15;    FEopt[5][6]=initMap[rRLSV]->property("text").toFloat();
    FEopt[6][1]=310;   FEopt[6][2]=249;   FEopt[6][3]=8;     FEopt[6][4]=4; FEopt[6][5]=15;    FEopt[6][6]=initMap[rSC123]->property("text").toFloat();
    FEopt[7][1]=270;   FEopt[7][2]=177;   FEopt[7][3]=8;     FEopt[7][4]=4; FEopt[7][5]=15;    FEopt[7][6]=initMap[rSC123]->property("text").toFloat();
    FEopt[8][1]=268;   FEopt[8][2]=95;    FEopt[8][3]=8;     FEopt[8][4]=4; FEopt[8][5]=15;    FEopt[8][6]=initMap[rSC123]->property("text").toFloat();
    FEopt[9][1]=0;     FEopt[9][2]=250;   FEopt[9][3]=6;     FEopt[9][4]=2; FEopt[9][5]=15;    FEopt[9][6]=initMap[rCable]->property("text").toFloat();
    FEopt[10][1]=350;  FEopt[10][2]=321;  FEopt[10][3]=6;    FEopt[10][4]=2;FEopt[10][5]=15;   FEopt[10][6]=initMap[rEG12]->property("text").toFloat();
    FEopt[11][1]=268;  FEopt[11][2]=12;   FEopt[11][3]=6;    FEopt[11][4]=2;FEopt[11][5]=15;   FEopt[11][6]=initMap[rEG12]->property("text").toFloat();
    FEopt[12][1]=-70.6;FEopt[12][2]=125;  FEopt[12][3]=200;  FEopt[12][4]=0;FEopt[12][5]=45;   FEopt[12][6]=initMap[rCable]->property("text").toFloat();
    FEopt[13][1]=96/2; FEopt[13][2]=237;  FEopt[13][3]=99.5; FEopt[13][4]=0;FEopt[13][5]=15.15;FEopt[13][6]=initMap[rCable]->property("text").toFloat();
    FEopt[14][1]=85.5; FEopt[14][2]=299.5;FEopt[14][3]=197.5;FEopt[14][4]=0;FEopt[14][5]=150;  FEopt[14][6]=initMap[rCable]->property("text").toFloat();
    FEopt[15][1]=42.5; FEopt[15][2]=176.5;FEopt[15][3]=169.8;FEopt[15][4]=0;FEopt[15][5]=60;   FEopt[15][6]=initMap[rCable]->property("text").toFloat();
    FEopt[16][1]=133.5;FEopt[16][2]=286.5;FEopt[16][3]=145.8;FEopt[16][4]=0;FEopt[16][5]=121;  FEopt[16][6]=initMap[rCable]->property("text").toFloat();
    FEopt[17][1]=90.5; FEopt[17][2]=163.5;FEopt[17][3]=121.5;FEopt[17][4]=0;FEopt[17][5]=95.5; FEopt[17][6]=initMap[rCable]->property("text").toFloat();
    FEopt[18][1]=247.5;FEopt[18][2]=266;  FEopt[18][3]=314.4;FEopt[18][4]=0;FEopt[18][5]=164.5;FEopt[18][6]=initMap[rCable]->property("text").toFloat();
    FEopt[19][1]=206;  FEopt[19][2]=112;  FEopt[19][3]=304;  FEopt[19][4]=0;FEopt[19][5]=45.5; FEopt[19][6]=initMap[rCable]->property("text").toFloat();
    FEopt[20][1]=374.5;FEopt[20][2]=314.5;FEopt[20][3]=50.6; FEopt[20][4]=0;FEopt[20][5]=15;   FEopt[20][6]=initMap[rCable]->property("text").toFloat();
    FEopt[21][1]=292;  FEopt[21][2]=6;    FEopt[21][3]=50;   FEopt[21][4]=0;FEopt[21][5]=15;   FEopt[21][6]=initMap[rCable]->property("text").toFloat();
    FEopt[22][1]=354.5;FEopt[22][2]=278.5;FEopt[22][3]=106.8;FEopt[22][4]=0;FEopt[22][5]=146.5;FEopt[22][6]=initMap[rCable]->property("text").toFloat();
    FEopt[23][1]=290;  FEopt[23][2]=213;  FEopt[23][3]=82.4; FEopt[23][4]=0;FEopt[23][5]=119.1;FEopt[23][6]=initMap[rCable]->property("text").toFloat();
    FEopt[24][1]=269;  FEopt[24][2]=136;  FEopt[24][3]=84;   FEopt[24][4]=0;FEopt[24][5]=91.3; FEopt[24][6]=initMap[rCable]->property("text").toFloat();
    FEopt[25][1]=292;  FEopt[25][2]=95/2; FEopt[25][3]=106.4;FEopt[25][4]=0;FEopt[25][5]=63.1; FEopt[25][6]=initMap[rCable]->property("text").toFloat();
}

void calculationModel::evalDangerousExplosionsArea()
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

void calculationModel::damageCalculation()
{
    /*procedure Create_DukrPropability;
var
*/
    bool FE[26];
    float aimPoint[5][3]; // координаты точки прицеливания
    float RBK[101][3];     //
    bool F0,F1,F2,F3,F4,F5,F6,KP;
    int NumB, AreaNumber, N_ASP, N_FE;

    int i,j,k;
    int KR = 2000;      //количество реализаций
    int i_str;   //интервал строя
    int i_ser;   //интервал серии
    int height;  //высота бомбометания

    float Zalp_X, Zalp_Y;
    float xfab,yfab;

    int durk[7];

    //считываем
    //  kolASP:=StrToInt(MainForm.Edit11.Text);  //Кол-во АСП
    //  height:=StrTOInt(MainForm.ComboBox2.text); // высота бомбометания
    //  i_ser:=StrToINt(MainForm.Edit12.Text); // интервал серии
    //  i_str:=StrToInt(MainForm.Combobox4.Text); // интервал строя

    //  if MainForm.Edit10.Text<>''   //количество бомбометаний
    //    then KR:=StrToInt(MainForm.Edit10.Text)
    //    else KR:=2000;

    //Вычисляем точки прцеливания
    aimPoint[1][1] = 96 - initMap[rngToTrvrs]->property("text").toFloat();
    aimPoint[1][2] = initMap[cmbtRoute]->property("text").toFloat()
            + initMap[intrvlRgm]->property("text").toFloat() / 2;
    aimPoint[2][1] = 96 - initMap[rngToTrvrs]->property("text").toFloat()
            + initMap[intrvlSer]->property("text").toFloat();
    aimPoint[2][2] = initMap[cmbtRoute]->property("text").toFloat()
            + initMap[intrvlRgm]->property("text").toFloat() / 2;
    aimPoint[3][1] = 96 - initMap[rngToTrvrs]->property("text").toFloat();
    aimPoint[3][2] = initMap[cmbtRoute]->property("text").toFloat()
            - initMap[intrvlRgm]->property("text").toFloat() / 2;
    aimPoint[4][1] = 96 - initMap[rngToTrvrs]->property("text").toFloat()
            + initMap[intrvlSer]->property("text").toFloat();
    aimPoint[4][2] = initMap[cmbtRoute]->property("text").toFloat()
            - initMap[intrvlRgm]->property("text").toFloat() / 2;
/*
    for (int i = 0; i <= 6; ++i)
        dukr[i] = 0;

    for (int i = 1; i <= KR; ++i) //Перебор всех бомбометаний по ЗРК
    {
        for (int j = 1; j <= 25; ++j) //Формируем массив ElementZRK
            FE[i] = true;

        for (int AreaNumber = 1; i <= 4; ++AreaNumber) //Перебор 4-х залпов
        {
            //Реализация координат центров залпов (прицельное рассеивание)

    std::default_random_engine generator;
    std::normal_distribution<float> distribution(100,5);

            Zalp_x=RandG(aimPoint[AreaNumber][1],
                    initMap[aimDisp]->property("text").toFloat());
            Zalp_y=RandG(aimPoint[AreaNumber][2],
                    initMap[aimDisp]->property("text").toFloat());

            std::default_random_engine generator;
            std::normal_distribution<double> distribution(5.0,2.0);
              for N_ASP:=1 to round(kolASP/2) do  //Номер АСП
              begin
              if RBKd=true then //Если не ОФАБ
              begin
              for k := 1 to kolsub do  // рассеивание суббоеприпасов
              begin       //2
              RBK[k,1]:=Zalp_x+ L_ORS*(random-0.5); //Ребро квадрата
              RBK[k,2]:=Zalp_y+ L_ORS*(random-0.5);
              for N_FE :=1 to 25 do //ФЭ
              if Destroy(RBK[k,1],RBK[k,2],
              CoordFE[N_FE,1],
              CoordFE[N_FE,2],
              CoordFE[N_FE,3],
              CoordFE[N_FE,4],
              CoordFE[N_FE,5],
              CoordFE[N_FE,6],
              CoordFE[N_FE,7],
              CoordFE[N_FE,8])
              then
              begin   //  Если попал
              FE[N_FE]:=false;
              if i=1 then
              begin

              Form1.Image4.Canvas.Pen.Color:=clred;
              Form1.Image4.Canvas.Polygon([Point(round(CoordFE[N_FE,1]),round(CoordFE[N_FE,2])),
              Point(round(CoordFE[N_FE,3]),round(CoordFE[N_FE,4])),
              Point(round(CoordFE[N_FE,5]),round(CoordFE[N_FE,6])),
              Point(round(CoordFE[N_FE,7]),round(CoordFE[N_FE,8]))]);;
              Form1.Image4.Canvas.Pen.Color:=clyellow;
              Form1.Image4.Canvas.Ellipse(round(RBK[k,1])-2,round(RBK[k,2])-2,round(RBK[k,1])+2,round(RBK[k,2])+2);
              end;
              end
              else
              begin
              if i=1 then //  Если не попал
              begin
              Form1.Image1.Canvas.Pen.Color:=clgreen;
              Form1.Image1.Canvas.Ellipse(round(RBK[k,1])-1,round(RBK[k,2])-1,round(RBK[k,1])+1,round(RBK[k,2])+1);
              end;
              end;
              end;
              end;
              if RBKd=false then //Если ОФАБ
              begin//4
              xfab:=RandG(Zalp_x,0.004*Height);
              yfab:=RandG(Zalp_y,0.004*Height);
              for N_FE :=1 to 25 do //ФЭ
              if Destroy(xfab,yfab,
              CoordFE[N_FE,1],
              CoordFE[N_FE,2],
              CoordFE[N_FE,3],
              CoordFE[N_FE,4],
              CoordFE[N_FE,5],
              CoordFE[N_FE,6],
              CoordFE[N_FE,7],
              CoordFE[N_FE,8])
              then
              begin
              begin    // Если попал
              FE[N_FE]:=false;
              if i=1 then
              begin
              Form1.Image4.Canvas.pen.Color:=clred;
              Form1.Image4.Canvas.Polygon([Point(round(CoordFE[N_FE,1]),round(CoordFE[N_FE,2])),
              Point(round(CoordFE[N_FE,3]),round(CoordFE[N_FE,4])),
              Point(round(CoordFE[N_FE,5]),round(CoordFE[N_FE,6])),
              Point(round(CoordFE[N_FE,7]),round(CoordFE[N_FE,8]))]);;
              Form1.Image4.Canvas.Pen.Color:=clyellow;
              Form1.Image4.Canvas.Ellipse(round(xfab)-1,round(yfab)-1,round(xfab)+1,round(yfab)+1);
              end;
              end;
              end
              else
              begin
              if i=1 then  //  Если не попал
              begin
              Form1.Image1.Canvas.Pen.Color:=clgreen;
              Form1.Image1.Canvas.Ellipse(round(xfab)-1,round(yfab)-1,round(xfab)+1,round(yfab)+1);
              end;
              end;
              end;
    }
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
            float res = dukr[i] / KR;
            resMap[i]->setProperty("text", QString::number(res, 'g', 3));
        }
        */
}

void calculationModel::bindObjects()
{
    initMap.insert(aimDisp, this->parent()->findChild<QObject*>(aimDisp));
    initMap.insert(techDisp, this->parent()->findChild<QObject*>(techDisp));
    initMap.insert(ammoDisp, this->parent()->findChild<QObject*>(ammoDisp));
    initMap.insert(cmbtRoute, this->parent()->findChild<QObject*>(cmbtRoute));
    initMap.insert(rngToTrvrs, this->parent()->findChild<QObject*>(rngToTrvrs));
    initMap.insert(intrvlSer, this->parent()->findChild<QObject*>(intrvlSer));
    initMap.insert(nmbASP, this->parent()->findChild<QObject*>(nmbASP));
    initMap.insert(nmbAmmo, this->parent()->findChild<QObject*>(nmbAmmo));
    initMap.insert(rCP, this->parent()->findChild<QObject*>(rCP));
    initMap.insert(rCP12, this->parent()->findChild<QObject*>(rCP12));
    initMap.insert(rSC123, this->parent()->findChild<QObject*>(rSC123));
    initMap.insert(rRLSV, this->parent()->findChild<QObject*>(rRLSV));
    initMap.insert(rEG12, this->parent()->findChild<QObject*>(rEG12));
    initMap.insert(rCable, this->parent()->findChild<QObject*>(rCable));

    cbMap.insert(intrvlRgm, this->parent()->findChild<QObject*>(intrvlRgm));
    cbMap.insert(bmbngAlttd, this->parent()->findChild<QObject*>(bmbngAlttd));

    //QObject* textArea = this->parent()->findChild<QObject*>("textAreaW0");

    int a, b;

    if (RadioButton() == 1) {
       a = 500;
       QString strResult = QString::number(a);
      // textArea->setProperty("text", "=" + strResult);
       qDebug() << "Функция:" << a;
    } else if (RadioButton() == 2) {
        a = 600;
        qDebug() << "Функция:" << a;
    } else if (RadioButton() == 3) {
        a = 700;
        qDebug() << "Функция:" << a;
    } else if (RadioButton() == 4) {
        a = 800;
        qDebug() << "Функция:" << a;
    } else if (RadioButton() == 5) {
        a = 900;
        qDebug() << "Функция:" << a;
    }

    if (numCheckBox() == 1) {
        b = 100;
        qDebug() << "Интервал строя:" << b;
    } else if (numCheckBox() == 2) {
        b = 200;
        qDebug() << "Интервал строя:" << b;
    } else if (numCheckBox() == 3) {
        b = 300;
        qDebug() << "Интервал строя:" << b;
    }


//    radioBox    = this->parent()->findChild<QGroupBox*>("groupBoxRadioButton"); // pls Roman

    resMap.insert(W0, this->parent()->findChild<QObject*>("textAreaW0"));
    resMap.insert(W1, this->parent()->findChild<QObject*>("textAreaW1"));
    resMap.insert(W2, this->parent()->findChild<QObject*>("textAreaW2"));
    resMap.insert(W3, this->parent()->findChild<QObject*>("textAreaW3"));
    resMap.insert(W4, this->parent()->findChild<QObject*>("textAreaW4"));
    resMap.insert(W5, this->parent()->findChild<QObject*>("textAreaW5"));
    resMap.insert(W6, this->parent()->findChild<QObject*>("textAreaW6"));
}

void calculationModel::clrInitMap()
{
    for(auto iter : initMap)
    {
        iter->setProperty("text", "");
    }
}

void calculationModel::clrResMap()
{
    for(auto iter : resMap)
    {
        iter->setProperty("text", "");
    }
}
