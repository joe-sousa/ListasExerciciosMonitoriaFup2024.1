#include<stdio.h>

int main(){
    int numb1;
    int numb2;
    int numb3;
    int bigger;
    int minor;
    
    printf("Digite o numero 1: ");
    scanf("%d", &numb1);

    printf("Digite o numero 2: ");
    scanf("%d", &numb2);

    printf("Digite o numero 3: ");
    scanf("%d", &numb3);

    if((numb1 > numb2) && (numb1 > numb3)){
        bigger = numb1;
        if(numb2 > numb3){
            minor = numb3;
        }else{
            minor = numb2;
        }
    }

    if((numb2 > numb1) && (numb2 > numb3)){
        bigger = numb2;
        if(numb1 > numb3){
            minor = numb3;
        }else{
            minor = numb1;
        }
    }

    if((numb3 > numb1) && (numb3 > numb2)){
        bigger = numb3;
        if(numb2 > numb1){
            minor = numb1;
        }else{
            minor = numb2;
        }
    }

    printf("Maior numero com valor %d e menor numero possui valor de %d ", bigger, minor);

    return 0;
}