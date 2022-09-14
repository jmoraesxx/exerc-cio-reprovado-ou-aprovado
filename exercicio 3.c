//calculando consumo do veiculo

#include <stdio.h>

int main()
{
	float tempo;
	float velocidade;
	float distancia;
	float consumo;
	
	printf("qual e o tempo em horas: ");
	scanf("%f",&tempo);
	
	printf("qual e a velocidade media: ");
	scanf("%f",&velocidade);
	
	printf("qual a distancia: ");
	scanf("%f",&distancia);
	
	distancia = tempo * velocidade;
	consumo = distancia/12;
	
	printf("o consumo do seu veiculo e de: %2.f ",consumo);
	
}