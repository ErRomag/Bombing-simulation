#include "calculationmodel.h"
#include <QDebug>

calculationModel::calculationModel(QObject *parent) : QObject(parent)
{
}

void calculationModel::cppSlot(const QString &msg)
{
    //������ ������ �����
//    QObject* aimDispersion = this->parent()->findChild<QObject*>("aimDispersion");
//    QObject* technicalDispersion = this->parent()->findChild<QObject*>("technicalDispersion");
    //������ ���� ������
//    QObject* textAreaW1 = this->parent()->findChild<QObject*>("textAreaW1");

    //������� ���������� �� ����� ����� ����� �������� text
//    QString str1=(aimDispersion->property("text")).toString();
//    QString str2=(technicalDispersion->property("text")).toString();

//    int a = str1.toInt();//��������� ������ � �����
//    int b = str2.toInt();//��������� ������ � �����

//    int c = a + b; //���������� ����

//    QString strResult=QString::number(c);//��������� ��������� � ������

    //�� � ������� ������� � ���� ������ ���� ����������
//    textAreaW1->setProperty("text", strResult);
   //textAreaW1->setProperty("text", str1+" + "+str2+" = "+strResult+" "+msg);

    QHash <QString, QObject*> editBoxes;
    editBoxes.insert("AD", this->parent()->findChild<QObject*>("aimDispersion"));
    editBoxes.insert("TD", this->parent()->findChild<QObject*>("technicalDispersion"));
    editBoxes.insert("CRCP", this->parent()->findChild<QObject*>("combatRouteCenterPair"));

    auto i = 0;
    for(auto iter : editBoxes)
    {
        if(iter == editBoxes.find("TD").value())
            iter->setProperty("text", "find "+QString::number(i));
        i++;
    }

}
