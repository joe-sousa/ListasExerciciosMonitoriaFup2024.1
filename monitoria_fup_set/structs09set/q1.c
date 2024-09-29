#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} Ponto;

typedef struct rectangle
{
    int x1, x2, y1, y2;
} Rectangle;

int checkInRectangle(Rectangle r1, Ponto p1)
{
    if (p1.x >= r1.x1 && p1.x <= r1.x2 && p1.y >= r1.y1 && p1.y <= r1.y2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Ponto p1;
    p1.x = 35;//testar com 10
    p1.y = 20;//testar com 20

    Rectangle r;
    r.x1 = 30; //testar com 5
    r.y1 = 10; //testar com 10
    r.x2 = 40; //testar com 3
    r.y2 = 50; //testar com 7

    int retorno = checkInRectangle(r, p1);
    printf("%d\n", retorno);
}