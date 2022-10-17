#include<stdio.h>
#include<stdlib.h>

int* alocar(){
	int *memoria = (int*) malloc(sizeof(int));
	return memoria;
}

int main(){
	int *num = alocar();
	if(num != NULL){
		printf("\n Informe um numero inteiro: ");
		scanf("%d", num);
		printf("\n Numero informado: %d\n", *num);
	}

	return 0;
}