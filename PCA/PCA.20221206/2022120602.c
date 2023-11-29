#include <stdio.h>
int main () {
    char nome[20], sexo;
    int idade;
    
    printf("nome: ");
    scanf("%s", nome);
    printf("sexo (m/f): ");
    scanf(" %c", &sexo);
    printf("idade: ");
    scanf("%d", &idade);
    if (sexo == 'f') {
        printf("sim, eh mulher");
    } else {
        printf("nao eh mulher");
    }
    return 0;
}
