#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *p, i, x;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &x);

    p = (int *)malloc(sizeof(int)*x);
    
    printf("Tamanho do espaço alocado: %lu bytes\n", sizeof(int) * x);
    
    for (i = 0; i < x; i++)
    {
        printf("Digite o numero %d:", i);
        scanf("%d", &p[i]); 
    }

    printf("\n");

    for (i = 0; i < x; i++)
    {
        printf("\nNumero%i: %d, %lu Bytes", i, p[i], sizeof(int) * (i + 1));
    }
    
    free(p);

    return 0;
}