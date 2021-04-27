#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
#include<qdebug.h>
#include<qstring.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ON_clicked()
{
  InfoDialog * dialog = new InfoDialog(this);
/*
int ret=dialog->exec();
if(ret==QDialog::Accepted)
{
    QString Position=dialog->getPosition();
    QString FavouriteOS=dialog->getFavouriteOS();
    qDebug()<<"Dialog accepted,position is :"<<Position<<"and favourite os:"<<FavouriteOS;
    ui->infolabel->setText("Your position is:"+Position+"and your favourite os is:"+FavouriteOS);
}
if(ret==QDialog::Rejected)
{
qDebug()<<"Dialog Rejected";
}
*/
  connect(dialog,&InfoDialog::accepted,[=](){
      QString Position=dialog->getPosition();
      QString FavouriteOS=dialog->getFavouriteOS();
      qDebug()<<"Dialog accepted,position is :"<<Position<<"and favourite os:"<<FavouriteOS;
      ui->infolabel->setText("Your position is:"+Position+"and your favourite os is:"+FavouriteOS);
  });
  connect(dialog,&InfoDialog::rejected,[=](){
    qDebug()<<"Dialog Rejected";
  });
  dialog->show();
  dialog->raise();
  dialog->activateWindow();

}
