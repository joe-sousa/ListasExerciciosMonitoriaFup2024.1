#include<stdio.h>

void calc_fat(int x){
    if(x > 0){
        int fat = 1;
        while(x != 0){
            fat*=x;
            x--;
        }
        printf("%d\n", fat);
    }else{
        printf("Digite um numero maior que zero");
    }
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    calc_fat(x);
    return 0;
}