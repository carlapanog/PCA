//20221215_001 Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int soma = 0;
  
  printf("Digite um número: ");
  scanf("%d", &num1);
  
  printf("Digite outro número: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  printf("\nO resultado da soma entre %d e %d é %d\n", num1, num2, soma);
  
  return 0;
  }
