#include <stdio.h>

int soma(int x, int y){ 
    return x+y;
}

int main(){
    int x, y;

    printf("Digite os valores para obter a soma: ");
    scanf(" %i", &x);
    scanf(" %i", &y);
   

    printf("Resultado: %i", soma(x,y));
 
    return 0;
}