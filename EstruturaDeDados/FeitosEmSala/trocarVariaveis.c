#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x = 10;
    int y = 20;

    printf("%d %d", x, y);

    troca(&x,&y);

    printf("%d %d", x, y);

    return 0;
}

