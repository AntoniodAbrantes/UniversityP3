/*

Função: Esse programa tem a função de calcular a hipotenusa de um triângulo
Autor: Antônio lucas Dantas de Abrantes
Data: 23/03/2023
Observações: 

*/

#include <stdio.h>
#include <math.h>

float hipotenusa(float x, float y) {
    float hip;
    hip = sqrt(x*x + y*y);
    return hip;
}

int main() {
    float x, y;

    printf("Digite 2 catetos para obter a hipotenusa: ");
    scanf("%f %f", &x,&y);

    float resultado = hipotenusa(x,y);

    printf("A hipotenusa do triângulo é:%2.f", resultado);

    return 0;
}

