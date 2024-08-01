#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>
#include "ui_calculadora.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class calculadora;
}
QT_END_NAMESPACE

class calculadora : public QMainWindow
{
    Q_OBJECT

    public:
        calculadora(QWidget *parent = nullptr);
        ~calculadora();

    private:
        Ui::calculadora ui;
    private slots:

        void onZero(void);
        void onUm(void);

        void onDois(void);

        void onTres(void);

        void onQuatro(void);
        void onCinco(void);
        void onSeis(void);
        void onSete(void);
        void onOito(void);
        void onNove(void);
        //sinais
        void onMais(void);
        void onMenos(void);
        void onVezes(void);
        void onDivisao(void);
        //ponto
        void onPonto(void);
        //clear e igual
        void onIgual(void);
        void onClear(void);
    };

#endif // CALCULADORA_H
