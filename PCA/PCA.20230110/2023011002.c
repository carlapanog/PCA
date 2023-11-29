#include <stdio.h>

int quantasVezes(int n, int d){
    int contador = 0;
    while (n>0) {
        if (n%10 == d){
            contador ++;
        }
        n = n / 10;
    }
    return contador;
}
 
void funcao2(){
    int a;
    int b;
    int d;
    int aux = 0;
    printf("digite um numero: ");
    scanf ("%d", &a);
    printf("digite um numero: ");
    scanf ("%d", &b);
    if (a > b){
        aux = a;
    } else{
        aux = b;
    }
    
    d = aux%10;
    int permutacao = 0;
    while (aux > 0){
        if (quantasVezes(a, d) != quantasVezes(b, d)) {
            permutacao++;
        }
        aux = aux/10;
        d = aux%10;
    }

    if (permutacao > 0){
        printf("nao eh permutacao");
    }

    else{
        printf("eh permutacao\n");
    }
}

int main () {
    funcao2();
    return 0;
}
