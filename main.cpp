#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <watchtimer.h>
#include <QtWidgets/QListView>
#include <sourceprovider.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    SourceProvider source_provider;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    qmlRegisterType<WatchTimer>("MyType.WatchTimer", 1, 0, "WatchTimer");
    engine.rootContext()->setContextProperty("SourceProvider", &source_provider);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
