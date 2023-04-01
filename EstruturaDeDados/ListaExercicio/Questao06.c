/*

Função: retorna  a média aritmética;
A média harmônica (MH);
A média geométrica (MG);
A média quadrática(MQ).
Autor: Antônio lucas Dantas de Abrantes;
Data: 23/03/2023;
Observações: 

*/

#include <stdio.h>
#include <math.h>


float medArit(float a, float b,float c, float d){
    return (a + b + c + d) / 4.0;
}
float medHarm(float a, float b,float c, float d){
   return 4.0 / (1.0/a + 1.0/b + 1.0/c + 1.0/d);
}
float medGeom(float a, float b,float c, float d){
    return pow(a * b * c * d, 1.0/4.0);
}
float medQuad(float a, float b,float c, float d){
   return sqrt((a*a + b*b + c*c + d*d) / 4.0);
}
  
int main() {
   float a, b, c, d;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de d: ");
    scanf("%f", &d);

    printf("\nMédia aritmética: %f\n", medArit(a,b,c,d));
    printf("Média harmônica: %f\n", medHarm(a,b,c,d));
    printf("Média geométrica: %f\n", medGeom(a,b,c,d));
    printf("Média quadrática: %f\n", medQuad(a,b,c,d));

    return 0;
}
