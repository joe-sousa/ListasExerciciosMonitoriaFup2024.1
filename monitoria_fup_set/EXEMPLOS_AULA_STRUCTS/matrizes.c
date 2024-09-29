#include <stdio.h>
#include<stdlib.h>

int main()
{
    //Matriz estática
    // printf("Matriz 1\n");
    // printf("\n");
    // float m[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         //printf("M %d %d\t", i, j);
    //         printf("%.0f\t", m[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //Matriz sem declarar tamanho de linha
    // printf("\n");
    // printf("Matriz 2\n");
    // printf("\n");
    // float m1[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%.0f\t", m1[i][j]);
    //     }
    //     printf("\n");
    // }

   //Matriz dinâmica
    int i;
    int j,k;
    printf("Digite a quantidade de linha:");
    scanf("%d", &j);

    printf("Digite a quantidade de coluna:");
    scanf("%d", &k);

    float **mat;
    mat = (float**) malloc(j*sizeof(float*));
    for(i=0; i<j; i++){
        mat[i] = (float*) malloc(k*sizeof(float));
    }

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < j; i++) {
        for (int l = 0; l < k; l++) {
            printf("mat[%d][%d]: ", i, l);
            scanf("%f", &mat[i][l]); 
        }
    }

     // Exibe a matriz
    printf("Matriz digitada:\n");
    for (i = 0; i < j; i++) {
        for (int l = 0; l < k; l++) {
            printf("%.2f\t", mat[i][l]);
        }
        printf("\n");
    }

   return 0;
}