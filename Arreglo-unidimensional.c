#include <stdio.h>
int main() {
    int array[88];
    int iniciar_numero, buscar_numero;
    int found;
    char continuar;

    do {
        found = 0;

        printf("Ingrese el número inicial para llenar el arreglo: ");
        scanf("%d", &iniciar_numero);

        for (int i = 0; i < 88; i++) {
            array[i] = iniciar_numero + i;
        }

        printf("Ingrese el número a buscar en el arreglo: ");
        scanf("%d", &buscar_numero);

        for (int i = 0; i < 88; i++) {
            if (array[i] == buscar_numero) {
                printf("Valor encontrado en la posición %d\n", i);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("No encontrado\n");
        }

        printf("¿Desea buscar otro número? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
