#include<stdio.h>

int countSize(char *vet){
    int i=0;
    while(vet[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char vetA[] = "arroz doce";
    int size = countSize(vetA);
    printf("A string %s possui tamanho %d\n", vetA, size);
    return 0;
}