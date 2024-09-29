#include<stdio.h>

int sumImpares(int x){
    int impar=0;
    if(x %2 != 0){
        impar=x;
    }
    return impar;
}

void printNumbers(int x){
    int j, soma=0;
    for(j=1; j<=x; j++){
        soma+=sumImpares(j);
    }
    printf("O valor da soma eh: %d\n", soma);
}

int main(){
    printNumbers(10);
    return 0;
}