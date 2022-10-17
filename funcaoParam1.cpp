#include<stdio.h>

void testar(int* n1, int* n2){
    *n1 = -1; // o operador * permite acessar o valor da variável
    *n2 = -2;
    printf("\n\nValores dentro da função testar(): ");
    printf("\nn1 = %d e n2 = %d", *n1, *n2);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("\nValores antes de chamar a função testar(): \n");
    printf("\nn1 = %d e n2 = %d", n1, n2);

    testar(&n1, &n2);

    printf("\n\nValores depois de chamar a função testar(): \n");
    printf("\nn1 = %d e n2 = %d\n", n1, n2);

    return 0;
}