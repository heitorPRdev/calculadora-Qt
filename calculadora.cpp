#include "calculadora.h"
#include "ui_calculadora.h"

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
    this -> ui.ldtext -> setText("0");
}
void calculadora::onUm(){
    this -> ui.ldtext -> setText("1");
}
void calculadora::onDois(){
    this -> ui.ldtext -> setText("2");
}
void calculadora::onTres(){
    this -> ui.ldtext -> setText("3");
}
void calculadora::onQuatro(){
    this -> ui.ldtext -> setText("4");
}
void calculadora::onCinco(){
    this -> ui.ldtext -> setText("5");
}
void calculadora::onSeis(){
    this -> ui.ldtext -> setText("6");
}
void calculadora::onSete(){
    this -> ui.ldtext -> setText("7");
}
void calculadora::onOito(){
    this -> ui.ldtext -> setText("8");
}
void calculadora::onNove(){
    this -> ui.ldtext -> setText("9");
}
//Sinais
