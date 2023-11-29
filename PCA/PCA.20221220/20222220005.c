//20222220005 Altere o programa anterior para que ele não permita a entrada de valores negativos.
#include <stdio.h>

int main()
{
    int num = 0;
    int num2 = 0;
    int i = 0;
    int maior = 0;
    int menor = 0;
    
    do {
        printf("digite um número: ");
    scanf("%d", &num);
    } while(num < 0);
    
    
    do {
        printf("digite um número: ");
        scanf("%d", &num2);
            if(num2 >= 0) {
                if (num2 >= num) {
                    maior = num2;}
                if (num2 <= num ) {
                    menor = num2;}}
    } while(num2 < 0);
    
    do {
        do {
            i = i + 1;
        printf("digite um número: ");
        scanf("%d", &num2);
        if (num2 >= 0) {
            if (num2 >= num && num2 >= maior) {
                maior = num2;}
            if (num2 <= num && num2 <= menor) {
                menor = num2;}}
        } while(num2 < 0 && menor > 0 && maior > 0);
        
    } while(i < 3);
    
    printf("\nmenor número: %d\n", menor);
    printf("\nmaior número: %d\n", maior);
    return 0;
}
