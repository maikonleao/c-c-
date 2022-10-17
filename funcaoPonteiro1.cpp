#include <cstdlib>
#include<stdio.h>

int* gerarRandomico(){
	static int r[10];
	int a; //essa variável foi criada para fazer o controle do for()

	for (a = 0; a < 10; a++){
		r[a] = rand() % 100; //rand() é funçao nativa do C que vai
//gerar valores aleatórios.
				
		printf("\n r[%d] = %d", a, r[a]);
		
	}
	return r; //aqui somente retorna o r que é o nome do vetor static	
}

int main(){
	int *p;
	int i;

	p = gerarRandomico();

	for (i - 0; i < 10; i++){
		printf("\n p[%d] = %d\n", i, p[i]);
	}
	return 0;
}