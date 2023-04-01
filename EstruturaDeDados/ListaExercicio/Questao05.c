/*

Função: retorna o valor do produto notável cubo da soma de dois termos
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <math.h>

float cubo(int x){
    return x*x*x;
}

int valor3(int a, int b){
    return cubo(a) + 3*a*a*b + 3*a*b*b + cubo(b);
}

int main() {
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("O resultado é %d", valor3(a,b));
    return 0;
}