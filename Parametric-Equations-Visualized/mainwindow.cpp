#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btn_Astroid_clicked()
{
     this->ui->renderArea->setShape(RenderArea::Astroid);
     this->ui->renderArea->repaint();
}

void MainWindow::on_Cycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_HuygensCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_HypoCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->repaint();
}
