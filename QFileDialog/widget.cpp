#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QDebug>
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


void Widget::on_pushButton_clicked()
{
    /* open an existing
QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "c://",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);
qDebug()<<"Your Chosen Directories is:"<<dir;
*/

    /* open a  files
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                         tr("Images (*.png *.xpm *.jpg)"));
    qDebug()<<"Your Chosen file is:"<<fileName;
    */
 /* to open multiple files
    QStringList files = QFileDialog::getOpenFileNames(
                                                    this,
                                                    "Select one or more files to open",
                                                    "/home",
                                                     "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XL files (*.xml)");
    qDebug()<<"Your Chosen file is:"<<files;
    */
   QString fileName = QFileDialog::getSaveFileName( this,tr("save file"),
                                                    "/home/yogi/untitled.png",
                                                     tr("Images (*.png *.xpm *.jpg);;Text files (*.txt)"));

   qDebug()<<"Your Chosen filname is:"<<fileName;

}

