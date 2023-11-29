//20221215_006. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main()
{
    float valorHora = 0;
    float horasMes = 0;
    float salarioMensal = 0;
    
    printf("quanto ganha por hora: ");
    scanf("%f", &valorHora);
    
    printf("horas trabalhadas no mês: ");
    scanf("%f", &horasMes);
    
    salarioMensal = valorHora * horasMes;
    
    printf("\nO total do seu salário no mês é de R$%f.\n", salarioMensal);
    
    return 0;
}
