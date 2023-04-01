#include <stdio.h>

float fatorial(int n) {
    int fat = 1, i;
    for (i = 2; i <= n; i++) {
        fat = fat * i;
    }
    return fat;
}

int main() {
    int x;
    printf("Digite um número: ");
    scanf("%i", &x);
    float resultado = fatorial(x);
    printf("O fatorial de %d é %.0f\n", x, resultado);
    return 0;
}
