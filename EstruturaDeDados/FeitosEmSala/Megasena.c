#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_CARTELAS 10
#define NUMEROS_POR_CARTELA 6

int temNumero(int* cartela, int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (cartela[i] == numero) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int cartelas[NUM_CARTELAS][NUMEROS_POR_CARTELA];
    
    srand(time(NULL));

    for (int i = 0; i < NUM_CARTELAS; i++) {
        for (int j = 0; j < NUMEROS_POR_CARTELA; j++) {
            int numero;
            do {
                numero = rand() % 60 + 1;
            } while (temNumero(cartelas[i], j, numero));
            cartelas[i][j] = numero;
        }
    }

    for (int i = 0; i < NUM_CARTELAS; i++) {
        printf("Cartela %d: ", i+1);
        for (int j = 0; j < NUMEROS_POR_CARTELA; j++) {
            printf("%d ", cartelas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
