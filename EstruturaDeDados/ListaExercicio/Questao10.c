/*

Função: retorna um a velocidade média de um percurso
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

float calculaVM(float espaco, float tempo){
    float distancia;
    distancia = espaco/tempo;
    return distancia;
}

int main(){
    float espaco, tempo;

    printf("Para saber a velocidade média de um percuso digite os km e as horas:");
    scanf("%f %f",&espaco,&tempo);
    printf("A velocidade média foi %.2f", calculaVM(espaco,tempo));
}