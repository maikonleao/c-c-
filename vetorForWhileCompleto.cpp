#include <stdio.h>

#define VET_TAM 5

int main () {
    int vetor[VET_TAM];
    int num, i = 0, achou = 0;
    
    // Preenche vetor
    for (int i = 0; i < VET_TAM; i++) {
        printf("\nEntre com um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInforme o número a ser encontrado: ");
    scanf("%d", &num);
    
    while(i < VET_TAM) {
        if (vetor[i] == num) {
            achou = 1;
            break;
        }
        i++;
    }
    
    if (achou == 1) {
        printf("\nO número %d foi encontrado na posição %d do vetor\n", num, i);
    } else {
        printf("\nO número %d não foi encontrado no vetor\n", num);
    }
    
    
    
    
    
    return 0;
}