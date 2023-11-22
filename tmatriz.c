#include <stdio.h>
int main(int argc, char const *argv[])
{
    int filas;
    int columnas;
    printf("Ingrese las filas y columnas : ");
    scanf("%d", &filas);
    printf("Ingrese las Columnas : ");
    scanf("%d", &columnas);
    int matri[filas][columnas];
    printf("Resultante:\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matri[i][j] = 0;
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (i == j)
            {
                matri[i][j] = 1;
            }
        }
    }

    printf("La matriz con valores diagonales de 1 es:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matri[i][j]);
        }
        printf("\n");
    }

    return 0;
}
