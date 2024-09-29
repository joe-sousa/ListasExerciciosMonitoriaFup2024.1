#include <stdio.h>
// Definição de constantes referentes ao preço por litro do alcool, gasolina e diesel respectivamente
#define p_a 5.70
#define p_g 6.70
#define p_d 6.90

int main()
{
    /**
     *
     * Definição das variaveis opt_comb que define o tipo de combustivel escolhido
     * form_pgt que define a forma de pagamento escolhida (PIX/ESPECIE OU CARTÃO),
     * qtd que refere-se a quantidade  de combustivel para abastecer, opt_keep_exit
     * que define s vai continuar ou sair do programa e total que recebe o valor
     * total do consumo, ou seja, o preço/litro x quantidade de combustivel
     *
     */
    int opt_comb, form_pgt, qtd, opt_keep_exit;
    float total;

    do
    {
        // Le do usuário o tipo de combustivel escolhido
        printf("1) ALCOOL 2) GASOLINA 3) DIESEL\n");
        scanf("%d", &opt_comb);

        // Le do usuário a forma de pagamento
        printf("1) PIX/ESPÉCIE 2) CARTÃO\n");
        scanf("%d", &form_pgt);

        // Le do usuário a quantidade de combustivel para abastecer
        printf("QUANTIDADE\n");
        scanf("%d", &qtd);

        /**
         *
         * Define instruções caso a opção álcool seja escolhida.
         *
         */
        if (opt_comb == 1)
        {
            // Calcula o total = quantidade de combustivel x preço do álcool/litro
            total = qtd * p_a;
            /**
             *
             * Se a forma de pagamento for pix/especie desconta 5%, caso contrário
             * aumenta em 10% o valor do consumo.
             *
             */
            if (form_pgt == 1)
            {
                total -= total * 0.05;
            }
            else
            {
                total += total * 0.10;
            }
        }
        /**
         *
         * Define instruções caso a opção gasolina seja escolhida.
         *
         */
        else if (opt_comb == 2)
        {
            // Calcula o total = quantidade de combustivel x preço do gasolina/litro
            total = qtd * p_g;
            /**
             *
             * Se a forma de pagamento for pix/especie desconta 5%, caso contrário
             * aumenta em 10% o valor do consumo.
             *
             */
            if (form_pgt == 1)
            {
                total -= total * 0.05;
            }
            else
            {
                total += total * 0.10;
            }
        }
        /**
         *
         * Define instruções caso a opção diesel seja escolhida.
         *
         */
        else if (opt_comb == 3)
        {
            // Calcula o total = quantidade de combustivel x preço do diesel/litro
            total = qtd * p_d;

            /**
             *
             * Se a forma de pagamento for pix/especie desconta 5%, caso contrário
             * aumenta em 10% o valor do consumo.
             *
             */
            if (form_pgt == 1)
            {
                total -= total * 0.05;
            }
            else
            {
                total += total * 0.10;
            }
        }

        // Cria variáveis para receber o valor do preço por litro do álcool, gasolina e diesel.
        float p_alc = p_a, p_gas = p_g, p_die = p_d;

        // Imprime o relatório sintético conforme pede no enunciado, obedecendo o tipo de combustível.
        if (opt_comb == 1)
        {
            printf("Combustivel Alcool - Qtd %d Preço/Litro %.2f Total %.2f\n", qtd, p_alc, total);
        }
        else if (opt_comb == 2)
        {
            printf("Combustivel Gasolina - Qtd %d Preço/Litro %.2f Total %.2f\n", qtd, p_gas, total);
        }
        else if (opt_comb == 3)
        {
            printf("Combustivel Diesel - Qtd %d Preço/Litro %.2f Total %.2f\n", qtd, p_die, total);
        }

        // Instrução que define se o usuário deseja fazer outra operação, ou deseja sair do programa.
        printf("4)CONTINUAR 0)SAIR \n");
        scanf("%d", &opt_keep_exit);
    } while (opt_keep_exit != 0);
}