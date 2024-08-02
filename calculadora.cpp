#include "calculadora.h"
#include "ui_calculadora.h"
#include <string>
#include <iostream>
#include <sstream>
#include <QString>
calculadora::calculadora(QWidget *parent): QMainWindow(parent)
{
    this ->ui.setupUi(this);
    //numeros connect
    connect(this -> ui.btn0,SIGNAL(clicked()),this,SLOT(onZero()));
    connect(this -> ui.btn1,SIGNAL(clicked()),this,SLOT(onUm()));
    connect(this -> ui.btn2,SIGNAL(clicked()),this,SLOT(onDois()));
    connect(this -> ui.btn3,SIGNAL(clicked()),this,SLOT(onTres()));
    connect(this -> ui.btn4,SIGNAL(clicked()),this,SLOT(onQuatro()));
    connect(this -> ui.btn5,SIGNAL(clicked()),this,SLOT(onCinco()));
    connect(this -> ui.btn6,SIGNAL(clicked()),this,SLOT(onSeis()));
    connect(this -> ui.btn7,SIGNAL(clicked()),this,SLOT(onSete()));
    connect(this -> ui.btn8,SIGNAL(clicked()),this,SLOT(onOito()));
    connect(this -> ui.btn9,SIGNAL(clicked()),this,SLOT(onNove()));
    //Sinais connect
    connect(this -> ui.btnmais,SIGNAL(clicked()),this,SLOT(onMais()));
    connect(this -> ui.btnmen,SIGNAL(clicked()),this,SLOT(onMenos()));
    connect(this -> ui.btnmult,SIGNAL(clicked()),this,SLOT(onVezes()));
    connect(this -> ui.btndiv,SIGNAL(clicked()),this,SLOT(onDivisao()));
    //Ponto
    connect(this -> ui.btnpon,SIGNAL(clicked()),this,SLOT(onPonto()));
    //Igual e clear
    connect(this -> ui.btnlimp,SIGNAL(clicked()),this,SLOT(onClear()));
    connect(this -> ui.btnigua,SIGNAL(clicked()),this,SLOT(onIgual()));

}

calculadora::~calculadora()
{

}
//numero funções
void calculadora::onZero(){
    ui.ldtext -> insertPlainText("0");
}
void calculadora::onUm(){
    ui.ldtext -> insertPlainText("1");
}
void calculadora::onDois(){
    ui.ldtext -> insertPlainText("2");
}
void calculadora::onTres(){
    ui.ldtext ->insertPlainText("3");
}
void calculadora::onQuatro(){
    ui.ldtext -> insertPlainText("4");
}
void calculadora::onCinco(){
    ui.ldtext -> insertPlainText("5");
}
void calculadora::onSeis(){
    ui.ldtext -> insertPlainText("6");
}
void calculadora::onSete(){
    ui.ldtext -> insertPlainText("7");
}
void calculadora::onOito(){
    ui.ldtext -> insertPlainText("8");
}
void calculadora::onNove(){
    ui.ldtext -> insertPlainText("9");
}
//Sinais
void calculadora::onMais(){
    ui.ldtext -> insertPlainText("+");
}
void calculadora::onMenos(){
    ui.ldtext -> insertPlainText("-");
}
void calculadora::onDivisao(){
    ui.ldtext -> insertPlainText("/");
}
void calculadora::onVezes(){
    ui.ldtext -> insertPlainText("*");
}
//ponto
void calculadora::onPonto(){
    ui.ldtext -> insertPlainText(".");
}
//clear
void calculadora::onClear(){
    ui.ldtext -> setText("");

}

//igual
void calculadora::onIgual(){
    std::string equacao_string = ui.ldtext -> toPlainText().toStdString();
    char simb;
    std::istringstream iss;
    iss.str(equacao_string);
    int a,b;
    iss >> a;

    for(size_t i=0; i < std::strlen(equacao_string.c_str()) ; ++i){
        if(equacao_string[i] == '+'){
            simb = '+';
            iss.ignore(10,'+');
        }
        if(equacao_string[i] == '-'){
            simb = '-';
            iss.ignore(10,'-');
        }
        if(equacao_string[i] == '/'){
            simb = '/';
            iss.ignore(10,'/');
        }
        if(equacao_string[i] == '*'){
            simb = '*';
            iss.ignore(10,'*');
        }


    }
    QString res;
    iss >> b;
    if(simb == '+'){
        res = QString::number(a+b);
    }if(simb == '-'){
        res = QString::number(a-b);
    }if(simb == '/'){
        res = QString::number(a/b);
    }if(simb == '*'){
        res = QString::number(a*b);
    }
    ui.ldtext -> setText(res);
}
