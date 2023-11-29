//2023011001
#include <stdio.h>

int quantasVezes(int n, int d) {
    int contador = 0;
    while (n != 0) {
        if (n % 10 == d) {
            contador ++;
        } 
        n = n / 10;
    }
    return contador;
}

int main () 
{
    int num, dig;
    printf("digite um numero: ");
    scanf("%d", &num);
    printf("digite um numero: ");
    scanf("%d", &dig);
    if (dig > 0 && dig < 9) {
        int contador = quantasVezes(num, dig);
        printf("o algarismo %d aparece %d vezes em %d.", dig, contador, num);
    } else {
        printf("numero nao valido.");
    }
    return 0;
}
