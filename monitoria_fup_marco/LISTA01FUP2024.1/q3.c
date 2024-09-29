#include<stdio.h>

int main(){
    float score1;
    float weight1;
    float score2;
    float weight2;
    float score3;
    float weight3;
    float average;
    printf("Digite a nota 1 e peso 1: ");
    scanf("%f %f", &score1, &weight1);

    printf("Digite a nota 2 e peso 2: ");
    scanf("%f %f", &score2, &weight2);

    printf("Digite a nota 3 e peso 3: ");
    scanf("%f %f", &score3, &weight3);

    average = ((score1 * weight1) + (score2 * weight2) + (score3 * weight3))/(weight1 + weight2 + weight3);
    printf("A media ponderada eh %.2f", average);
    return 0;
}