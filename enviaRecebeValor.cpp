#include <stdio.h>
int main(){
    float valor1 = 0, valor2 = 0;

    printf("\n Digite o primeiro número: ");
    scanf("%f", &valor1);
    
    printf("\n Digite o segundo número: ");
    scanf("%f", &valor2);

    printf("\n Variável 1 = %.2f", valor1);
    printf("\n Variável 2 = %f", valor2);

    return 0;
}