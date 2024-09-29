#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time (NULL));
int n, p=1 , m=0 ,v;
scanf("%d", &n);
while (p<=n)
{
int d1, d2 ;
d1 = rand()%6+1;
//printf("Dado 1 %d ", d1);
d2 = rand()%6+1;
//printf("Dado 2 %d ", d2);
printf("%d − %d\n " , p , d1+d2);
if(d1+d2>m)
{
v = p;
m = d1+d2;
}
p++;
}
printf("O vencedor foi o jogador %d . " , v);
return 0;
}