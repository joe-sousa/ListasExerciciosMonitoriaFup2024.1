#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define FLAG 30

void check(float value){
    if(value < FLAG){
        printf("Precisa irrigar! - %.2f\n",  value);
    }else{
        printf("Nao precisa irrigar - %.2f\n", value);
    }
}

float umidade(){
    srand(time(NULL));
    float umity;
    for(int i=0; i < FLAG; i++){
        umity = rand() % 101;
        check(umity);
    }
    return umity;
}

int main(){
    umidade();
    return 0;
}