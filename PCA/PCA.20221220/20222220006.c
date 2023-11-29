#include <stdio.h>
int main() {
    int i, j, resultado;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            resultado = i * j;
            printf("\n%d x %d = %d", i, j, resultado);
        } printf("\n");
    } 
}
