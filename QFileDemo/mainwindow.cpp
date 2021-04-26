#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QFile file("C:/Users/91978/Documents/QFileDemo/myfile.txt");
      if(!file.open(QFile::WriteOnly | QFile::Text)) {
          QMessageBox::warning(this,"yogeshwari","file not opened");
      }
      QTextStream out(&file);
      QString text = ui->plaintextEdit->toPlainText();
      out<<text;
      file.flush();
      file.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString filter="All File (*.*);; Text File (*.txt);; XML File(*.xml)";
       QString file_name=QFileDialog::getOpenFileName(this,"open a file","C://",filter);
       QFile file(file_name);
       if(!file.open(QFile::ReadOnly | QFile::Text)) {
           QMessageBox::warning(this,"yogeshwari","file not opened");
       }
       QTextStream in(&file);
       QString text=in.readAll();
       ui->plaintextEdit->toPlainText();


       file.close();
}
