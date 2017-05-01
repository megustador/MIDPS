#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNum;
bool userSecondNumber = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_plusminus,SIGNAL(released()),this,SLOT(plusminus_released()));
    connect(ui->pushButton_percent,SIGNAL(released()),this,SLOT(percent_released()));

    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiplication,SIGNAL(released()),this,SLOT(binary_operation_pressed()));


    ui->pushButton_multiplication->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui->pushButton_plus->isChecked() || ui->pushButton_minus->isChecked() ||
       ui->pushButton_multiplication->isChecked() || ui->pushButton_divide->isChecked()) && (!userSecondNumber))
    {
        labelNumber =  button->text().toDouble();
        userSecondNumber = true;
        newLabel = QString::number(labelNumber,'g',10);
    }
    else
    {
        if (ui->label->text().contains('.') && button->text() == "0")
        {
            newLabel = ui->label->text() + button->text();
        }
        else
        {
           labelNumber = (ui->label->text() + button->text()).toDouble();
           newLabel = QString::number(labelNumber,'g',10);
        }

    }

    ui->label->setText(newLabel);
}

void MainWindow::on_pushButton_dot_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::on_pushButton_plusminus_released()
{
    QPushButton * button = (QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    if (button->text() == "+/-")
    {
       labelNumber = ui->label->text().toDouble();
       labelNumber = labelNumber * -1;
       newLabel = QString::number(labelNumber,'g',15);
       ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_percent_released()
{
    QPushButton * button = (QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    if (button->text() == "%")
    {
       labelNumber = ui->label->text().toDouble();
       labelNumber = labelNumber * 0.01;
       newLabel = QString::number(labelNumber,'g',15);
       ui->label->setText(newLabel);
    }
}


void MainWindow::on_pushButton_equal_released()
{
    double labelNumber;
    double secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if (ui->pushButton_plus->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_plus->setChecked(false);

    }

    else if (ui->pushButton_minus->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_minus->setChecked(false);
    }

    else if (ui->pushButton_multiplication->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_multiplication->setChecked(false);
    }

    else if (ui->pushButton_divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
    }

    userSecondNumber = false;

}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    firstNum = ui->label->text().toDouble();

    button->setChecked(true);

}

void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_multiplication->setChecked(false);

    userSecondNumber = false;
    ui->label->setText("0");
}
