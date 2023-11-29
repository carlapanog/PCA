//20222220004 Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor valor fornecido

#include <stdio.h>

int main()
{
    int num = 0;
    int num2 = 0;
    int i = 0;
    int maior = 0;
    int menor = 0;
    
    printf("digite um número: ");
    scanf("%d", &num);
    
    printf("digite um número: ");
    scanf("%d", &num2);
        if (num2 >= num) {
            maior = num2;}
        if (num2 <= num ) {
            menor = num2;}
            
    do {
        i = i + 1;
        printf("digite um número: ");
        scanf("%d", &num2);
        if (num2 >= num && num2 >= maior) {
            maior = num2;}
        if (num2 <= num && num2 <= menor) {
            menor = num2;}
        
    } while(i < 3);
    
    printf("\nmenor número: %d\n", menor);
    printf("\nmaior número: %d\n", maior);
    return 0;
}
