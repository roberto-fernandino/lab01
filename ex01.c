#include <stdio.h>

int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}