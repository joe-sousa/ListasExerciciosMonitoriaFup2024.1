#include<stdio.h>

int somaPar(int x){
    int par=0;

    if(x%2 == 0){
        par = x;
    }
    return par;
}

int printLista(int x){
    int i, soma=0;

    for(i=0; i<=x; i++){
        soma+=somaPar(i);
    }
    printf("\n");
    return soma;
}

int main(){
    int res = printLista(10);
    printf("O valor soma eh %d\n", res);
    
    return 0;
}