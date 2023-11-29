//20221222_003
#include <stdio.h>
int main() {
	int num = 0; int somaPares = 0; int somaImpares = 0;
	do {
		num = 0;
		printf("digite um numero inteiro positivo: ");
		scanf("%d", &num);
		if (num <= 1000) {
		    if (num % 2 == 1) {
			somaImpares += num;
		}
		if (num % 2 == 0) {
			somaPares += num;
		}}
	} while (num <= 1000);
	printf("\nsoma dos pares: %d\n", somaPares);
	printf("\nsoma dos impares: %d\n", somaImpares);
	return 0;
}
