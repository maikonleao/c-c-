#include <stdio.h>
int main(){
    float orcamento;
    printf("\n Digite o valor do orçamento para viagem: ");
    scanf("%f", &orcamento);

    if(orcamento >= 1000){
        printf("\n João e Maria possuem condições para uma viagem intenacional\n");
        
    } else{
        printf("\n João e Maria irão optar por uma viagem nacional.\n");
    }
    return 0;
}
