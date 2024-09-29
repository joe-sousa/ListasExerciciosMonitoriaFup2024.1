#include<stdio.h>

/**
 * Receba números inteiros do usuário até que ele informe o valor 0
 *  e identifique qual foi o maior valor e qual foi o menor valor digitados
 **/
 
int main(){
    float valor, segundo_maior=0.00, maior=0.0, segundo_menor, menor=1000.00;
    do{
        printf("Digite o valor ");
        scanf("%f", &valor);

        if(valor > maior){
            segundo_maior = maior;
            maior = valor;
        }


        if((valor < menor) && (valor != 0)){  
            segundo_menor = menor;
            menor = valor;
        }
    }while(valor != 0);
        
    printf("Maior %.2f Menor %.2f\n", maior, menor);
    printf("Segundo Maior %.2f Segundo Menor %.2f\n", segundo_maior, segundo_menor); 
    
    return 0;
}