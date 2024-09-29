#include <stdio.h>
#include<stdlib.h>

int main()
{

    // int x;
    // scanf("%d", &x);
    // printf("O valor de x : %d ", x);
    // printf("O endereço de x : %p ", &x);
    // printf("O endereço em decimal : %ld ", (long)&x);

    // int x=10, y=5;
    // int *p1 = &x, *p2 = &y;
    // int temp = *p1;
    // *p1 = *p2;
    // *p2 = temp;

    // printf("%d %d\n", *p1, *p2);

    int *p1 = malloc(4), *p2 = malloc(sizeof(int));
    *p1 = 2560;
    *p2 = 1240;
    printf("%d\n", *p1 + *p2);
    free(p1);
    free(p2);

    return 0;
}