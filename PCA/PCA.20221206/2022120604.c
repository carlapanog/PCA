#include <stdio.h>
int main () {
    float conta, garcom = 0;
    printf("valor da conta: ");
    scanf("%f", &conta);
    garcom = (0.1) * conta;
    printf("\npocentagem do garcom: R$%.2f", garcom);
    return 0;
}
