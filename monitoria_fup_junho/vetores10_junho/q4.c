#include<stdio.h>

void cadastrar_precos_produtos(float num[], int qtd){
    for(int i=0; i<qtd; i++){
        printf("Digite o preço: ");
        scanf("%f", &num[i]);
    }
}

void imprimir_precos_produtos(float num[], int qtd){
    for(int i=0; i<qtd; i++){
        printf("%.1f \n", num[i]);
    }
}

void ordenar_precos(float num[], int qtd){
    float maior=0;
    float ord_numb[5];
    for(int i=0; i<qtd; i++){
        if(num[i] > maior){
            maior=num[i];
            ord_numb[i]=maior;        
        }
        for(int j=0; j<qtd; j++){
            ord_numb[j]=maior;
        }
    }

    for(int j=0; j<qtd; j++){
        printf("%.2f\n", ord_numb[j]);
    }
}

int main(){
    float numbers[5];
    cadastrar_precos_produtos(numbers, 5);
    imprimir_precos_produtos(numbers, 5);
    ordenar_precos(numbers, 5);  
}
