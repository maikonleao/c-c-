#include <stdio.h>

int main(void){
    int n;
    
    printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair\n");
    printf("\nInforme a operação desejada: ");
    
    scanf("%d", &n);
    
    switch(n) {
        case 1: 
            printf("\nSaldo\n");
            break;
        case 2: 
            printf("\nExtrato\n");
            break;
        case 3: 
            printf("\nSaque\n");
            break;
        case 4: 
            printf("\nSair\n");
            break;
        default:
            printf("\nOpção Inválida\n");
    }
}