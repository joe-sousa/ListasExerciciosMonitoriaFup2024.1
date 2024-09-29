#include<stdio.h>

//Ponteiro de ponteiro
 
int main(){
    int x = 10;
    int *p_x = &x;
    int **p_p_x = &p_x;
    printf("%d\n", x);
    printf("%d\n", *p_x);
    printf("%d\n", **p_p_x);
    
    return 0;
}

