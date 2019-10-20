#ifndef CALCULATIONMODEL_H
#define CALCULATIONMODEL_H

#include <QObject>
#include <QVariant>

class calculationModel : public QObject
{
    Q_OBJECT
public:
    explicit calculationModel(QObject *parent = nullptr);

signals:

public slots:
    void cppSlot(const QString &msg);
};

#endif // CALCULATIONMODEL_H
