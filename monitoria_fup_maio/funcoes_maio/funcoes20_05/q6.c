#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int num1 = 0, num2 = 0, *ptrNum1 = &num1, *ptrNum2 = &num2, troca = 0;
    printf("(A) Digite um inteiro > ");
    scanf("%d", &num1);
    printf("(B) Digite um inteiro > ");
    scanf("%d", &num2);
    printf("\nValores antes da troca: (A) = %d, (B) = %d\n", num1, num2);
    troca_valores(ptrNum1, ptrNum2);
    printf("\nValores após a troca: (A) = %d, (B) = %d\n", num1, num2);

}

void troca_valores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}