#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Malloc 1
    char *ptr;
    ptr = (char *)malloc(1);
    printf("Digite a letra: ");
    scanf("%c", ptr);
    printf("%c\n", *ptr);

    // Malloc 2
    int x = 10;
    int *p;
    // printf("Valor inicial de p: %d\n", *p);
    p = (int *)malloc(sizeof(int));
    printf("Tamanho em bytes: %zu\n", sizeof(*p));
    if (p == NULL)
    {
        printf("Memoria cheia");
    }
    else
    {
        printf("Digite o numero: ");
        scanf("%d", p);
        printf("Valor p agora é: %d\n", *p);
    }
    free(p);
    p = NULL;
    p = &x;
    printf("Valor inicial de p: %d\n", *p);
    
    return 0;
}