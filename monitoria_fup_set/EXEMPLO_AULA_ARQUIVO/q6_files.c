#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * - Gravação em arquivos
 *
 * - fputc: grava um caracter por vez no stream do arquivo fputc(<var>,<*stream>);
 *   -Ex: fputc('a',arquivo);
 *
 * - fprintf: semelhante ao printf, grava dados formatados no arquivo de
 *   acordo com o tipo de cada dado gravado
 *   - fprintf(<*stream>, <formatação>, valor1, …);
 *   - Ex: fprintf(arquivo, “O número %d é lido %s”, 2, “dois”);
 * - fwrite: grava um bloco de dados sequenciado (array, struct, ...),
 *   normalmente em formato binário;
 *   - fwrite(<*p>, <tam_bytes>, <qtd>, <*stream>);
 *   - Ex:
 * */

typedef struct Estudante
{
    char nome[50];
    int idade;
    float nota;
} estudante;

void imprimir(estudante *e)
{
    printf("Nome %s, Idade %d, Nota: %.2f\n", e->nome, e->idade, e->nota);
}

void imprimir2(estudante est)
{
    printf("Nome %s, Idade %d, Nota: %.2f\n", est.nome, est.idade, est.nota);
}

int main()
{
    estudante *e1 = (estudante *)malloc(sizeof(estudante));
    strcpy(e1->nome, "Jose da Silva");
    e1->idade = 28;
    e1->nota = 5;

    estudante *e2 = (estudante *)malloc(sizeof(estudante));
    strcpy(e2->nome, "Maria da Silva");
    e2->idade = 25;
    e2->nota = 7;

    estudante e3;
    strcpy(e3.nome, "Maria da Silva");
    e3.idade = 25;
    e3.nota = 7;

    imprimir(e1);
    imprimir(e2);
    imprimir2(e3);

    FILE *arquivo;
    arquivo = fopen("texto_w.txt", "wr");
    if (arquivo != NULL)
    {
        // Escrevendo os valores da estrutura em formato de texto
        fprintf(arquivo, "Nome estudante 1: %s\n Idade estudante 1: %d\n Nota estudante 1: %.2f\n Nome estudante 2: %s\n Idade estudante 2: %d\n Nota estudante 2: %.2f\n", e1->nome, e1->idade, e1->nota, e2->nome, e2->idade, e2->nota);

        // Fechando o arquivo
        fclose(arquivo);
    }
    else
    {
        printf("Erro ao abrir o arquivo\n");
    }

    return 0;
}