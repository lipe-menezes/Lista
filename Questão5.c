#include <stdio.h>

int main() {
    int num1, num2;
  
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1 == num2) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior, menor;
    
        if (num1 > num2) {
            maior = num1;
            menor = num2;
        } else {
            maior = num2;
            menor = num1;
        }
    
        if (menor == 0) {
            printf("%d eh maior que 0 %d nao eh multiplo de 0\n", maior, maior);
        } else if (maior % menor == 0) {
            printf("%d eh maior que %d  %d eh multiplo de %d\n", maior, menor, maior, menor);
        } else {
            printf("%d eh maior que %d %d nao eh multiplo de %d\n", maior, menor, maior, menor);
        }
    }

    return 0;
}