//20221215_011.Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: o salário bruto; Quanto pagou ao INSS; quanto pagou ao sindicato; o salário líquido (Salário Líquido = Salário Bruto - Descontos)

#include <stdio.h>

int main()
{
    float valorHora = 0;
    float horasMes = 0;
    float salarioBruto = 0;
    float impostoDeRenda = 0;
    float INSS = 0;
    float sindicato = 0;
    float salarioLiquido = 0;
    
    printf("quanto ganha por hora trabalhada: ");
    scanf("%f", &valorHora);
    
    printf("quantas horas trabalhou no mês: ");
    scanf("%f", &horasMes);
    
    salarioBruto = valorHora * horasMes;
    printf("\nSalário salarioBruto: %f.\n", salarioBruto);
    
    impostoDeRenda = 0.11 * salarioBruto;
    
    INSS = 0.08 * salarioBruto;
    printf("\nPago ao INSS: %f.\n", INSS);
    
    sindicato = 0.05 * salarioBruto;
    printf("\nPago ao sindicato: %f.\n", sindicato);
    
    salarioLiquido = salarioBruto - (impostoDeRenda + INSS + sindicato);
    printf("\nSalário Líquido: %f.\n", salarioLiquido);
    
    return 0;
}
