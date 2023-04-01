/*

Função: retorna a sequencia de fibonacci 
Autor: Antônio lucas Dantas de Abrantes;
Data: 31/03/2023;
Observações: 

*/
#include <stdio.h>

int fibonacci(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i, fib;

    printf("Digite um numero n: ");
    scanf("%d", &n);

    printf("Os numeros de Fibonacci de 0 ate %d sao:\n", n);

    for(i = 0; i <= n; i++){
        fib = fibonacci(i);
        printf("%d ", fib);
    }

    return 0;
}