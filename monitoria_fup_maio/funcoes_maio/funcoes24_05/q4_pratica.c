#include<stdio.h>

float consumo(float distancia, float litros){
    return distancia/litros;
}

float qtd_litros(float distancia, float consumo){
    return distancia/consumo;
}

void custo_viagem(float valor_litro, float qtd_litro){
    float valor_total = valor_litro * qtd_litro;
    printf("A viagem vai custar aproximadamente: %.2f\n", valor_total);
}

int main(){
    float distance, liters, liters_price;
    printf("Digite a distância: ");
    scanf("%f", &distance);
    printf("Digite quantos litros: ");
    scanf("%f", &liters);
    float consumption = consumo(distance, liters);
    float liters_quantity = qtd_litros(distance, consumption);
    printf("Consumo do veiculo e de %.2f e necessita de %.2f litros de combustivel\n", consumption, liters_quantity);
    
    printf("Digite o preço do combustivel por litro: ");
    scanf("%f", &liters_price);
    custo_viagem(liters_price, liters_quantity);
    return 0;
}