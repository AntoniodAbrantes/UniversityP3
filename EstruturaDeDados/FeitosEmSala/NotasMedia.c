#include <stdio.h>

int main(){
    int soma = 0, n;
    float media;

    printf("Quer calcular a media de quantas notas?");
    scanf("%d", &n);

    int notas[n];
    
    for(int i = 0; i < n ; i++){
        printf("Digite a %d nota: ", i);
        scanf("%d", &notas[i]);
    }
    
    soma = 0;
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }

    media = (float)soma/n;

    printf("A média das notas é: %.2f", media);
}
