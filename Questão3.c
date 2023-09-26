#include <stdio.h>

int main() {
    int senhacadastrada, senhainserida;
    
    printf("Cadastre uma senha:\n");
    scanf("%d", &senhacadastrada);

    if (senhacadastrada < 1000 || senhacadastrada > 9999) {
        printf("Senha cadastrada deve ter 4 digitos!\n");
    } else {
        printf("senha cadastrada: %d\n", senhacadastrada);
        
        while (1) {
            printf("Insira uma senha\n");
            scanf("%d", &senhainserida);

            if (senhainserida == senhacadastrada) {
                printf("Senha valida!\n");
                break;
            } else {
                printf("Senha invalida!\n");
            }
        }
    }

    return 0;
}