#include "calculationmodel.h"

calculationModel::calculationModel(QObject *parent) : QObject(parent)
{
}

void calculationModel::cppSlot(const QString &msg)
{
    //������ ������ �����
    QObject* aimDispersion = this->parent()->findChild<QObject*>("aimDispersion");
    QObject* technicalDispersion = this->parent()->findChild<QObject*>("technicalDispersion");
    //������ ���� ������
    QObject* textAreaW1 = this->parent()->findChild<QObject*>("textAreaW1");

    //������� ���������� �� ����� ����� ����� �������� text
    QString str1=(aimDispersion->property("text")).toString();
    QString str2=(technicalDispersion->property("text")).toString();

    int a = str1.toInt();//��������� ������ � �����
    int b = str2.toInt();//��������� ������ � �����

    int c = a + b; //���������� ����

    QString strResult=QString::number(c);//��������� ��������� � ������

    //�� � ������� ������� � ���� ������ ���� ����������
    textAreaW1->setProperty("text", strResult);
   //textAreaW1->setProperty("text", str1+" + "+str2+" = "+strResult+" "+msg);

}
