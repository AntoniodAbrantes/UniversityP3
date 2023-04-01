/*

Função: cubo de um número
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações:  

*/

#include <stdio.h>

float cubo(x){
    float numero;
    numero = x*x*x;
    return numero;
}


int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O cubo de %d é: %f", num, cubo(num));
    return 0;
}