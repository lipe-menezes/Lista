#include <stdio.h>

int main() {
    char experiencia;
    float salario, aumento;

    
    scanf(" %c", &experiencia);

    
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
    
    printf("R$ %.2f\n", salario_atualizado);

    return 0;
}