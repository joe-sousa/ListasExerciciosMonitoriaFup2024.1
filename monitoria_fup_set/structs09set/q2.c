#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Funcionario{
    int id;
    char nome[100];
    float salario;
}funcionario;

void atualizaSalario(funcionario *f){
    printf("Digite o novo salário:\n");
    scanf("%f", &f->salario);
    printf("Id: %d Nome: %s Novo salario: %.2f\n", f->id, f->nome, f->salario);
}

int main(){
    funcionario *f1 = (funcionario *) malloc(sizeof(funcionario));

    if (f1 == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;  // Verificação se a alocação foi bem-sucedida
    }

    printf("Digite o id: ");
    scanf("%d", &f1->id);
    printf("Digite o nome: ");
    scanf(" %[^\n]", f1->nome);
    printf("Digite o salario: ");
    scanf("%f", &f1->salario);

    atualizaSalario(f1);
    printf("Salario na main %.2f\n", f1->salario);
    free(f1);

    return 0;
}