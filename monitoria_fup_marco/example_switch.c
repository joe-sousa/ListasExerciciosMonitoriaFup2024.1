#include<stdio.h>

int main(){
    int opt;
    printf("1)Emprestimo de livro 2)RU 3)Nutricao\n");
    scanf("%d", &opt);

     switch (opt)
     {
     case 1:
        printf("Quero um Emprestimo de livro\n");
        break;
    case 2:
        printf("Quero Solicitar credito de RU\n");
        break;
    case 3:
        printf("Quero Servico Nutricao\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
     }
    return 0;
}