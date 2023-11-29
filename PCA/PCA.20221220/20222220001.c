//0222220001 Faça um programa que leia do teclado cinco números e imprima na tela a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.

#include <stdio.h>

int main()
{
    int num = 0;
    int soma = 0;
    int i = 0;
    
    for (i = 0; i < 5; i+=1) {
        printf("digite um número: ");
        scanf("%d", &num);
        
        soma = soma + num;
    } 
    printf("\nsoma: %d\n", soma);
    
    return 0;
}
