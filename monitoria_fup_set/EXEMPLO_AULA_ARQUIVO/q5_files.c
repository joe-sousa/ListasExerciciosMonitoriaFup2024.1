#include<stdio.h>
#include<ctype.h>

int main(){

    int c;
    char entrada[121];
    char saida[121];
    FILE* e;
    FILE* s;
    printf("Digite o nome do arquivo de entrada ");
    scanf("%120s", entrada);
    printf("Digite o nome do arquivo de saida ");
    scanf("%120s", saida);

    e = fopen(entrada, "rt");
    if(e == NULL){
        printf("Noa foi possivel abrir arquivo de entrada.\n");
        return 1;
    }

    s = fopen(saida, "wt");
    if(s == NULL){
        printf("Noa foi possivel abrir arquivo de saida.\n");
        fclose(s);
        return 1;
    }

    while ((c = fgetc(e)) != EOF)
    {
        //instrução de escrita
        fputc(toupper(c),s); //2 parametros: caractere e nome do arquivo
    }

    // Reposiciona o ponteiro do arquivo de entrada no início
    rewind(e);

    char frase[20];
    fgets(frase, 20, e);
    
    printf("Peguei até 10 caracteres: %s", frase);
    
    fclose(e);
    fclose(s);

    return 0;
}