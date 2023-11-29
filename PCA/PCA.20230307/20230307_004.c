/*20230307_004 Crie um programa que contenha um array de inteiros contendo 8 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares*/
#include <stdio.h>

int main() {
    int iarray[8];
    int i;
    for(i = 0; i <  8; i++) {
        printf("Elemento %d do array: ", i + 1);
        scanf("%d", (iarray + i));
    }
    
    for(i = 0; i < 8; i++) {
        printf("\nO dobro do elemento %d eh %d", i + 1, (*(iarray + i) * 2));
    }
    
    for(i = 0; i < 8; i++) {
        if(*(iarray + 1) % 2 == 0) {
            printf("\nElemento %d do array eh %d e seu endereco eh %d", i + 1, *(iarray + i), iarray + i);
        }
    }
}
