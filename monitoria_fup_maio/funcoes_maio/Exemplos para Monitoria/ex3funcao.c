#include<stdio.h>

void somaprod(int a, int b, int *p, int *q){
    *p = (a + b) * 2;
    *q = (a * b) * 3;
}

//*p = &s;
//*q = &p;

int main(){
    int s, p;
    somaprod(3, 5, &s, &p);
    printf("Soma = %d Produto = %d\n", s, p);
    return 0;
}