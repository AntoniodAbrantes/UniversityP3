/*

Função: retorna o valor do produto notável quadrado da soma de dois termos
Autor: Antônio lucas Dantas de Abrantes;
Data: 31/03/2023;
Observações: 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;

    printf("Qual o seu peso atual? ");
    scanf("%f", &peso);
    printf("Qual a sua altura atual? ");
    scanf("%f", &peso);

    printf("\nVALORES DE IMC\n"); 
    printf("Abaixo do peso: menor que 18,5\n");
    printf("Normal:entre 18,5 e 24,9\n");
    printf("Acima do peso:entre 25 e 29,9\n");
    printf("Obeso: 30 ou mais\n");
            

    imc = peso/(altura*altura);

    if(imc < 18.5){
        printf("\n Você está abaixo do peso");
    }else if(imc >= 18.5 && imc < 25){
        printf("\nVocê está com peso normal");
    }else if(imc >= 25 && imc < 30){
        printf("\nVocê está acima do peso");
    }else{
        printf("\nVocê está Obeso\n");
    }
}