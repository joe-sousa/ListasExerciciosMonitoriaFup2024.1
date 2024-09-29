#include<stdio.h>

/*2) Verifica se é dígito ou caractere baseado em constante*/
void check_character(int character){
    (character >= '0') && (character <= '9')?printf("É um digito\n"):printf("Não é um digito\n");  
}

/* 1) Manipulando caractere como constante */
int main(){
    //char caractere = 'a';
    int caractere = 65;
    printf("%d\n",  caractere);
    printf("%c\n",  caractere);

    check_character(caractere);
    return 0;
}