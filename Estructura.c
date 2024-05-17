#include <stdio.h>

struct Estudiante {
    int id;
    int NOTA1;
    int NOTA2;
};

int main() {
    
    struct Estudiante estudiantes[3] = {
        {1, 30, 45},
        {2, 25, 35},
        {3, 40, 50}
    };

    int buscarNota;
    int encontrado = 0;
    int i;

    
    printf("Ingrese la nota a buscar en NOTA1: ");
    scanf("%d", &buscarNota);

    
    for (i = 0; i < 3; i++) {
        if (estudiantes[i].NOTA1 == buscarNota) {
            printf("Nota encontrada en la posición %d con ID %d\n", i, estudiantes[i].id);
            encontrado = 1;
            break;
        }
    }

    
    if (!encontrado) {
        printf("Nota no encontrada\n");
    }

    return 0;
}
