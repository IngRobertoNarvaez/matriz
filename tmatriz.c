#include <stdio.h>
int main(int argc, char const *argv[])
{
    int filas;
    int columnas;
    int matriz[filas][columnas];
    printf("Ingrese las filas : ");
    scanf("%d", &filas);
    printf("Ingrese las Columnas : ");
    scanf("%d", &columnas);
    printf("La matriz es de : %d", &matriz);
    return 0;
}
