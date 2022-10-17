#include <stdio.h>
int main(){
    int parar_em = 30;
    for(int i = 0; i < 100; i++) {
        if (i == parar_em) {
            break;
        }
        printf("%d \n", i);
    }
    
}