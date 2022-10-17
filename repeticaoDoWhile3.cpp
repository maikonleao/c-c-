#include <stdio.h>
int main() {
    int qtde_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

    do {
        printf("\nDigite a nota do aluno %d: ", qtde_notas + 1); 
        scanf("%f", &nota); 
        qtde_notas += 1;
        soma_notas += nota;
        printf("\nDigite 1 para informar outra nota ou 2 para encerrar: "); 
        scanf("%d", &opcao);
    } while (opcao != 2); 
     
    printf("\n\nQuantidade de alunos = %d", qtde_notas); 
    media = soma_notas / (float) qtde_notas;
    printf("\nMédia das notas = %.2f\n", media); 
    return 0;
}