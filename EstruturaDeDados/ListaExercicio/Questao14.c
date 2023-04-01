/*

Função: receber varios numeros positivos e para quando o usuario digitar 0
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i;

    do{
        printf("Digite um numero inteiro positivo e quando desejar encerrar basta digitar 0: ");
        scanf("%d", &num);

        if(num >= 0){
            printf("Os divisores de %d sao: ", num);

            for (i = 1; i <= num; i++) {
                if (num % i == 0) {
                    printf("%d ", i);
                }
            }

            printf("\n\n");
        }
    }while (num >= 0);

    printf("Fim do programa.");

    return 0;
}