#include <stdio.h>
#include <math.h>

int main(void){
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    if (x > 0) {
        printf("Raiz quadrada = %f\n", sqrt(x));
    } else {
        printf("Numero invalido\n");
    }
    return 0;
}