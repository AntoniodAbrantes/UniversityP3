#include <stdio.h>
#include <stdlib.h>

void pula(int x){
    int i;
    for(i=1;i<x;i++){
         printf("\n");
    }
}

int main(){

    printf("Teste da função");
    pula(10); 
    printf("Deve pular uma linha");
    pula(15);
    getchar();
}

