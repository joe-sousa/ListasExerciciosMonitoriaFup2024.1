#include<stdio.h>
#define QTD 5

int main(){
int nota[QTD], counter=0;
    float soma=0, media=0;
    
    for (int i=0; i<QTD; i++)
    {
    printf("Nota do aluno %d:", i+1);
    scanf("%d",&nota[i]);
        soma+=nota[i];
    }

    media = soma/QTD;

    printf("Media: %.2f\n", media);

    for (int i=0; i<QTD; i++)
    {
        if(nota[i] >= media){
            printf("Aluno %d tem nota superior a media\n", i + 1);
            counter++;
        }
            
    }

    printf("Tivemos: %d alunos com nota maior ou igual a media\n", counter);

    return 0;
}