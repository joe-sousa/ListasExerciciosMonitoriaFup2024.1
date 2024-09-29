#include<stdio.h>

/*
Desenvolva um programa que solicite ao usuário um número
inteiro e em seguida, verifique se é divisível por 3. Se for
divisível por 3, exiba uma mensagem indicando que é divisível
por 3; caso contrário, exiba uma mensagem indicando que
não é divisível por 3.
*/

int main(){
    int num, temp, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num != 0){
        temp=num%10;
        printf("%d\n", temp);
        soma+=temp;
        num=num/10;
    }
    printf("Soma %d", soma);
}