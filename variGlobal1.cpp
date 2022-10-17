#include<stdio.h>

float t1, t2;

float calcularMedia(){
    return (t1 + t2) / 2;
}
int main() {
    printf("\nDigite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("\nA temperatura média é %.2f ºC\n", calcularMedia());

    return 0;
}