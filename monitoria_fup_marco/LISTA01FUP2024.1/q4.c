#include<stdio.h>

int main(){
    int numb1;
    int numb2;
    int difference;
    
    printf("Digite o numero 1: ");
    scanf("%d", &numb1);

    printf("Digite o numero 2: ");
    scanf("%d", &numb2);

    difference = numb1 - numb2;

    if (difference < 0){
        difference*=-1;
    }

    printf("The difference is: %d", difference);
    
    return 0;
}