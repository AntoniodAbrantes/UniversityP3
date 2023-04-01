/*

Função: calcula o numero de arranjos de n objetos diferentes
Autor: Antônio lucas Dantas de Abrantes;
Data: 31/03/2023;
Observações: 

*/
#include <stdio.h>

int arranjo(int n, int r){

    int i, d, j, res, novo_n;
    
    d = n - r;
    j = n - d;
    res = n;
    novo_n = n - 1;
    
    for (i = 1; i < j; i++){
        res = res * novo_n;
        novo_n--;
    }
    return res;
}
int main(){

    int n, r, res;

    printf("Digite a quantidade total de objetos: ");
    scanf("%d", &n);

    printf("Digite a quantidade de objetos escolhidos: ");
    scanf("%d", &r);

    res = arranjo(n, r);

    printf("O arranjo de %d objetos escolhendo-se %d é: %d", n, r, res);

    return 0;
}
