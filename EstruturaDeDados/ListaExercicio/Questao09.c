/*

Função: retorna a diferença entre duas horas diferentes
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

int hora( int hora1, int hora2){
    int diferenca;
    diferenca = hora1 - hora2;
    if(diferenca <= 0){
        diferenca*=-1;
    }
    return diferenca;
}
int minuto(int min1, int min2){
    int diferenca;
    diferenca = min1 - min2;
    if(diferenca <= 0){
        diferenca*=-1;
    }
    return diferenca;
}
int main(){
    int hora1, hora2, min1, min2;

    printf("Digite o primeiro horário:");
    scanf("%d : %d", &hora1, &min1);

    printf("Digite o segundo horário:");
    scanf("%d : %d", &hora2, &min2);

    printf("A diferença é %.2d:%.2d", hora(hora1,hora2), minuto(min1,min2));

    return 0;
}