#include <stdio.h>

int main() {
    char experiencia;
    float salario, aumento;

    printf("Nivel de experiencia (a, b ou c): ");
    scanf(" %c", &experiencia);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (experiencia) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nivel de experiencia invalido.\n");
            return 1; 
    }
    float salario_atualizado = salario + aumento;
    
    printf("O novo salario e: %.2f\n", salario_atualizado);

    return 0;
}