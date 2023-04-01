/*

Função: Criar uma função que retorna o somatório de um número.
Autor: Antônio Lucas Dantas de Abrantes
Data: 23/03/2023
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somatorio(int num){
    int i, sum = 0;
   
    for (i = num; i >=1; i--){
        sum += i;  
    }
    return sum;
}
int main(){
    int x;

    printf("digite um numero: ");
    scanf("%d", &x);
    
    printf("o somatorio de %d é: %d", x, somatorio(x));
    return 0;
}