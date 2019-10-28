#ifndef CALCULATIONMODEL_H
#define CALCULATIONMODEL_H

#include <QObject>
#include <QGroupBox>
#include <QVector>
#include <QMap>

class calculationModel : public QObject
{
    Q_OBJECT
public:
    explicit calculationModel(QObject *parent = nullptr);

signals:

public slots:
    void cppSlot(const QString &msg);

private:
    float FEopt[26][7]; /* массив параметров элементов (Functional Element) ЗРК [нулевые элементы не используются]
                          FE[i][j], где: i - номер функционального элемента;
                          j = {1(коорд. [x]); 2(коорд. [y]); 3(длина элемента [a]); 4(ширина элемента [b]);
                          5(угол [fi]); 6(радиус [r])}. */
    float DEA[26][9];   /* массив координат области опасных разрывов (Dangerous Explosion Area)
                           элементов ЗРК [нулевые элементы не используются] */

    void initFEoptions();
    void evalDangerousExplosionsArea();

    void damageCalculation();

    QMap<QString, QObject*> initMap; // textFields map
    QMap<QString, QObject*> cbMap;   // comboBoxes map
//    QGroupBox* radioBox = nullptr;   // weapon radioBox
    QMap<quint8, QObject*> resMap;   // damage map

    void bindObjects();
    void clrInitMap();
    void clrResMap();
};

#endif // CALCULATIONMODEL_H
