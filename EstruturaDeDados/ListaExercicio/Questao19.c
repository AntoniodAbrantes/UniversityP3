/*

Função: determina o tempo necessário para que essa massa se torne menor que 0,05 gramas
Autor: Antônio lucas Dantas de Abrantes;
Data: 31/03/2023;
Observações: 

*/
#include <stdio.h>

int main() {
    float m;
    int n_mv = 0, t;
    int mv = 50;

    printf("Digite o valor da massa do material desejado em gramas: ");
    scanf("%f", &m);

    for (m > 0.05;;){
         m = m / 2;
         n_mv++;
    }
    

    t = mv * n_mv;

    printf("O tempo decorrido foi de: %d segundos", t);

    return 0;
}

