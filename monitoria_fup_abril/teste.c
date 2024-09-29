#include<stdio.h>

int main(){
    int sum = 0;

    for(int i=0; i<=10; i++){
        if(i%2 == 0){
            sum+=i;
            printf("%d ", sum);
        }

            
    }
    printf("Soma %d\n", sum);
}