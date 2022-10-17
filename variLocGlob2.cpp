#include<stdio.h>

int x = 10;

void tester(){
	x = 2 * x;
}

int main(){
	printf("\n Valor de x global = %d", x);
	tester();
	printf("\n Valor de x global alterado em testar() = %d\n", x);

	return 0;
}