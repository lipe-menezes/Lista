#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o valor de A: ");
    scanf("%d", &num1);
    
    printf("Digite o valor de B: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Os valores lidos sao iguais.\n");
    } else {
        int maior, menor;
        if (num1 > num2) {
            maior = num1;
            menor = num2;
        } else {
            maior = num2;
            menor = num1;
        }
        if (maior % menor == 0) {
            printf("O maior valor e %d e multiplo do menor valor.\n", maior);
        } else {
            printf("O maior valor e %d e nao e multiplo do menor valor.\n", maior);
        }
    }

    return 0;
}