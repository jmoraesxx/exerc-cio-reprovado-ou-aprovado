//Programa Media Aprovado

#include <stdio.h>
#include <stdlib.h>

	int main ()
	{
		//Declaracao de variaveis
		
		float nota1;
		float nota2;
		float media;
		
		//Entrada de variaveis
		
		printf ("Digite nota 1: ");
		scanf ("%f", & nota1);
		
		printf ("Digite nota 2: ");
		scanf ("%f", & nota2);
		
		//processamento
		
		media = (nota1 + nota2)/2;
		
		//criticar para saber aluno aprovado
		// ou se reprovado
		
		if (media >= 5){
		printf ("Aprovado!!!");
		}else{
			printf ("Reprovado!!!");
		}
		return 0;
	}