#include<stdio.h>

int main(){
    /*
    Q1 - A)
    Vetor cujo tamanho não é passado diretamente,
    porém, a inicialização do vetor com caracteres
    passado entre chaves define o tamanho do vetor.
    */

   char vet1[] = {'a','r','r','o','z'};
   int i=0;
   while (vet1[i] != '\0'){
    printf("%c ", vet1[i]);
    i++;
   }

   /*
    Q1 - B)
   Vetor com tamanho fixo, porém inicializado com 
   caracteres individualmente, por ex: 
    char color[5];
    pessoa[0]=’J’;
    pessoa[1]=’o’;
    pessoa[2]=’e’;
    pessoa[3]=’l’;
    pessoa[4]=’\0’;
   */
    printf("\n");
    char color[7];
    color[0]= 'p';
    color[1]='u';
    color[2]='r';
    color[3]='p';
    color[4]='l';
    color[5]='e';
    color[6]='\0';

    int j=0;
    while (color[j] != '\0'){
        printf("%c ", color[j]);
        j++;
    }

    /*
    Q1 - C
    Vetor cujo tamanho não é passado diretamente, 
    porém o vetor é inicializado com conteúdo entre aspas duplas.
    */
    printf("\n");
    char vet3[] = "pao de acucar";
    printf("%s ", vet3);
   
    //  char vet1[20];
    // printf("Digite o nome:");
    // scanf(" %20[^\n]", vet1);

    // printf("%s\n", vet1);
    // int tamVetor = countSize(vet1);
    // printf("O vetor possui tamanho: %d", tamVetor);
    printf("\n");
    
    /* Q1 - D
    Vetor cujo tamanho é fixo, porém o vetor é
    inicializado com conteúdo entre aspas duplas.
    */
    char vet4[4] = "pao";
    printf("%s ", vet4);

    return 0;
}