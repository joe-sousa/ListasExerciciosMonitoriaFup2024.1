#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //Chamando função srand para gerar numeros aleatórios diferentes a cada vez que for chamado.
    srand(time(NULL));
    
    /**
     * 
     * Declaração de variavel password que deve recever o conteudo da senha
     * Declaração de variavel pwdTemp que recebe o valor de password temporariamente
     * Declaração de randNumber que inicializa com zero
     * Declaração do contador count que será o contador do laço de captura dos dígitos.
     * Declaração das variáveis d1, d2, d3 e d4 que receberão os valores dos dígitos
     * 
     */
    int password=0, pwdTemp=0, randomNumber=0, count=0, d1, d2, d3, d4;

    
    /**
     * 
     * Laço que permite a combinação de dígitos um a um através de uma
     * combinação de %10 e *10
     * 
     */

    while(count < 4){
        randomNumber = 1 + rand()% 9;
        printf("Numeros randomicos gerados%d:\n", randomNumber);
        password = password * 10 + randomNumber;
        count++;
    }
    
    //pwdTemp recebe o conteúdo de password
    pwdTemp = password;
    
    /**
     * 
     * Operações que permitem a captura dos dígitos de trás pra frente e elimina o último
     * dígito durante 4 vezes.
     * 
     */

    d4 = pwdTemp % 10;       
    pwdTemp = pwdTemp / 10; 
    d3 = pwdTemp % 10;       
    pwdTemp = pwdTemp / 10; 
    d2 = pwdTemp % 10;       
    pwdTemp = pwdTemp / 10; 
    d1 = pwdTemp; 

    printf(" Digito 1: %d\n Digito 2: %d\n Digito 3: %d\n Digito 4: %d\n", d1, d2, d3, d4);
 
    printf(" Senha %d\n", password);
    printf("\n");

    /**
     * 
     *Opcao é a variavel de escolha do menu do usuário, number_chosen é uma varivavel que
     receberá o valor de um dos dígitos em cada iteração, i e o j são variáveis de controle,
     e os counters são variáveis de contagem que serão utilizados dentro do switch.
     *  
     * */
    
    int opcao, number_chosen=0, j=0, counter1=0, counter2=0, counter3=0, counter4=0, counter5=0;
    
    /**
     * 
     * Inicializando o valor da variavel number_chosen que pode receber o valor de d1, d2, d3 
     * ou d4 para poder manipular dentro do switch.
     * 
     * */

    do{

        if(j == 0)
            number_chosen = d1;
        else if (j == 1)
            number_chosen = d2;
        else if (j == 2)
            number_chosen = d3;
        else if (j == 3)
            number_chosen = d4;

        /**
         * 
         * Menu e leitura do número escolhido pelo usuário que vai de 1 a 5
         * 
         */
        
        printf(" Escolha\n 1)Para 8 ou 9\n 2)Para 0 ou 7\n 3)Para 4 ou 6\n 4)Para 5 ou 2\n 5)Para 1 ou 3\n");
        scanf("%d", &opcao);


        /**
         * 
         * Switch que servirá de base para alimentar os counter1, counter2, counter3, counter4, counter5
         * A cada vez que a escolha do usuário no menu corresponder ao dígito da senha o counter será 
         * alimentado durante as 4 iterações. Lembrando que se a senha possui 4 dígitos, logo, teremos
         * 4 possíveis contadores sendo alimentados ou não, caso a escolha do usuário não corresponda
         * ao dígito da senha.
         * 
         */

        switch (opcao)
        {
        case 1:
            if(number_chosen == 8 || number_chosen == 9){
                counter1++;
            }
            break;
        case 2:
            if(number_chosen == 0 || number_chosen == 7){
                counter2++;
            }
            break;
        case 3:
            if(number_chosen == 4 || number_chosen == 6){
                counter3++;
            }
            break;
        case 4:
            if(number_chosen == 5 || number_chosen == 2){
                counter4++;
            }
            break;
        case 5:
            if(number_chosen == 1 || number_chosen == 3){
                counter5++;
            }
            break;        
        default:
            break;
        }
        j++;
    }while(j < 4);

    //Imprimindo conteúdo das variáveis acumuladas
    printf("Contador 1: %d \nContador 2: %d\nContador 3: %d\nContador 4: %d\nContador 5: %d\n", counter1, counter2, counter3, counter4, counter5);


    /**
     * 
     * Soma dos counters para validar se a soma é igual a 4, caso seja,
     * a senha é válida, caso contrário a senha é invalidada.
     * 
     */
    if(counter1 + counter2 + counter3 + counter4 + counter5 == 4){
        printf("Senha válida!\n");
    }else{
        printf("Senha inválida!\n");
    }
}