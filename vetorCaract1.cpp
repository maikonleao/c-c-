#include <stdio.h>
// vetor de strings usando o fgets() na qual é o recomendável.
// a ideia seria criar uma função lerString() que executaria a função fflush() e depois fgets().
// sem ter que se preocupar com a limpeza da entrada padrão(stdin).
int main(void){
    char frase[101]; //defini o tamanho de caracteres que pode ser digitados.

    printf("\n Digite uma frase: ");

    fflush(stdin); // a entrada padrão (stdin) seja limpa, sem informações anteriores.

    //para cada leitura com fgets(), o programador precisará fazer chamada para fflush().
    fgets(frase, 101, stdin);

    printf("\n Frase Digitada: %s", frase);
    return 0;

}
