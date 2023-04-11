#include <stdio.h>

int main(){
    int numeros[10] = {};

    for(int j = 0; j < 10; j++){
        printf("Digite o número %d: ", j);
        scanf("%d", &numeros[j]);
    }

    for(int i = 0; i < 10; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}