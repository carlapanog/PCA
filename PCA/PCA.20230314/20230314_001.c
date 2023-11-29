#include <stdio.h>
#include <stdlib.h>

float mediaDesvio(float *pvet, int quantElementosV, float *media, float *desvio){
    float soma = 0;
    for (int i = 0; i < quantElementosV; i++){
        soma += *pvet[i];
    }
    media = soma / quantElementosV;
}

int main(){
    float media, desvio;
    int quantAlunos;
    
    printf("quantidade de alunos na turma: ");
    scanf("%d", &quantAlunos);
    
    float *v;
    v = (float *) malloc (quantAlunos * sizeof(float));
    
    for (int i = 0; i < quantAlunos; i++){
        scanf("%f", &v[i]);
    }
  
 //soh pra checar:  
    for (int j = 0; j < quantAlunos; j++){
        printf("\n%f", v[j]);
    }
    
    return 0;
}
