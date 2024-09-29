#include<stdio.h>

int printOpposite(int number){
    int temp=0;
    while(number != 0){
        temp=temp*10 + number%10;
        number=number/10;
    }

    return temp;
}

int main(){
    int res = printOpposite(1987);
    printf("Numero contrário %d\n", res);
    return 0;
}