#include <stdio.h>

int Maior(int x, int y, int z){ 
    int MaiorNum = 0;
    if(x > y && x > z){
        MaiorNum = x;
    }
    else if (y > z && y > x) 
    {
        MaiorNum = y;
    }
    else{
        MaiorNum = z;
    }
    return MaiorNum;
}

int main(){
    int x, y, z;

    printf("Digite os valores para obter o maior: ");
    scanf(" %i %i %i", &x,&y,&z);

    printf("Resultado: %i", Maior(x,y,z));
 
    return 0;
}