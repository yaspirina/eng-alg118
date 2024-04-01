#include <stdio.h>

int main(){
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int quociente = numero1 / numero2;
  int resto = numero1 % numero2;

  printf("O quociente é %i\n", quociente);
  printf("O resto é %i\n", resto);

  

  




  return 0;
}