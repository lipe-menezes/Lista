#include <stdio.h>

int main() {
    int senhacadastrada, senhainserida;
    
    
    scanf("%d", &senhacadastrada);

    if (senhacadastrada < 1000 || senhacadastrada > 9999) {
        printf("senha cadastrada deve ter 4 digitos!\n");
    } else {
        printf("senha cadastrada: %d\n", senhacadastrada);
        
        while (1) {
           
            scanf("%d", &senhainserida);

            if (senhainserida == senhacadastrada) {
                printf("senha valida!\n");
                break;
            } else {
                printf("senha invalida!\n");
            }
        }
    }

    return 0;
}