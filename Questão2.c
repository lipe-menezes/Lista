#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O número e ímpar.\n");
    }
    
    int soma = 0;
    int originalN = num;

    while (num != 0) {
        int digito = num % 10;
        soma += digito;
        num /= 10;
    }

    printf("A soma dos digitos '%d' e: %d\n", originalN, soma);

    return 0;
}