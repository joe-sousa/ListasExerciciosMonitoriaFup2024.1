#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    int count = 0;

    for(int i = 1; i <= 25; i++) {
        int x = rand() % 12 * 2 + 1; 

        // Checa se o número já foi escolhido antes
        int repetido = 0;
        if (x == num1 || x == num2 || x == num3 || x == num4 || x == num5) {
            repetido = 1;
        }

        // Se não foi escolhido antes, adicionar o valor à variável correspondente
        if (!repetido) {
            count++;
            if (count == 1) {
                num1 = x;
            } else if (count == 2) {
                num2 = x;
            } else if (count == 3) {
                num3 = x;
            } else if (count == 4) {
                num4 = x;
            } else if (count == 5) {
                num5 = x;
                break;
            }
        }
    }

    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("num4: %d\n", num4);
    printf("num5: %d\n", num5);

    return 0;
}