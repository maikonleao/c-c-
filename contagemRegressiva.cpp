#include<stdio.h>
int main() {
	int contador;
	printf("\nDigite um número para contagem regressiva: ");
	scanf("%d", &contador);
	for (contador; contador >= 1; contador--){
		printf("%d\n", contador);
	}
	return 0;
}