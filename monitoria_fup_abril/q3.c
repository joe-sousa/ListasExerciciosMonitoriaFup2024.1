#include<stdio.h>

//Receber dois inteiros, a e b, então some todos os números inteiros do menor até o maior e exiba o resultado
int main(){
    int valor1, valor2, maior, menor;
    printf("Digite o valor 1 e valor 2 ");
    scanf("%d %d", &valor1, &valor2);
    if((valor1 > 0) && (valor2 > 0)){
        if(valor1 > valor2){
        menor = valor2;
        maior = valor1;
    }else{
        menor = valor1;
        maior = valor2;
    }
    int count=0;
    
    for(int i=menor;i<=maior;i++){
        printf("%d\n", i);
        count+=i;
    }
    printf("%d\n", count);
    }else{
        printf("Valores devem ser maiores que zero\n");
    }
    
    return 0;
}