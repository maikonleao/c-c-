// eu resultado será 0 quando a idade do cliente for maior ou igual à 
// classificação do filme ou 1, quando a idade do cliente for menor do que
// a classificação do filme.

#include <stdio.h>

#define TAM_NOME_CLIENTE 100

struct cliente{
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

struct filme{
    int classificacao_filme;
    int esta_disponivel;
};

int main(void){
    struct cliente cli;
    struct filme fi;

    printf("\nInforme o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    printf("\nInforme a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\nInforme a classificação do filme: ");
    scanf("%d", &fi.classificacao_filme);

    printf("\nInforme (0) se o filme não está disponível e (1) caso contrário: ");
    scanf("%d", &fi.esta_disponivel);

    printf("\nCliente: %s", cli.nome);
    printf("\nIdade: %d anos", cli.idade);
    printf("\nClassificação do filme: %d anos", fi.classificacao_filme);
    printf("\nEstá disponível: %d", fi.esta_disponivel);
    printf("\nFilme pode ser locado pelo cliente: %", (fi.esta_disponivel) && (cli.idade >= fi.classificacao_filme));
    printf("\n Anos restantes: %d\n", (cli.idade < fi.classificacao_filme) * (fi.classificacao_filme - cli.idade));


    }