#include<stdio.h>

int main(){
    int temp;
    scanf("%d", &temp);
    if(temp < 30){
        if(temp > 20){
            printf("Agradavel\n");
        }else{
            printf("Muito frio\n");
        }
    }else{
        printf("Quente\n");
    }
}