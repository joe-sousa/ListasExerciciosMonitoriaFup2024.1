#include <stdio.h>

int main(){
    int resto100,resto50,resto10,resto5,resto2,resto1,valor;
    int qtdNota100=0,qtdNota50=0,qtdNota10=0,qtdNota5=0,qtdNota2=0,qtdNota1=0;
    
    valor=11;
    if(valor >= 100){
        qtdNota100=valor/100;
        resto100=valor%100;
        valor=resto100;
    }

    if(valor >= 50){
        qtdNota50=valor/50;
        resto50=valor%50;
        valor=resto50;
    }
    
    if(valor >= 10){
        qtdNota10=valor/10;
        resto10=valor%10;
        valor=resto10;
    }
    
    if(valor >= 5){
        qtdNota5=valor/5;
        resto5=valor%5;
        valor=resto5;
    }
    
    if(valor >= 2){
        qtdNota2=valor/2;
        resto2=valor%2;
        valor=resto2;
    }
    
    if(valor == 1){
        qtdNota1=valor;
    }
    
    printf("%d %d %d %d %d %d\n", qtdNota100, qtdNota50, qtdNota10, qtdNota5, qtdNota2, qtdNota1);
    return 0;
}