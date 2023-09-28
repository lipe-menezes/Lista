#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d", &num1);
    

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
            printf(" %d eh maior que %d\n", maior, num1,num2);
        } else {
            printf("%d eh maior que %d e nao e multiplo de %d.\n", maior, num1,num2,num2);
        }
    }

    return 0;
}