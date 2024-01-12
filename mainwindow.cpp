#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtCore>
#include<QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("hello everyone");
    //adaugare manuala variante combo box
    //ui->comboBox->addItem("Tutorial19");
    //ui->comboBox->addItem("Tutorial19 v2");

    for(int i=0; i<9; i++)
    {
        ui->comboBox->addItem(QString::number(i)+="item");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //tut 16
    //QMessageBox::information(this, "title", "Hello!");
    //tut 17
    /*if(ui->checkBox->isChecked())
    {
        QMessageBox::information((this, "dogs", "you like dogs"));
    }
    else
    {
        QMessageBox::information((this, "dogs", "you dont like dogs"));
    }*/
}


void MainWindow::on_pushButton_2_clicked()
{
    //ui->lineEdit->setText("hello world");
    QMessageBox::information(this, "title", ui->lineEdit->text());
}

//tut 18
void MainWindow::on_pushButton_3_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this,"title",ui->radioButton->text());
        QMessageBox::information(this,"title",ui->radioButton_2->text());
    }
}

//tut19
void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "title", ui->comboBox->currentText());
}

