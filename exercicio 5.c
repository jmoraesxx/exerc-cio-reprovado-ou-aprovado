//  2 numero interiros e somalos se a soma for maior que 10 mostrar na tela

int main()
{
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