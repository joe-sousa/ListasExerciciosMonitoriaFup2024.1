#include<stdio.h>

//Receba do usuário um valor positivo x e some todos os números inteiros de 1 até x.
int main(){
    int valor;
    printf("Digite o valor ");
    scanf("%d", &valor);
    if(valor > 0){
        int count=0;
    for(int i=1;i<=valor;i++){
        printf("%d\n", i);
        count+=i;
    }
    printf("%d\n", count);
    }else{
        printf("Valor deve ser positivo\n");
    }
    
    return 0;
}