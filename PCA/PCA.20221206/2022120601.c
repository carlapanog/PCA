#include <stdio.h>
int main () {
    float base, altura, area = 0;
    printf("base: ");
    scanf("%f", &base);
    printf("altura: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("\narea do triangulo: %2.f", area);
    return 0;
}
