#include<stdio.h>

int main(){
    int count=0;
    int i;
    for(i=1; i< 10; i++){
        for(int j=1;j<i;j++){
            if(i%j == 0){
                count++;
                if(count == 2){
                    printf("%d", i);
                }
            }
        }
    }
    return 0;
}