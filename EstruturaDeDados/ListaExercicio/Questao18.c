/*

Função: calcula e exibe o valor do desconto aplicado no combustivel e o valor a ser pago pelo cliente
Autor: Antônio lucas Dantas de Abrantes;
Data: 31/03/2023;
Observações: 

*/
#include <stdio.h>

int main() {
    float valor_veiculo, valor_desconto, valor_pago;
    float total_desconto = 0, total_pago = 0;
    char tipo_combustivel;

    do {
        printf("Digite o valor do veiculo (0 para encerrar): ");
        scanf("%f", &valor_veiculo);

        if (valor_veiculo > 0) {
            printf("Escolha o tipo de combustivel (1 - alcool, 2 - gasolina, 2 - diesel): ");
            scanf(" %c", &tipo_combustivel);

            switch (tipo_combustivel) {
                case '1':
                    valor_desconto = valor_veiculo * 0.28;
                    break;
                case '2':
                    valor_desconto = valor_veiculo * 0.22;
                    break;
                case '3':
                    valor_desconto = valor_veiculo * 0.12;
                    break;
                default:
                    printf("Opcao invalida.\n");
                    continue;
            }

            valor_pago = valor_veiculo - valor_desconto;
            total_desconto += valor_desconto;
            total_pago += valor_pago;

            printf("Valor do desconto: R$%.2f\n", valor_desconto);
            printf("Valor a ser pago: R$%.2f\n", valor_pago);
        }
    } while (valor_veiculo > 0);

    printf("Total de descontos: R$%.2f\n", total_desconto);
    printf("Total pago pelos clientes: R$%.2f\n", total_pago);

    return 0;
}
