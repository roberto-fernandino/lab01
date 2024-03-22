#include <stdio.h>

int main(void){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if (x > 0) {
        printf("Positivo\n");
    } else if (x < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }
}