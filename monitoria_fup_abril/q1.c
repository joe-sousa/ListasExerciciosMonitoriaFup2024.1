#include<stdio.h>

//Desenvolva um programa que some todos os números inteiros de 1 a 100 e exiba o resultado.
int main(){
    int count=0;
    for(int i=0;i<10;i++){
        //printf("%d\n", i);
        count+=i;
    }
    printf("%d\n", count);
    return 0;
}