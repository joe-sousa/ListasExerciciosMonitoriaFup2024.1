/* Senha */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    /*Obs1 - Substituir todas estas variáveis por apenas uma que receba um valor aleatório entre 0 9999.*/
    
    // int n1,n2,n3,n4;
    // n1 = rand()%10;
    // n2 = rand()%10;
    // n3 = rand()%10;
    // n4 = rand()%10;
    // printf("Senha %d %d %d %d\n", n1, n2, n3, n4);


    /** Obs2 - Quebrar o dígito em 4 dígitos
    
     * 
     * Ex: se tem a senha gerada 2459, quebre os dígitos e guarde-as em
     * quatro variáveis, ex: variavel x1 recebe 9, variavel x2 recebe 5
     * variavel x3 recebe 4, variavel x4 recebe 2 
     * 
     * **/
    

    /**
     * 
     * Obs3 - Aqui deve ser pedido ao inves de uma senha completa,
     * peça que o usuário digite os dígitos um por um para ser validado
     * 
     * */
    
    //int senha1, senha2, senha3, senha4;
    
    // printf("1° Número: ");
    // scanf("%d", &senha1);
    
    
    //Obs4 - Não entendi essa lógica


    // if(senha1 != n1){
    //     printf("Inválido");
    //     return 0;
    // }
    
    // printf("2° Número: ");
    // scanf("%d", &senha2);
    
    // if(senha2 != n2){
    //     printf("Inválido");
    //     return 0;
    // }
    
    // printf("3° Número: ");
    // scanf("%d", &senha3);
    
    // if(senha3 != n3){
    //     printf("Inválido");
    //     return 0;
    // }
    
    // printf("4° Número: ");
    // scanf("%d", &senha4);
    
    // if(senha4 != n4){
    //     printf("Inválido");
    //     return 0;
    // }else{
    //     printf("Senha válida");
    // }

    /**
     * 
     * Obs4 - Faça uma validação comparando os dígitos inseridos uma a um pelo usuário
     * com os valores guardados na observação 2, ou seja, x1, x2, x3, x4, CUIDADO, a forma 
     * como vc vai validar estes dígitos pois vc vai guardá-los do fim pro começo da senha
     * randômica completa que foi gerada.
     * 
     */

    //Obs 5 - Após validar a senha imprima se a senha é valida ou não.

    return 0;
}