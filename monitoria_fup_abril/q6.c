#include<stdio.h>

/**
 * Receba números inteiros do usuário até que ele informe o valor 0
 *  e identifique qual foi o maior valor e qual foi o menor valor digitados
 **/
 
int main(){
    float valor, maior=0.0, menor=1000;
    do{
        printf("Digite o valor ");
        scanf("%f", &valor);

        if(valor > maior){
            maior = valor;
        }

        if((valor < menor) && (valor != 0)){  
            menor = valor;
        }
    }while(valor != 0);
        
     printf("%.2f %.2f\n", maior, menor);
    
    return 0;
}