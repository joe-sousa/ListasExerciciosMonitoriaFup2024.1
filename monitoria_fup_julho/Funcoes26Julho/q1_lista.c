#include <stdio.h>

int validaNumber(int number)
{
    int final_number;

    if (number % 2 == 0)
    {
        final_number = number * number  * number;
    }
    else
    {
        final_number = number * number;
    }
    return final_number;
}

void imprimirLista(int x)
{
    int number;
    int i=1;//1,2,3,4 ..10
    while(i <= x){
        int res = validaNumber(i);
        printf("%d ", res);
        i++;
    }
}

int somaInteiros(int x, int y)
{
    int res = x + y;
    printf("A soma vale: %d\n", res);
    return res;
}

int main()
{
    int x = 10, y = 20;

    for(int j=1; j<=10; j++){
        printf("%d ", j);
    }

    printf("\n");

    imprimirLista(x);
    //somaInteiros(x, y);
    return 0;
}