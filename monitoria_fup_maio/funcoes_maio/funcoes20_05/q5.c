#include<stdio.h>
#include<math.h>

void potencia(float x, float y){
    float res = pow(x, y);
    printf("%.2f", res);
}

int main(){
    float x, y;
    printf("Digite o valor da base");
    scanf("%f", &x);
    printf("Digite o valor do expoente");
    scanf("%f", &y);
    potencia(x,y);
    return 0;
}