#include<stdio.h>

int main(){
    
    /* Exemplo 1) Impressão de valores apontados por ponteiros, e de endereços de memoria*/

    /*printf("** Exemplo 1 **\n");
    int x = 4;// A variavel X recebe 4.
    printf("%d\n", x);

    int *p = &x;//O ponteiro p aponta para endereço de X.
    printf("%d\n", *p);//Imprime o valor apontado por p, no caso x
    
    *p=10;//O valor apontado por p recebe 5, ou seja X igual a 5;
    printf("%d\n", *p);//Imprime o valor apontado por p, no caso x
    
    printf("%p\n", &p);//Imprime o endereço de p
    printf("%p\n", p);//Imprime o valor de p
    printf("%p\n", &x);//Imprime o endereco de x
    printf("%d\n", x);//Imprime o valor de x*/

    //Exemplo 2) Manipulação de Ponteiros
    // /*printf("** Exemplo 2 **\n");
    int a=10, b=5, c;
    int *p1 = &a, *p2 = &b;
    printf("p1: %d p2: %d\n", *p1, *p2);
    c = *p1;
    *p1 = *p2;
    *p2 = c;
    printf("p1: %d p2: %d\n", *p1, *p2);
    
    return 0;
}

