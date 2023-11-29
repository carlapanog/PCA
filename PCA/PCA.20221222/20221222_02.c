//20221222_02
#include <stdio.h>
int main() {
	int num, maior, menor, i;
	int aux;

	printf("digite um numero real: ");
	scanf("%d", &aux);
	maior = aux;
	menor = aux;

	for (i = 1; i <= 14; i++) {
		printf("digite um numero real: ");
		scanf("%d", &num);

		if (num < menor) {
			menor = num;
		}

		if (num > maior) {
			maior = num;
		}

	}
	printf("\nmaior : %d e menor: %d\n", maior, menor);
	return 0;
}
