#include<stdio.h>

int main(){
    int valor=35748;
    int soma=0;
    while (valor !=0)
    {
        int dig = valor%10;
        valor=valor/10;
        soma+=dig;
    }
    printf("%d ", soma);
    return 0;
}