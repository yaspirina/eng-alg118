#include <stdio.h>

int main(){
  int numero1;
  int numero2;
  int numero3;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  printf("Entre com o terceiro numero: ");
  deu_certo = scanf("%i", &numero3);

  int soma = numero1 + numero2 + numero3;
  printf("A soma é %i\n", soma);
  int media = soma / 3;
  printf("A media é %i\n", media);

  
  



  return 0;
}