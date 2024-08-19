// Calcular o valor da prestacao
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float valor, taxa, prestacao;
    int parcelas;
    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o numero de parcelas: ");
    scanf("%d", &parcelas);
    prestacao = valor * (1 + taxa / 100) / parcelas;
    printf("O valor da prestacao e: %.2f\n", prestacao);

    return 0;
}