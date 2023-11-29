#include <studio.h>
int main() {
    float nota, maiorNota, menorNota;
    float media, aux, nota1;
    int contador = 1;
    
    printf("digite a nota do aluno: ");
    scanf("%f", &nota1);
    if (nota1 >= 1) {
        maiorNota = nota1;
        menorNota = nota1;
        aux = nota1;
        
        do {
            nota = 0;
            printf("digite a nota do aluno");
            scanf("%f", &nota);
            if (nota >= 0) {
                if (nota < menorNota) {
                    menorNota = nota;
                }
                if (nota > maiorNota) {
                    maiorNota = nota;
                }
                aux += nota;
                contador ++;
            }
        } while (nota >= 0);
    }
    media = aux / contador;
    printf("\nMaior nota: %f\n", maiorNota);
    printf("\nMenor nota: %f\n", menorNota);
    printf("\nMedia da turma: %f\n", media);
    return 0;
}
