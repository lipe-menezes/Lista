#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf(" %d eh par\n", num);
    } else {
        printf(" %d eh impar\n", num);
    }
    
    int soma = 0;
    int originalN = num;

    while (num != 0) {
        int digito = num % 10;
        soma += digito;
        num /= 10;
    }

    printf("A soma dos algarismos de %d eh %d\n", originalN, soma);

    return 0;
}