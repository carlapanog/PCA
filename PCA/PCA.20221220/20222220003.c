//20222220003 Altere o algoritmo anterior para que ele considere apenas a soma dos ímpares que estejam entre 100 e 200.

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
        if (num > 100 && num < 200) {
            if (num % 2 != 0) {
            soma = soma + num;
        }
        }
        
    } while(i < 50);
    
    printf("\nsoma dos ímpares: %d\n", soma);
    
    return 0;
}
