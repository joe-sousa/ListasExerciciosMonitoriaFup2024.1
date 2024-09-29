#include<stdio.h>
#include<stdlib.h>

double bill(double *price, int quantity){
    // Aloca memória dinamicamente para armazenar o valor total da comanda
    double *temp = (double*) malloc(sizeof(double));
    if (temp == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    
    *temp = *price;  
    double result = *temp / quantity; 

    printf("Valor armazenado em temp antes do free: %.2lf\n", *temp);

    free(temp);  // Libera a memória alocada
    temp = NULL;  // Define temp como NULL após liberar, boa prática

    // Imprime mensagem para indicar que a memória foi liberada
    if (temp == NULL) {
        printf("A memória foi liberada corretamente.\n");
    }
    return result;
}

int main(){
    double preco;
    int qtd;
    printf("Digite o valor da comanda ");
    scanf("%lf", &preco);

    printf("Digite a quantidade de pessoas ");
    scanf("%d", &qtd);
     
    double res = bill(&preco, qtd);
    printf("O valor por pessoa foi de %.2lf\n", res);

    return 0;
}