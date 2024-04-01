#include <stdio.h>

int main(){
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  //
  int maior_que_zero_menor_que_dez = numero1 > 0 && numero1 < 10;
  printf("O numero1 é maior que zero e menor que dez? %i\n", maior_que_zero_menor_que_dez);

  
  int maior_que_zero_menor_que_dez = numero1 > 0 && numero1 < 10;
  printf("O numero2 é maior que zero e menor que dez? %i\n", maior_que_zero_menor_que_dez);


// 0 < numero1, numero1 > 10
  int menor_que_zero_maior_que_dez = numero1 < 0 || numero1 > 10;
  printf("O numero1 é menor que zero ou maior que dez? %i\n", meior_que_zero_maior_que_dez);

  // negacao 
  int nao_eh_maior_que_zero = !(numero1 > 0);
  printf("O numero1 é maior que zero? %i\n", nao_eh_maior_que_zero);

    

  







  return 0;
}