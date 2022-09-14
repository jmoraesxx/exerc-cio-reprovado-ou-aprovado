//ler o ano do nascimento e o ano atual, calcular e imprimir a idade da pessoas

#include<stdio.h>
#include <locale.h> 

int main()
{
setlocale (LC_ALL,"portuguese");

int ano1, ano2, idade;

printf("digite o ano que você nasceu... ");
scanf("%d",&ano1);

printf("digite o ano atual... ");
scanf("%d",&ano2);

idade = ano2 - ano1;

printf("sua idade é %d", idade);

return 0;

}