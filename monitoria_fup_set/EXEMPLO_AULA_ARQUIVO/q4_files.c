#include <stdio.h>
#include <stdlib.h>

/**
 *
 * 1) Abertura de arquivo
 * 2) Leitura de arquivo
 * 3) Escrita de arquivo
 * 4) Fechamento de arquivo
 *
 */

int main()
{
#
    // 1) Abertura de arquivo
    //  Tipos: read, write, append, text, binary
    int c;
    int nLinhas = 0;
    int encontrouCaractere = 0;  // Flag para identificar se leu algum caractere
    FILE *fp;
    fp = fopen("text.txt", "rt");
    if (fp == NULL)
    {
        printf("Erro ao abrir o aquivo.");
        exit(1);
    }
    {
        printf("Arquivo aberto com sucesso\n");
    }

    /**
     *
     * Leitura 1) int fscan(FILE * fp, char formato, ...) -
     * A cada leitura os dados são transferidos para o buffer
     * e o cursor do arquivo avança passando para o próximo
     * dado do arquivo.
     * /

    /**
     *
     * Leitura 2) int fgetc(FILE *fp); - Captura o próximo caractere
     * e retorna o código referente ao caractere avançando para o próximo
    */

    /**
     *
     * Leitura 3) char *fgets(char* s, int n, FILE *fp); Lê do arquivo
     * uma sequência de caracteres até que uma certa quantidade de caracteres passada
     * ou até que '\n' seja encontrada.
     *
     */

    // Contar número de linhas
    while ((c = fgetc(fp)) != EOF)
    {
        //encontrouCaractere = 1;
        if (c != ' ')
        {
            nLinhas++;
        }
    }

    // Verifica se o arquivo tem algum conteúdo e se não terminou com espaço
    // if (encontrouCaractere && c != ' ')
    // {
    //     nLinhas++;  // Conta o último grupo de caracteres, se existir
    // }



    printf("Numero de linhas %d\n", nLinhas);
    fclose(fp);

    return 0;
}