// solicitar emprestimo execicio 9
 
#include <stdlib.h> 
#include <stdio.h> 

int main(void) 

{ 
   float salario, prestacao, porcent;
	 
	printf(" Qual e seu salario: "); 
 	scanf("%f",&salario); 
 	printf(" Qual seria o valor da prestacao: "); 
 	scanf("%f",&prestacao); 
 	
 	porcent = salario * 0.20; 
 	
	 if (prestacao > porcent) 
 	{
	printf("\n Infelismente o emprestimo nao pode ser concedito.n\n"); 
 	}
 	else
	{  
 	printf("\n Parabens o emprestimo foi concedido"); 
 	}
 	
 return 0; 
 
} 
