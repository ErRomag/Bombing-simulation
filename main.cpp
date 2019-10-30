#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "calculationmodel.h"

#include <QColor>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    QObject* root = engine.rootObjects()[0];

    calculationModel *calculationmodel = new calculationModel(root);


    QObject::connect(root, SIGNAL(qmlSignal(QString)),
                     calculationmodel, SLOT(cppSlot(QString)));

    return app.exec();
}
