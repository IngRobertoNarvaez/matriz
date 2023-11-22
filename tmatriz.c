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

    return 0;
}
