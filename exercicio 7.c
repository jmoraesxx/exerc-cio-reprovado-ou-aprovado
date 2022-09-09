//ler um numero e imprimir se ele é maior que 20, ighal a 20 ou menor que 20

#include<stdio.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL,"portuguese");
int numero;

printf("Digite um numero: ");
scanf("%d",&numero);

if(numero > 20){
  printf("o numero %d é maior que 20", numero);
}else if(numero < 20){
  printf("o numero %d é menor que 20", numero);
}else if(numero == 20){
  printf("o numero %d é igual a 20", numero);
}

return 0;

}