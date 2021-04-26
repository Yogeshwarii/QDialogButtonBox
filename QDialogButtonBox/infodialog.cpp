#include "infodialog.h"
#include "ui_infodialog.h"
#include<QDialogButtonBox>
#include<QMessageBox>
#include<qdebug.h>
InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);
  //QMessageBox::StandardButton and QPlatformDialogHelper::StandardButton
      if(stdButton==QDialogButtonBox::Ok)

      {

      accept();

      qDebug()<<"Ok button clicked";

      }
      if(stdButton==QDialogButtonBox::Cancel)

      {

      reject();

      qDebug()<<"cancel button clicked";

      }
      if(stdButton==QDialogButtonBox::Save)

      {

      //accept();

      qDebug()<<"Save button clicked";

      }
      if(stdButton==QDialogButtonBox::SaveAll)

      {

      //accept();

      qDebug()<<"Save All button clicked";

      }
      if(stdButton==QDialogButtonBox::No)

      {

     // reject();

      qDebug()<<"No button clicked";

      }
      if(stdButton==QDialogButtonBox::NoToAll)

      {

     // reject();

      qDebug()<<"No To All button clicked";

      }
      if(stdButton==QDialogButtonBox::Open)

      {

      //accept();

      qDebug()<<"Open button clicked";

      }
}
