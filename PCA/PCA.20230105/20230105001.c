//
#include <stdio.h>

int scanIntIntervalo(int n) {
    printf("digite um número: ");
    scanf("%d", &n);
    if(n < 0 || n > 1000) {
        return n;
    }
}

float percentual(int n1, int n2) {
    float menor, maior;
    float porcentagem;
    
    if(n1 > n2) {
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }
    
    porcentagem = (menor / maior ) * 100;
    
    if(porcentagem < 0) {
        porcentagem = porcentagem * (-1);
    }
    
    return porcentagem;
}

int absdif(int n1, int n2) {
    int menor, maior;
    int diferenca;
    
    if(n1 > n2) {
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }
    
    diferenca = maior - menor;
    if(diferenca < 0) {
        diferenca = diferenca * (-1);
    }
    
    return diferenca;
}

int main()
{
    int n1, n2;
    n1 = scanIntIntervalo(n1);
    n2 = scanIntIntervalo(n2);
    float porcentagem;
    porcentagem = percentual(n1, n2);
    printf("percentual: %.2f%%", porcentagem);
    printf("\n");
    int diferenca;
    diferenca = absdif(n1, n2);
    printf("módulo da diferença: %d", diferenca);

    return 0;
}
