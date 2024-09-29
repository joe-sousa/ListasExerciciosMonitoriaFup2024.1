#include<stdio.h>

int main(){
    char state[15];
    printf("Digite o estado: ");
    scanf("%[^\n]", state);

    printf("%s\n", state);

}