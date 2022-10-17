#include<stdio.h>

float calcular(){
	float num;
	printf("\n Digite um número: ");
	scanf("%f", &num);
	return num * num;
}
int main(){
	float resultado =0;
	resultado = calcular();
	printf("\n O quadrado do número digitado e: %.2f\n", resultado);
	return 0;

}