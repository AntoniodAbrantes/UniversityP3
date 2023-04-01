/*

Função: retorna o valor do produto notável quadrado da soma de dois termos
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <math.h>

int valor2(a,b){
    int resultado;
    resultado = pow(a, 2) + 2*a*b + pow(b, 2);
    return resultado;
}

int main() {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("O resultado é %d", valor2(a,b));
    return 0;
}