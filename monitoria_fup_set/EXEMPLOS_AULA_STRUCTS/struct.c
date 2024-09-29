#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

// Criação de Struct modo 1
struct ponto
{
    float x;
    float y;
    int a;
};

// Criação de Struct com ponteiros
struct triangulo
{
    float base;
    float altura;
    float area;
    int deno;
};

// Usando o typedef para nomear structs
typedef struct circle
{
    float raio;
    float pi;
    int comprimento;
} Circulo;

void printCircleArea(Circulo c1)
{
    printf("A area do circulo eh %.0f e o comprimento eh: %d\n", c1.pi * c1.raio * c1.raio, c1.comprimento);
}

int main()
{
    // // Acessando elementos da struct Ponto
    // struct ponto p1;

    // p1.x = 10;
    // p1.y = 20;
    // p1.a = 5;

    // float soma = p1.x + p1.y + p1.a;

    // printf("Soma: %.0f\n", soma);
    
    // Declarando uma struct do tipo ponteiro e alocação dinâmica
    struct triangulo *t1 = (struct triangulo *)malloc(sizeof(struct triangulo));

    // Acessando variável via ponteiro
    (*t1).altura = 1.75;
    //(*t1).deno = 0;

    // Acessando variável via (->)
    t1->base = 4;
    t1->deno = 2;
    //t1->deno  = 10;
    
    t1->area = (t1->altura * t1->base) / t1->deno;
    printf("Área do triângulo: %.2f\n", t1->area);

    // Acessando struct nomeada através de typedef
    // Circulo circle;
    // circle.pi = PI;//3.14
    // printf("Digite o raio:\n");
    // scanf("%f", &circle.raio);
    // circle.comprimento = 20;
    // printf("Raio do circulo: %.2f\n", circle.raio);
    // printCircleArea(circle);
    //Acessando método e inserindo uma struct como parâmetro.
    

    return 0;
}