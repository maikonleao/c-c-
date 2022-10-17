#include <stdio.h>
int main(void) {
    char parar;
    float nota; 
    printf("\nDigite a nota final do aluno: "); 
    scanf("%f", &nota); 
    while (nota < 0 || nota > 10) {
        printf("\n Nota inválida!\n Digite a nota final do aluno: "); 
        scanf("%f", &nota); 
    }
	return 0;
}