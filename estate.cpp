#include "estate.h"
#include <QString>
#include "ui_widget.h"
#include <iostream>
#include <QWidget>
#include <QTextStream>
#include <QTextCodec>
#include "calculationfacade.h"


Estate::Estate()
{
    QTextStream cout (stdout);
    setlocale(LC_ALL, "Russian");

cout<<"111";
}
void Estate::Set(Ui::Widget *ui){

    QTextStream cout (stdout);
    setlocale(LC_ALL, "Russian");


    owner=ui->owner->text();
    age=ui->age->text().toInt();
    int idx=ui->estateType->currentIndex();
    type=static_cast<EstateType>(idx);
    residents=ui->residents->text().toInt();
    area=ui->residents->text().toInt();
    months=ui->period->currentIndex();
        if(months==0)months=6;
        else if(months==1)months=12;
        else months=18;


     //int pay=residents-5;



//QString s = QString::number(pay);
    //ui->cost->setText(s);


}

int Estate::getresidents(){

    return this->residents;
}

Estate::EstateType Estate::getType(){
return this->type;


}

void Estate::SetCost(Ui::Widget *ui,int &cost){
    costs=cost;
    QString s = QString::number(cost);
    ui->cost->setText(s);

}

