#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/***
 * 
 * Você foi solicitado a desenvolver um programa em C para simular o
lançamento de um dado de 6 lados 100 vezes. Após os 100 lançamentos, o
programa deverá exibir a porcentagem de vezes que cada lado do dado foi
sorteado. Para calcular a porcentagem de vezes que um lado do dado foi
sorteado, você pode dividir o número de ocorrências desse lado pelo total de
lançamentos (100) e multiplicar por 100 para obter a porcentagem.
 * 
*/

int main(){
    srand(time(NULL));
    int face1=0, face2=0,face3=0,face4=0, face5=0, face6=0;
    for(int i=1; i<=25; i++){
        int x = 1 + rand() % 6;

        printf("%d ", x);
        switch (x)
        {
        case 1:
            face1++;
            break;
        case 2:
            face2++;
            break;
        case 3:
            face3++;
            break;
        case 4:
            face4++;
            break;
        case 5:
            face5++;
            break;
        case 6:
            face6++;
            break;
        default:
            break;
        }
    }
    printf("\nFace 1 %d vezes, com %.2f %% de percentual ", face1, ((float)face1 * 100) / 25);
    printf("\nFace 2 %d vezes, com %.2f %% de percentual ", face2, ((float)face2 * 100) / 25);
    printf("\nFace 3 %d vezes, com %.2f %% de percentual ", face3, ((float)face3 * 100) / 25);
    printf("\nFace 4 %d vezes, com %.2f %% de percentual ", face4, ((float)face4 * 100) / 25);
    printf("\nFace 5 %d vezes, com %.2f %% de percentual ", face5, ((float)face5 * 100) / 25);
    printf("\nFace 6 %d vezes, com %.2f %% de percentual ", face6, ((float)face6 * 100) / 25);
    return 0;
}