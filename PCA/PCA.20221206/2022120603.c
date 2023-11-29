#include <stdio.h>
int main () {
    float salario, novoSalario = 0;
    printf("salario: ");
    scanf("%f", &salario);
    novoSalario = (1.1) * salario;
    printf("\nsalario pos-ajuste: R$%.2f", novoSalario);
    return 0;
}
