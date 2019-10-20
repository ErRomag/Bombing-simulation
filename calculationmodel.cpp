#include "calculationmodel.h"

calculationModel::calculationModel(QObject *parent) : QObject(parent)
{
}

void calculationModel::cppSlot(const QString &msg)
{
    //Найдем строки ввода
    QObject* aimDispersion = this->parent()->findChild<QObject*>("aimDispersion");
    QObject* technicalDispersion = this->parent()->findChild<QObject*>("technicalDispersion");
    //Найдем поле вывода
    QObject* textAreaW1 = this->parent()->findChild<QObject*>("textAreaW1");

    //Считаем информацию со строк ввода через свойство text
    QString str1=(aimDispersion->property("text")).toString();
    QString str2=(technicalDispersion->property("text")).toString();

    int a = str1.toInt();//Переведем строку в число
    int b = str2.toInt();//Переведем строку в число

    int c = a + b; //Вычисления наши

    QString strResult=QString::number(c);//Переведем результат в строку

    //Ну и наконец выведем в поле вывода нашу информацию
    textAreaW1->setProperty("text", strResult);
   //textAreaW1->setProperty("text", str1+" + "+str2+" = "+strResult+" "+msg);

}
