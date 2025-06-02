#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() <<"Hello World!";

    //return a.exec();
    return 0;  //Use this line instead of return a.exec(); in simple program
}
