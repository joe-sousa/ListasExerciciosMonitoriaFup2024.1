#include<stdio.h>

/***
 * 
 * Desenvolva funções que calculem a área de figuras geométricas conforme
 * abaixo: 1-Quadrado, 2-Retangulo, 3-Triângulo 4-Losango, 5-Trapezio
 * 
 */

void quadrado(int x){
    printf("A área do quadrado eh: %d\n", x * x);
}

void retangulo(int base, int altura){
    printf("A área do retangulo eh: %d\n", base * altura);
}

void triangulo(float base, float altura){
    printf("A área do triangulo eh: %.2f\n", (base * altura)/2);
}

void losango(float ladoA, float ladoB){
    printf("A área do triangulo eh: %.2f\n", (ladoA * ladoB)/2);
}

void trapezio(float ladoMaior, float ladoMenor, float altura){
    printf("A área do trapezio eh: %.2f\n", ((ladoMaior + ladoMenor)*altura)/2);
}

int main(){
    quadrado(10);
    retangulo(10, 5);
    triangulo(30,20);
    losango(20,20);
    trapezio(10, 2, 3);
    return 0;
}