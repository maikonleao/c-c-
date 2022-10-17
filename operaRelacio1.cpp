#include <stdio.h>

int main(){
    int n1, n2 = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    printf("\n n1 e n2 são iguais? %d", n1==n2);
    printf("\n n1 é maior que n2? %d", n1>n2);
    printf("\n n1 é menor ou igual a n2? %d\n", n1<=n2);
}

// 0 significa não, 1 significa sim 