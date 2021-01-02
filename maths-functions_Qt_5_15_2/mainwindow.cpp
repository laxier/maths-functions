//Scripted by Laxier
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

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int elr(int n){
    int counter = 0;//counter for coprimes n
    for (int i = 1; i<n; ++i){
        if(gcd(i,n) == 1){
            ++counter;
        }
    }
    return counter;
}

void MainWindow::on_Button1_clicked()
{
    QString lineA = ui->line_a->text(); //getting a as QString
    int a = lineA.toUInt(); //converting a to int
    QString lineB = ui->line_b->text(); //getting b as QString
    int b = lineB.toUInt(); //converting b to int
    int GCD_int = gcd(a,b); //getting GCD(a,b)
    QString GCD = QString::number(GCD_int); // converting GCD to QString
    QString outputline1 = "GCD(" + lineA + "," + lineB + ") = " + GCD; //creating the output line GCD(a,b) = GCD
    ui->output1->setText(outputline1); //changing output text
}

void MainWindow::on_Button2_clicked()
{
    QString lineN = ui->line_n->text(); //getting n as QString
    int n = lineN.toUInt(); //converting n to int
    QString Euler = "φ(" + lineN + ") = " + QString::number(elr(n)); //creating the output line φ(n) = elr
    ui->output2->setText(Euler);//changing output text
}
