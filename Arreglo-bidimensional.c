#include <stdio.h>

int main() {
    int matriz[9][9];
    int start_number, search_number;
    int found = 0;
    int i, j;
    char continuar;

    do {
        found = 0;

        
        printf("Ingrese el número inicial para llenar la matriz: ");
        scanf("%d", &start_number);

        
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                matriz[i][j] = start_number++;
            }
        }

       
        printf("Ingrese el número a buscar en la matriz: ");
        scanf("%d", &search_number);

        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (matriz[i][j] == search_number) {
                    printf("Valor encontrado en la posición [%d][%d]\n", i, j);
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }


        if (!found) {
            printf("No encontrado\n");
        }

        
        printf("¿Desea buscar otro número? (c/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 'c' || continuar == 'C');

    return 0;
}
