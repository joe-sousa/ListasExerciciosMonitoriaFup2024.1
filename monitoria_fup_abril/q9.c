#include<stdio.h>
#include<math.h>

/**
 * 
 * Desenvolva um programa que solicite ao usuário um número inteiro positivo
 * e, em seguida, verifique se ele é um número de Armstrong. Um número de
 * Armstrong é um número inteiro tal que a soma dos seus dígitos elevados à
 * potência do número total de dígitos resulta no próprio número. Por exemplo,
 * 153 é um número de Armstrong, pois 1^3 + 5^3 + 3^3 = 153. O programa deve
 * informar se o número dado pelo usuário é um número de Armstrong ou não.
 * 
*/

int main(){
    int x;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &x);
    int temp, arm=0, counter=0;
    int original_x = x; // Salvando o valor original de x

    // Contando o número de dígitos
    while (x != 0) {
        x = x/10;
        counter++;
    }

    // Restaurando o valor original de x
    x = original_x;

    
    if(x > 0){
        while( x!= 0){
            temp = x%10;
            arm += pow(temp, counter);
            x = x/10;
        }
    }
    
    if(arm == original_x){
        printf("Numero de armstrong: %d\n", arm);
    }else{
        printf("Não é Numero de armstrong: %d\n", arm);
    }
    

    return 0;
}
