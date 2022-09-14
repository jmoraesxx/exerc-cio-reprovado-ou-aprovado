//2 numeros inteiros, se a soma for maior que 10 resultado na tela



int main(void)

{

int numero1;
int numero2;
int soma;

printf("Digite um numero1: ");
scanf("%d",&numero1);

printf("Digite um numero2: ");
scanf("%d",&numero2);

soma = numero1 + numero2;

if(soma > 10){
  printf("seu valor e de: %d", soma);
}

return 0;

}