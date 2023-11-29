#include <stdio.h>
#include <math.h>

float funcao1(){
    float num = 0, x = 0;
    do {
        printf("digite um numero: ");
        scanf("%f", &num);
        if(num > 0 && num < 1) {
            x = num;
        }
    } while (num <= 0 || num > 1);
    return x;
}

float arctan(float x) {
    float fracao
        //termina ai
}

void funcao3(float numero) {
    printf("\nnumero: %f\n", numero);
}

int main(){
    float numero;
    numero = funcao1();
    funcao3(numero);
    return 0;
}
