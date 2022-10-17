#include <stdio.h>

struct automovel{
    char modelo[20];
    int ano;
    float valor;
};

int main(){
    struct automovel dadosAutomovel1;
    printf("\n Digite o modelo do automovel: ");
    scanf("%s", &dadosAutomovel1.modelo);

    printf("\n Digite o ano do automovel: ");
    scanf("%d", &dadosAutomovel1.ano);

    printf("\n Digite o valor do automovel: ");
    scanf("%f", &dadosAutomovel1.valor);

    printf("\n Dados Atribuídos:");
    printf("\n Modelo: %s", dadosAutomovel1.modelo);
    printf("\n Ano: %d", dadosAutomovel1.ano);
    printf("\n Valor: %.2f\n", dadosAutomovel1.valor);
}
