#include <stdio.h>

int main (){
  printf("-----------------\n");
  printf(" N O T A  L E G A L \n");
  printf("-----------------\n");
  printf("Item                 Qtd       Valor\n");

  char item [31] = "sonic screwdriver";
  int qtde = 1;
  float valor = 130.00f;

 printf("Item                 Qtd       Valor\n");
  
  char Item [31] = "rainbow shirt";
  int Qtde = 1;
  float Valor = 32.00f;

  printf("Item                 Qtd       Valor\n");

  char Item1 [31] = "suspensorio";
  int Qtde1 = 1;
  float Valor1 = 13.00f;
  
  printf("%-14s %03i %11.2f\n", item, qtde, valor);
  item [0] = 'C';
  
  //printf("sonic screwdriver     1        R$ 130.00\n");
  //printf("rainbow shirt         1        R$ 31.00\n");
  //printf("suspensorio           1        R$ 13.00\n");

  //printf("-----------------\n");

  
  return 0;
}
  

