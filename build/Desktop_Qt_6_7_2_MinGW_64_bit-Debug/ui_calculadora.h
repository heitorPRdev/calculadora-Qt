/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculadora
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *ldtext;
    QPushButton *btnlimp;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnmen;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btndiv;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnmult;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnpon;
    QPushButton *btn0;
    QPushButton *btnigua;
    QPushButton *btnmais;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculadora)
    {
        if (calculadora->objectName().isEmpty())
            calculadora->setObjectName("calculadora");
        calculadora->resize(800, 600);
        calculadora->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget = new QWidget(calculadora);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 50, 341, 72));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ldtext = new QTextEdit(layoutWidget);
        ldtext->setObjectName("ldtext");
        QFont font;
        font.setPointSize(20);
        ldtext->setFont(font);
        ldtext->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout->addWidget(ldtext);

        btnlimp = new QPushButton(layoutWidget);
        btnlimp->setObjectName("btnlimp");
        btnlimp->setMaximumSize(QSize(81, 71));

        horizontalLayout->addWidget(btnlimp);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(159, 130, 342, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn1 = new QPushButton(layoutWidget1);
        btn1->setObjectName("btn1");
        btn1->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(btn1);

        btn2 = new QPushButton(layoutWidget1);
        btn2->setObjectName("btn2");
        btn2->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(btn2);

        btn3 = new QPushButton(layoutWidget1);
        btn3->setObjectName("btn3");
        btn3->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(btn3);

        btnmen = new QPushButton(layoutWidget1);
        btnmen->setObjectName("btnmen");
        btnmen->setMaximumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(btnmen);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn4 = new QPushButton(layoutWidget1);
        btn4->setObjectName("btn4");
        btn4->setMaximumSize(QSize(80, 80));

        horizontalLayout_3->addWidget(btn4);

        btn5 = new QPushButton(layoutWidget1);
        btn5->setObjectName("btn5");
        btn5->setMaximumSize(QSize(80, 80));

        horizontalLayout_3->addWidget(btn5);

        btn6 = new QPushButton(layoutWidget1);
        btn6->setObjectName("btn6");
        btn6->setMaximumSize(QSize(80, 80));

        horizontalLayout_3->addWidget(btn6);

        btndiv = new QPushButton(layoutWidget1);
        btndiv->setObjectName("btndiv");
        btndiv->setMaximumSize(QSize(80, 80));

        horizontalLayout_3->addWidget(btndiv);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btn7 = new QPushButton(layoutWidget1);
        btn7->setObjectName("btn7");
        btn7->setMaximumSize(QSize(80, 80));

        horizontalLayout_4->addWidget(btn7);

        btn8 = new QPushButton(layoutWidget1);
        btn8->setObjectName("btn8");
        btn8->setMaximumSize(QSize(80, 80));

        horizontalLayout_4->addWidget(btn8);

        btn9 = new QPushButton(layoutWidget1);
        btn9->setObjectName("btn9");
        btn9->setMaximumSize(QSize(80, 80));

        horizontalLayout_4->addWidget(btn9);

        btnmult = new QPushButton(layoutWidget1);
        btnmult->setObjectName("btnmult");
        btnmult->setMaximumSize(QSize(80, 80));

        horizontalLayout_4->addWidget(btnmult);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnpon = new QPushButton(layoutWidget1);
        btnpon->setObjectName("btnpon");
        btnpon->setMaximumSize(QSize(80, 80));

        horizontalLayout_5->addWidget(btnpon);

        btn0 = new QPushButton(layoutWidget1);
        btn0->setObjectName("btn0");
        btn0->setMaximumSize(QSize(80, 80));

        horizontalLayout_5->addWidget(btn0);

        btnigua = new QPushButton(layoutWidget1);
        btnigua->setObjectName("btnigua");
        btnigua->setMaximumSize(QSize(80, 80));

        horizontalLayout_5->addWidget(btnigua);

        btnmais = new QPushButton(layoutWidget1);
        btnmais->setObjectName("btnmais");
        btnmais->setMaximumSize(QSize(80, 80));

        horizontalLayout_5->addWidget(btnmais);


        verticalLayout->addLayout(horizontalLayout_5);

        calculadora->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculadora);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        calculadora->setMenuBar(menubar);
        statusbar = new QStatusBar(calculadora);
        statusbar->setObjectName("statusbar");
        calculadora->setStatusBar(statusbar);

        retranslateUi(calculadora);

        QMetaObject::connectSlotsByName(calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *calculadora)
    {
        calculadora->setWindowTitle(QCoreApplication::translate("calculadora", "calculadora", nullptr));
        btnlimp->setText(QCoreApplication::translate("calculadora", "C", nullptr));
        btn1->setText(QCoreApplication::translate("calculadora", "1", nullptr));
        btn2->setText(QCoreApplication::translate("calculadora", "2", nullptr));
        btn3->setText(QCoreApplication::translate("calculadora", "3", nullptr));
        btnmen->setText(QCoreApplication::translate("calculadora", "-", nullptr));
        btn4->setText(QCoreApplication::translate("calculadora", "4", nullptr));
        btn5->setText(QCoreApplication::translate("calculadora", "5", nullptr));
        btn6->setText(QCoreApplication::translate("calculadora", "6", nullptr));
        btndiv->setText(QCoreApplication::translate("calculadora", "/", nullptr));
        btn7->setText(QCoreApplication::translate("calculadora", "7", nullptr));
        btn8->setText(QCoreApplication::translate("calculadora", "8", nullptr));
        btn9->setText(QCoreApplication::translate("calculadora", "9", nullptr));
        btnmult->setText(QCoreApplication::translate("calculadora", "X", nullptr));
        btnpon->setText(QCoreApplication::translate("calculadora", ".", nullptr));
        btn0->setText(QCoreApplication::translate("calculadora", "0", nullptr));
        btnigua->setText(QCoreApplication::translate("calculadora", "=", nullptr));
        btnmais->setText(QCoreApplication::translate("calculadora", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculadora: public Ui_calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
