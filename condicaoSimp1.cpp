#include <stdio.h>
int main(){
    int idade;
    printf("\n Digite a Idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("\n Você já pode tirar sua carteira de Habilitação.\n");
    }
    return 0;
}