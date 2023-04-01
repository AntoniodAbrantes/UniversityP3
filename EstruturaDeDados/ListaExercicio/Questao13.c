/*

Função: ler um angulo em graus e retornar em radianos
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float gpr(float g){

    float angulo;

    angulo = (g * 3.14159265)/180;

    return angulo;
}
int main(){
    
    float angulog;

    printf("Digite o angulo em graus: ");
    scanf("%f", &angulog);

    printf("O valor do angulo em radianos é: %.2f", grausparaRadianos(angulog));
    
    return 0;
}