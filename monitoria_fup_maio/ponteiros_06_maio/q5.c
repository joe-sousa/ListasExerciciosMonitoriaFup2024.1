#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 3, b = 6, c = 9, d = 12;
    int *p_a, *p_b, *p_c, *p_d;
    
    p_a = &a;
    p_b = &b;
    p_c = &c;
    p_d = &d;

    int temp = *p_a;
    *p_a = *p_b;//6
    *p_b = *p_c;//9
    *p_c = *p_d;//12
    *p_d = temp;//3

    printf("Novo valor de a: %d\n", a);
    printf("Novo valor de b: %d\n", b);
    printf("Novo valor de c: %d\n", c);
    printf("Novo valor de d: %d\n", d);

    return 0;
}