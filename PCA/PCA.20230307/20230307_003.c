#include<stdio.h>
#include<stdlib.h>
//modificando variaveis atraves de ponteiros
int main() {
    int a = 1;
    float b = 2.1;
    char c[] = "m";
    
    int *ponteiroInt;
    float *ponteiroReal;
    char *ponteiroChar;
    
    ponteiroInt = &a;
    ponteiroReal = &b;
    ponteiroChar = c;
    
    printf("inteiro antes da mudança: %d\n", a);
    printf("real antes da mudança: %f\n", b);
    printf("char antes da mudança: %s\n", c);
    
    *ponteiroInt = 99;
    *ponteiroReal = 8.8;
    *ponteiroChar = 'p';
    
    printf("\ninteiro depois da mudança: %d\n", a);
    printf("real depois da mudança: %f\n", b);
    printf("char depois da mudança: %s\n", c);
    
    return 0;
}
