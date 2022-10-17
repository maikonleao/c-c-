#include<stdio.h>
//passagem de parâmetro
int somar(int a, int b){
	return a + b;

}

int main(){
	int result;
	result = somar(10, 15);
	printf("\n Resultado da soma = %d\n", result);

	return 0;
}