#include <stdio.h>
#include <stdlib.h>
#define MAX 3

// Define a estrutura aluno e seus atributos.
struct aluno
{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
};

// Renomeia aluno para Alunos
typedef struct aluno Aluno;

// Inicializa todos elementos da estrutura com NULL
void begin(int n, Aluno **tab)
{
    int i;
    for (i = 0; i < n; i++)
    {
        tab[i] = NULL;
    }
}

void preenche(int n, Aluno **tab, int i)
{
    // Invalida o cadastro de novo aluno caso seja jogado um índice fora do esperado.
    if (i < 0 || i >= n)
    {
        printf("Não temos espaço suficiente para alocar mais alunos\n");
        exit(1);
    }

    if (tab[i] == NULL)
    {
        tab[i] = (Aluno *)malloc(sizeof(Aluno));
    }

    printf("Entre com a matricula: ");
    scanf("%d", &tab[i]->mat);
    printf("Entre com o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com o endereço: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Entre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}

void findStudent(int n, Aluno **tab, int i)
{
    if (i < 0 || i >= n)
    {
        printf("Não temos espaço suficiente para alocar mais alunos\n");
        exit(1);
    }

    if (tab[i] != NULL)
    {
        printf("Matricula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Fone: %s\n", tab[i]->tel);
    }
}

void printStudents(int n, Aluno **tab)
{
    int i;
    for (i = 0; i < n; i++)
    {
        findStudent(n, tab, i);
    }
}

int main()
{
    Aluno *tab[MAX] = {NULL};
    preenche(MAX, tab, 0);
    preenche(MAX, tab, 1);
    printStudents(MAX, tab);

    return 0;
}