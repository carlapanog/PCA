//20222220002 Escreva um algoritmo que lê 50 números inteiros e em seguida mostra a soma de todos os ímpares lidos.
#include <stdio.h>

int main()
{
    int num = 0;
    int soma = 0;
    int i = 0;
    
    do {
        i = i + 1;
        printf("digite um número: ");
        scanf("%d", &num);
        if (num % 2 != 0) {
            soma = soma + num;
        }
        
    } while(i < 50);
    
    printf("\nsoma dos ímpares: %d\n", soma);
    
    return 0;
}
