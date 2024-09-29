#include <stdio.h>

typedef struct payment
{
    float value;
    float discount;
} Bill;

void calcDiscount(Bill *bill)
{
    bill->discount = 0;
    printf("Digite o valor da conta: ");
    scanf("%f", &bill->value);

    int choose;
    printf("Tem desconto? 1)Sim 2)Não: ");
    scanf("%d", &choose);

    if (choose == 1)
    {
        printf("Digite o valor do desconto em %%, ex: 10%%: ");
        scanf("%f", &bill->discount);
        bill->value = bill->value - (bill->value * (bill->discount/100));
    }
    printf("Valor final da conta foi: %.2f\n", bill->value);
}

int main()
{
    Bill bill1;
    calcDiscount(&bill1);
    return 0;
}