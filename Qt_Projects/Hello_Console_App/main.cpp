#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QRect>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello World!";
    qDebug() << "Date:" << QDate::currentDate();
    qDebug() << "Types:" << QString("String") << QChar('x') << QRect(0, 10, 50, 40);

   // return a.exec(); Use tis when you are building GUI Application
    return 0;  //Use this line instead of return a.exec(); in simple program
}
