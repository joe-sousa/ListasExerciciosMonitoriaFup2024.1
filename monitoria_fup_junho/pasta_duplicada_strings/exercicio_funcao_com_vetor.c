#include<stdio.h>

int size(char* word){
    int i;
    int n = 0; 
    for(i=0; word[i]!= '\0'; i++){
        n++;
    }
    return n;
}

int main(){
    int tam;
    char city[] = "crateus";
    tam=size(city);
    printf("A string %s tem %d caracteres \n", city, tam);
    return 0;
}