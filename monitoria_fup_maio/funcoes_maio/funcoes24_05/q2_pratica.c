#include<stdio.h>

#define status1 0
#define status2 1

int checkSalario(double salario){
    
    return ((salario > 0) && (salario <= 1500))?status2:status1;
}

int checkHectares(double hectare){
    return ((hectare >= 0.6) && (hectare <=5))?status2:status1;
}

int checkCultura(int cultura){
    
    int tipoPlanta = cultura;
    switch (cultura)
    {
    case 1:
        printf("Feijao escolhido.\n");
        break;
    case 2:
        printf("Milho escolhido.\n");
        break;
    case 3:
        printf("Arroz escolhido.\n");
        break;
    case 4:
        printf("Algodao escolhido.\n");
        break;
    case 5:
        printf("Mandioca escolhida.\n");
        break;
    case 6:
        printf("Outros escolhido.\n");
        break;
    default:
        break;
    }
    return tipoPlanta;
}

int main(){
    int planta;
    double salario, hectare;
    printf("Digite a cultura: Feijão - 1, Milho - 2, Arroz - 3, Algodão - 4, Mandioca - 5, Outros - 6\n");
    scanf("%d", &planta);
    //checkCultura(planta);
    int cultura = checkCultura(planta);
    
    printf("Digite o salario:\n");
    scanf("%lf", &salario);
    int salary = checkSalario(salario);
    
    printf("Digite o hectare plantado:\n");
    scanf("%lf", &hectare);
    int hectar = checkHectares(hectare);
    
    if(!(cultura >=1 && cultura <=5)){
        printf("Não atende aos requisitos do PRONAF - Cultura nao esta entre 1 e 6\n");
    }
    else if(salary != 1){
        printf("Não atende aos requisitos do PRONAF - Salario maior que 1500 ou negativo\n");
    }else if(hectar != 1){  
        printf("Não atende aos requisitos do PRONAF - Hectar nao esta entre 0.6 e 5\n");
    }else{
        printf("Atende aos requisitos do PRONAF\n");
    }
    return 0;
}