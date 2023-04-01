/*

Função: Esse programa tem a função de calcular e imprimir o salario de um
professor, os dados serão o valor da hora aula, numero de aulas dadas no
mês e percentual de desconto do INSS;
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <math.h>

float salario_bruto(float valor_aula, int numero_aulas) {
    float parte_boa;
    parte_boa = valor_aula*numero_aulas;
    return parte_boa;
}
float desconto_inss(float salario_bruto, float desconto){
    float parte_ruim;
    parte_ruim = salario_bruto * (desconto / 100);
    return parte_ruim;
}
float salario_liquido(salario_bruto, desconto_inss){
    float parte_marromeno;
    parte_marromeno = salario_bruto - desconto_inss;
    return parte_marromeno;
}

int main() {
    float salario_inteiro, desconto, salario_sem_dever, valor, percentual;
    int n_aulas;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor);

    printf("Digite o número de aulas dadas no mês: ");
    scanf("%d", &n_aulas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentual);

    salario_inteiro = salario_bruto(valor,n_aulas);
    desconto = desconto_inss(salario_inteiro,percentual);
    salario_sem_dever = salario_liquido(salario_inteiro,desconto);

    printf("Salário bruto: R$ %.2f\n", salario_inteiro);
    printf("Desconto INSS: R$ %.2f\n", desconto);
    printf("Salário líquido: R$ %.2f\n", salario_sem_dever);

    return 0;
}
