#include <stdio.h>
#include <math.h>

//Essa questao pode servir de base para resolver questão 1 da lista de structs

// Definição de struct ponto
typedef struct ponto
{
    float x;
    float y;
} Ponto;

// Calculo da distancia ente dois pontos: d = raiz(x2-x1)² + (y2-y1)²
float distancia(Ponto *p, Ponto *q)
{
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return d;
}

// Definição de struct circle com estrutura aninhada
struct circle
{
    Ponto p;
    float raio;
};

// Renomeando com typedef circle para Circle.
typedef struct circle Circle;

/**
 * Implementação de função interior para calcular se a a distancia
 * entre os pontos: Centro do ponto1 e o ponto2 é menor que o raio
 * de c1;
 *
 * */

int interior(Circle *c1, Ponto *p)
{
    //P q p nao esta aceitando &
    float d = distancia(&c1->p, p);
    return (d < c1->raio);
}

int main()
{

    // Passando o c2 com p1 inserido dentro junto com o raio
    Circle c2 = {{0, 0}, 5};

    // Passando o p2
    Ponto p2 = {5, 4};

    // Verificando se o resultado for menor retorna 1, caso contrário 0
    if (interior(&c2, &p2))
    {
        printf("O ponto %.0f %.0f esta dentro da curva\n", p2.x, p2.y);
    }
    else
    {
        printf("O ponto %.0f %.0f nao esta dentro da curva\n", p2.x, p2.y);
    }
    return 0;
}
