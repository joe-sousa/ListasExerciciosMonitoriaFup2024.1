/**
 * 
 * . Godofredo é uma pessoa bem supersticiosa. Todo dia ele joga uma moeda n vezes, sendo n sua idade.
Se a quantidade de caras for par ele usa meias rosas, mas se for ímpar ele usa meias azuis. Além
disso, se a quantidade de coroas for um número primo ele usa sandálias ao invés de sapatos. Faça um
programa para automatizar esse processo e dizer o que Godofredo deve usar
 * 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand ( time (NULL ) ) ;
    int cara=0, coroa=0;

    int n;
    printf("Digite a idade: ");
    scanf("%d", &n);
    int i = 1;
    while(i<n){
        int x = rand()%2;
        if(x==0){
            cara++;
        }else if(x==1){
            coroa++;
        }
        printf("%d ", x);
        i++;
    }

    if(cara%2==0){
        printf("\nEle usa meias rosas");
    }else{
        printf("\n Ele usa meias azuis");
    }
    //printf("%d ", cara);
    //printf("Qtd coroa %d ", coroa);
    
    int counter=0;
    for(int j=1; j<=coroa; j++){
        if(coroa%j==0){
            counter++;
        }
    }

    if(counter==2){
        printf("\nEle usa Sandalia");
    }else{
        printf("\nEle usa Sapato");
    }
}