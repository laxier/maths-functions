/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Euiclid;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *line_a;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *line_b;
    QPushButton *Button1;
    QLabel *output1;
    QWidget *Euler;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *line_n;
    QPushButton *Button2;
    QLabel *output2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(250, 370);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(250, 370));
        MainWindow->setMaximumSize(QSize(250, 370));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 261, 381));
        tabWidget->setAutoFillBackground(false);
        Euiclid = new QWidget();
        Euiclid->setObjectName(QString::fromUtf8("Euiclid"));
        verticalLayout_5 = new QVBoxLayout(Euiclid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(-1, -1, -1, 200);
        label = new QLabel(Euiclid);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        label_2 = new QLabel(Euiclid);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        line_a = new QLineEdit(Euiclid);
        line_a->setObjectName(QString::fromUtf8("line_a"));
        line_a->setFocusPolicy(Qt::WheelFocus);
        line_a->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(line_a);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        label_3 = new QLabel(Euiclid);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        line_b = new QLineEdit(Euiclid);
        line_b->setObjectName(QString::fromUtf8("line_b"));
        line_b->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(line_b);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        Button1 = new QPushButton(Euiclid);
        Button1->setObjectName(QString::fromUtf8("Button1"));

        verticalLayout_3->addWidget(Button1);

        output1 = new QLabel(Euiclid);
        output1->setObjectName(QString::fromUtf8("output1"));
        sizePolicy1.setHeightForWidth(output1->sizePolicy().hasHeightForWidth());
        output1->setSizePolicy(sizePolicy1);
        output1->setFont(font);
        output1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(output1);


        verticalLayout_5->addLayout(verticalLayout_3);

        tabWidget->addTab(Euiclid, QString());
        Euler = new QWidget();
        Euler->setObjectName(QString::fromUtf8("Euler"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Euler->sizePolicy().hasHeightForWidth());
        Euler->setSizePolicy(sizePolicy2);
        Euler->setContextMenuPolicy(Qt::PreventContextMenu);
        gridLayout = new QGridLayout(Euler);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(40, -1, 40, 200);
        label_4 = new QLabel(Euler);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        line_n = new QLineEdit(Euler);
        line_n->setObjectName(QString::fromUtf8("line_n"));
        sizePolicy1.setHeightForWidth(line_n->sizePolicy().hasHeightForWidth());
        line_n->setSizePolicy(sizePolicy1);
        line_n->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(line_n);

        Button2 = new QPushButton(Euler);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(Button2);

        output2 = new QLabel(Euler);
        output2->setObjectName(QString::fromUtf8("output2"));
        sizePolicy1.setHeightForWidth(output2->sizePolicy().hasHeightForWidth());
        output2->setSizePolicy(sizePolicy1);
        output2->setFont(font);
        output2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(output2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(Euler, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Maths by Laxier", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GCD of two numbers", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Integer a", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Integer b", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "Find GCD(a, b)", nullptr));
        output1->setText(QCoreApplication::translate("MainWindow", "GCD(a,b) = ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Euiclid), QCoreApplication::translate("MainWindow", "GCD", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Integer n", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "Find \317\206(n)", nullptr));
        output2->setText(QCoreApplication::translate("MainWindow", "\317\206(n) = ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Euler), QCoreApplication::translate("MainWindow", "Euler's function", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
