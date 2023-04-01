#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; //a é um inteiro
    int *aPtr; //aPtr é um ponteiro para um inteiro

    a = 7;
    aPtr=&a;

    printf("\nO endereço de a é: %d\n", &a);
    printf("O valor de aPtr é: %p\n \n", aPtr);

    printf("O valor de a é: %p\n", &a);
    printf("O valor de *aPtr é: %d\n \n", *aPtr);

    printf("\nSabendo que * e & complementam-se mutualmente..");
    printf(".\n&*aPtr= %p\n*&aPtr= %p\n ", &*aPtr, *&aPtr);

    return 0;
}