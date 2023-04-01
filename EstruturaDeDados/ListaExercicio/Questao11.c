/*

Função: retorna se um numero é primo ou não
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <math.h>

int ehPrimo(int n) {
    if (n < 2) { 
        return 0;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Digite um número para saber se é primo, se for igual a 1 é primo, igual a 0 não primo: ");
    scanf("%d", &n);
    if (ehPrimo(n)) {
        printf("1");
    } else {
        printf("0\n");
    }
    return 0;
}
