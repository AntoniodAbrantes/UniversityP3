/*

Função: pede o número do mês e mostra o mês correspondente
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

const char* QualMes(int num){

    switch(num) {
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        default:
            return "Mes invalido.";
    }
}
int main(){
    int mes;
    printf("Digite um numero para referir a um mes: ");
    scanf("%d", &mes);

    printf("O mes é %s\n", QualMes(mes));
    return 0;
}
