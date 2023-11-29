//20221215_002 Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

int main()
{
  float nota1 = 0;
  float nota2 = 0;
  float nota3 = 0;
  float nota4 = 0;
  float media = 0;
  
  printf("Nota bimestre 1: ");
  scanf("%f", &nota1);
  
  printf("Nota bimestre 2: ");
  scanf("%f", &nota2);
  
  printf("Nota bimestre 3: ");
  scanf("%f", &nota3);
  
  printf("Nota bimestre 4: ");
  scanf("%f", &nota4);
  
  media = (nota1 + nota2 + nota3 + nota4) / 4;
   printf("\nMédia: %f\n", media);

   return 0;
  }
