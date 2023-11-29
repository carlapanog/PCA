#include <stdio.h>
int main() {
    float nota1, nota2, nota3;
    float maiorNota1 = 0, maiorNota2 = 0, maiorNota3 = 0;
    float menorNota1 = 11, menorNota2 = 11, menorNota3 = 11;
    float maiorMedia = 0, menorMedia = 11, media = 0;
    char continuar;
    
    do {
        printf("nota1: ");
        scanf("%f", &nota1);
        printf("nota2: ");
        scanf("%f", &nota2);
        printf("nota3: ");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        if (nota1 < menorNota1) {
            menorNota1 = nota1;
        }
        if (nota2 < menorNota2) {
            menorNota2 = nota2;
        }
        if (nota3 < menorNota3) {
            menorNota3 = nota3;
        }
        
        if (nota1 > maiorNota1) {
            maiorNota1 = nota1;
        }
        if (nota2 > maiorNota2) {
            maiorNota2 = nota2;
        }
        if (nota3 > maiorNota3) {
            maiorNota3 = nota3;
        }
        
        if (media < menorMedia) {
            menorMedia = media;
        }
        if (media > maiorMedia) {
            maiorMedia = media;
        }
        printf("deseja continuar? (s/n): ");
        scanf(" %c", &continuar);
        
    } while(continuar == 's');
    printf("\nmaior nota do primeiro exercicio: %.2f\n", maiorNota1);
    printf("\nmenor nota do primeiro exercicio: %.2f\n", menorNota1);
    printf("\nmaior nota do segundo exercicio: %.2f\n", maiorNota2);
    printf("\nmenor nota do segundo exercicio: %.2f\n", menorNota2);
    printf("\nmaior nota do terceiro exercicio: %.2f\n", maiorNota3);
    printf("\nmenor nota do terceiro exercicio: %.2f\n", menorNota3);
    
    printf("\nmaior media: %.2f\n", maiorMedia);
    printf("\nmenor media: %.2f\n", menorMedia);
    
}
