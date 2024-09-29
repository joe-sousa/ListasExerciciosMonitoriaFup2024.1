#include <stdio.h>
#include <string.h>

float pontosConhecEspecificos(char opcao[], int acertos[])
{
    float nota = 0;
    float eixos[6];
    int tabela = 0;
    int vaga1[] = {1, 1, 3, 3, 2, 1};
    int vaga2[] = {1, 1, 3, 3, 2, 1};
    int vaga3[] = {1, 1, 2, 5, 1, 3};
    float pesoTabela1[] = {0.2, 0.5, 0.2, 0, 1};
    float pesoTabela2[] = {0.25, 0.5, 0.2, 0.05};
    float pesoTabela3[] = {0.25, 0.55, 0.2, 0};

    if (strcmp(opcao, "B208-A") == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            eixos[i] = vaga1[i];
        }
        tabela = vaga1[5];
    }
    else if (strcmp(opcao, "B209-A") == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            eixos[i] = vaga1[i];
        }
        tabela = vaga1[5];
    }
    else if (strcmp(opcao, "B203-A") == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            eixos[i] = vaga3[i];
        }
        tabela = vaga3[5];
    }

    for (int i = 0; i < 5; i++)
    {
        nota += eixos[i] * acertos[i];
    }

    if (tabela == 1)
    {
        nota *= pesoTabela1[1];
    }
    else if (tabela == 2)
    {
        nota *= pesoTabela2[1];
    }
    else if (tabela == 3)
    {
        nota *= pesoTabela3[1];
    }

    return nota;
}

float pontosConhecGerais(char opcao[], float nota)
{
    float pesoTabela1[] = {0.2, 0.5, 0.2, 0, 1};
    float pesoTabela2[] = {0.25, 0.5, 0.2, 0.05};
    float pesoTabela3[] = {0.25, 0.55, 0.2, 0};

    if (strcmp(opcao, "B208-A") == 0)
    {
        nota = (nota * 100) / 20 * pesoTabela1[0];
    }
    else if (strcmp(opcao, "B209-A") == 0)
    {
        nota = (nota * 100) / 20 * pesoTabela1[0];
    }
    else if (strcmp(opcao, "B203-A") == 0)
    {
        nota = (nota * 100) / 20 * pesoTabela3[0];
    }

    return nota;
}

int main()
{
    char opcao[] = "B209-A";
    int acertos[5];
    int eixo[6];

    float nota1 = pontosConhecGerais(opcao, 16.0);
    printf("Nota 1 %.2f:\n", nota1);

    for (int i = 0; i < 5; i++)
    {
        printf("Digite quantos acertos no eixo %d: ", i + 1);
        scanf("%d", &acertos[i]);
    }

    float nota2 = pontosConhecEspecificos(opcao, acertos);

    printf("Nota 2 %.2f:\n", nota2);
    printf("Nota fase 1: %.2f\n", nota1 + nota2);
    return 0;
}

/*int vaga4[] = {
        1,
        1,
        3,
        3,
        2,
        3,
    };
    int vaga6[] = {1, 1, 5, 1, 2, 3};
    int vaga5[] = {1, 2, 1, 1, 5, 3};
    int vaga6[] = {1, 1, 3, 3, 2, 3};
    int vaga7[] = {2, 2, 1, 1, 4, 1};
    int vaga8[] = {2, 3, 1, 1, 3, 1};
    int vaga9[] = {4, 3, 1, 1, 1, 1};
    int vaga10[] = {1, 1, 3, 3, 2, 2};
    int vaga11[] = {1, 2, 1, 1, 5, 1};*/
