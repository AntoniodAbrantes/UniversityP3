/*

Função: mostra o capital acumulado depois de n anos 
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

float pot(float base, int expoente){
    int i;
    float resultado = base;
    for (i = expoente; i > 1; i--){
        resultado *= base; 
    }
    return resultado; 
}

float juros(float capital, float taxa, int tempo){
    float juros_porcentagem, capital_final;
    juros_porcentagem = taxa / 100;
    capital_final = capital * pot((1 + juros_porcentagem), tempo);
    return capital_final;
}

int main(){
    float capital_inicial, taxa_juros, capital_final;
    int anos;

    printf("Digite o valor do capital atual aplicado: ");
    scanf("%f", &capital_inicial);
    printf("Digite a quantidade de juros ao ano porcento: ");
    scanf("%f", &taxa_juros);
    printf("Digite a quantidade de anos em que o dinheiro ficara rendendo: ");
    scanf("%d", &anos);

    capital_final = juros(capital_inicial, taxa_juros, anos);
    printf("O capital acumulado após %d anos com um capital inicial de %.2f R$ é: R$%.2f\n", anos, capital_inicial, capital_final);

    return 0;
}
