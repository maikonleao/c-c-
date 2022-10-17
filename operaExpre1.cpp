#include <stdio.h>

int main(){
    int idade1, idade2 , resultado = 0;
    float media;

    printf("\n Digite a primeira idade: ");
    scanf("%d", &idade1);

    printf("\n Digite a segunda idade: ");
    scanf("%d", &idade2);

    resultado = (idade1 + idade2) / 2;
    media = resultado;

    printf("\n A média é: %.2f\n", media);
    
}