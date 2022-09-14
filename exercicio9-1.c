//solicitar a digitacao do valor do salario da pessoas e o valor da prestacao do emprestimo.
//se o valor da prestacao do emprestimo for maior que 20% do salario imprimir cocedido, agora se a prestacoa for
//menor que 20% do salario mostrar a mesnsagem emprestimo cancelado.

#include<stdio.h>
#include <locale.h> 

int main()
{
setlocale (LC_ALL,"portuguese");

int salario, prestacao, emprestimo;

printf("digite o valor do salário... ");
scanf("%d",&salario);

printf("digite o valor da prestação... ");
scanf("%d",&prestacao);

emprestimo = salario*0.2;

if(prestacao > emprestimo){
    printf("emprestimo concedido");
}else if(prestacao < emprestimo){
    printf("emprestimo cancelado");
}


}