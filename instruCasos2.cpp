#include <stdio.h>

int main() {
	char x;
	float valor, desc, total;
	printf("\n Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
	printf("\n a. azul");
	printf("\n v. vermelho");
	printf("\n b. branco");
	printf("\n Digite sua opcao:");
	scanf("%s", &x);

	switch(x) {
	case 'a':
		printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento\n");
		desc = 30;
		break;
	case 'v':
		printf("\n Você escolheu a cor vermelha, seu desconto será de 20 por cento\n");
		desc = 20;
		break;
	case 'b':
		printf("\n Você escolheu a cor branca, seu desconto será de 10 por cento\n");
		desc = 10;
		break;
	default:
		printf("Opcão inválida, não será concedido desconto\n");
		desc = 0;
	}
    total = valor - (valor * desc / 100);
	printf("\n O valor da sua compra é R$ %.2f\n", total);

return 0;
}