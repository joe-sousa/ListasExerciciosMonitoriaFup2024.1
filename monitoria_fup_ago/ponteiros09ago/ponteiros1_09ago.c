#include<stdio.h>

//Letra E
int main(){
    int a=2, b=4, c=-1;
    int *ptx=&a, *pty=&b, *ptz=&c;
    printf("%d %d %d %d %d %d\n", a, b, c, *ptx, *pty, *ptz);
    a=(*ptx) * (*pty);
    b = (*ptz) + 1;
    c++;
    printf("%d %d %d %d %d %d\n", a, b, c, *ptx, *pty, *ptz);
    return 0;
}