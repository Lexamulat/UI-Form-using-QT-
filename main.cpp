#include "widget.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>
#include <QtDebug>
#include <io.h>
#include <fcntl.h>
#include <QTextCodec>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
       Widget w;
       w.show();



//QTextStream cout (stdout);
//setlocale(LC_ALL, "Russian");
//QString str="oleg";
//cout<<str;


return a.exec();
}
