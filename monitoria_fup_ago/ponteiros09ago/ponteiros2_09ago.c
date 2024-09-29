#include<stdio.h>

int main(){
    int *p, **r, a=-1,c, b=10;
    p=&a;
    r=&p;
    c=**r + (b--);//-1 + 10 = 9
    printf("%d\n", c);
    return 0;
}