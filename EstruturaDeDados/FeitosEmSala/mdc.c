#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0){
        return a;
    }
    else {
        if(a < b)
        {
            return mdc(b, a);
        }
        else
        {
            return mdc(b, a % b);
        }
    }
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    int resultado = mdc(num1, num2);
    printf("O MDC de %d e %d e: %d", num1, num2, resultado);
    return 0;
}