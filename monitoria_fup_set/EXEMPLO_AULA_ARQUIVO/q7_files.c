#include <stdio.h>

int main()
{
    char resp;
    printf("Você tem certeza que quer apagar o arquivo?\n");
    scanf("%c", &resp);
    if (resp = 's')
    {
        if (remove("teste2") == 0)
            printf("Arquivo deletado com sucesso\n");
        else
            printf("O arquivo não foi deletado\n");
    }
    return 0;
}