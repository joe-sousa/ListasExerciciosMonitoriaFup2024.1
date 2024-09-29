#include<stdio.h>
#include<stdlib.h>

int main(){
    /*int *p1 = malloc(4), *p2 = malloc(sizeof(int));
    *p1 = 2560;
    *p2 = 1240;
    printf("%d\n", *p1 - *p2);
    free(p1);
    free(p2);
    printf("%d %d\n", *p1, *p2);*/


    int *p, i;
    p = malloc(sizeof(int)*10);
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &p[i]);
        printf("valor digitado %d\n", p[i]);
    }

    printf("%d", p[2]);

    return 0;
}