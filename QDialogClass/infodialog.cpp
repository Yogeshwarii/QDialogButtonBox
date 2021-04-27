#include "infodialog.h"
#include "ui_infodialog.h"

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

void InfoDialog::on_OKpushButton_clicked()
{
    QString userPosition =ui->PositionlineEdit->text();
       if(!userPosition.isEmpty())
       {
       Position=userPosition;
       if(ui->WindowsradioButton->isChecked())
       {
           FavouriteOS="windows";
       }
       if(ui->MacradioButton->isChecked())
       {
        FavouriteOS="Mac";
       }
       if(ui->LinuxradioButton->isChecked())
       {
        FavouriteOS="Linux";
       }
       }
       accept();

}

void InfoDialog::on_CANCELpushButton_clicked()
{
    reject();
}

QString InfoDialog::getFavouriteOS() const
{
    return FavouriteOS;
}

QString InfoDialog::getPosition() const
{
    return Position;
}
