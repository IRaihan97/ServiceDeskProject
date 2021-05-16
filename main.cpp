#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "ServiceDeskToolKit_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    QFile file(":/Assets/Themes/SyNet.qss");
    file.open(QFile::ReadOnly);
    QString theme{QLatin1String(file.readAll())};
    a.setStyleSheet(theme);
    w.show();
    return a.exec();
}
