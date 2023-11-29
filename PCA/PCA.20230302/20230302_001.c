#include <stdio.h>

int imprimirVet (float *inicio, float *fim) {
    float *pvet;
    
    for (pvet = inicio; pvet <= fim; pvet++) {
        printf("%f \n", *pvet);
    }
}

int main () {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    imprimirVet (&vet[0], &vet[4]);
    
    return 0;
}
