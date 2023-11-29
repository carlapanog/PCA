#include<stdio.h>

int * func_exc2(int *arr, int valor, int *fim) {
    for (arr ; arr <= fim; arr++) {
        if (*arr == valor) {
            return arr;
        }
    }
    return NULL;
}

int main() {
    int iarray[] = {1, 2, 3, 4, 5, 2, 7, 2, 9, 10};
    int *inteiro;
    int cont = 0;

    inteiro = func_exc2(iarray, 2, &iarray[9]);
    
    if (inteiro != NULL) {
        printf("\nValor %d no endereco %d", *inteiro, inteiro);
    } else {
        printf("\nValor nao achado");
    }
    
    while(inteiro != NULL) {
        cont++;
        inteiro = func_exc2((inteiro + 1), 2, &iarray[9]);
        if (inteiro != NULL) {
            printf("\nValor %d no endereco %d", *inteiro, inteiro);
        } else {
            printf("\nValor nao achado");
        }   
    }
    return 0;
}
