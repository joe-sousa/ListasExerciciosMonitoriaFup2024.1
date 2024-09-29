#include<stdio.h>

//Modifique o programa da questão anterior para calcular a média aritmética dos valores digitados.
int main(){
    float valor, parada=0.0;
    
    
    float sum=0.0;
    int counter = 0;
     do{
        printf("Digite o valor ");
        scanf("%f", &valor);
        sum+=valor;
        counter++;
     }while(valor != 0);
        

     printf("Soma %.2f quantidade %d media %.2f\n", sum, counter-1, sum/(counter-1));
    
    return 0;
}