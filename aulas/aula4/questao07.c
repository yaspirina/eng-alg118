#include <stdio.h>
int main(){
  
    float valor_hora_trabalhada = 150.0f;
    int horas_trabalhadas_mes = 200.0f;
    float salario_bruto = valor_hora_trabalhada * horas_trabalhadas_mes;

    const float IR = 0.25f;

    const float INSS = 0.11f;

    float valor_ir = salario_bruto * IR;
    float valor_inss = salario_bruto * INSS;
    float salario_liquido = salario_bruto - valor_ir - valor_inss;

  
    printf("\x1b[35m------------------------\n");
    printf("C O U N T E R  M O N E Y\n");
    printf("------------------------\x1b[0m\n");
    printf("Salario Bruto.....: (R$) %8.2f\n", salario_bruto);
    printf("Valor IR..........: (R$) %8.2f\n", valor_ir);
    printf("Valor INSS........: (R$) %8.2f\n", valor_inss);
    printf("Salario Liquido...: (R$) %8.2f\n", salario_liquido);

    
    return 0;}


