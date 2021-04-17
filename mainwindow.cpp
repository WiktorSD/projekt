#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand( time( NULL ) );
    file.open("losowe.txt",std::ios::in);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    losowa = std::rand();
    file<<losowa<<"\n";
    ui->textEdit->setText(QString::number(losowa));


}
