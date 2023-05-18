#include <stdio.h>
#include "funciones.h"

void ingresarMatriz(int matriz[][4], int filas, int columnas)
{
    printf("Ingrese los valores de la matriz(3 incognitas/ X,Y,Z = Constante):\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posicion (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[][4], int filas, int columnas)
{
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int calcularDeterminante(int matriz[][4], int filas, int columnas)
{
    printf("Calculo por determinantes:\n");
    int determinanteprincipal = 0;
    // primeradiagonal1
    int primervalorx = matriz[0][0];
    int primervalory = matriz[1][1];
    int primervalorz = matriz[2][2];
    int primervalor = primervalorx * primervalory * primervalorz;
    // segundadiagonal1
    int segundovalorx = matriz[1][0];
    int segundovalory = matriz[2][1];
    int segundovalorz = matriz[0][2];
    int segundovalor = segundovalorx * segundovalory * segundovalorz;
    // terceradiagonal1
    int tercervalorx = matriz[2][0];
    int tercervalory = matriz[0][1];
    int tercervalorz = matriz[1][2];
    int tercervalor = tercervalorx * tercervalory * tercervalorz;
    // cuartadiagonal
    int cuartovalorx = matriz[2][0];
    int cuartovalory = matriz[1][1];
    int cuartovalorz = matriz[0][2];
    int cuartovalor = cuartovalorx * cuartovalory * cuartovalorz;
    // quintadaigonal
    int quintovalorx = matriz[0][0];
    int quintovalory = matriz[2][1];
    int quintovalorz = matriz[1][2];
    int quintovalor = quintovalorx * quintovalory * quintovalorz;
    // sexta diagonal
    int sextovalorx = matriz[1][0];
    int sextovalory = matriz[0][1];
    int sextovalorz = matriz[2][2];
    int sextovalor = sextovalorx * sextovalory * sextovalorz;
    determinanteprincipal = ((primervalor + segundovalor + tercervalor) - (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", determinanteprincipal);
}

int parteX(int matriz[][4], int filas, int columnas){
    printf("Calculo para X:\n");
    int parteprincipalx = 0;
    // primeradiagonal1
    int primervalorx = matriz[0][3];
    int primervalory = matriz[1][1];
    int primervalorz = matriz[2][2];
    int primervalor = primervalorx * primervalory * primervalorz;
    // segundadiagonal1
    int segundovalorx = matriz[1][3];
    int segundovalory = matriz[2][1];
    int segundovalorz = matriz[0][2];
    int segundovalor = segundovalorx * segundovalory * segundovalorz;
    // terceradiagonal1
    int tercervalorx = matriz[2][3];
    int tercervalory = matriz[0][1];
    int tercervalorz = matriz[1][2];
    int tercervalor = tercervalorx * tercervalory * tercervalorz;
    // cuartadiagonal
    int cuartovalorx = matriz[2][3];
    int cuartovalory = matriz[1][1];
    int cuartovalorz = matriz[0][2];
    int cuartovalor = cuartovalorx * cuartovalory * cuartovalorz;
    // quintadaigonal
    int quintovalorx = matriz[0][3];
    int quintovalory = matriz[2][1];
    int quintovalorz = matriz[1][2];
    int quintovalor = quintovalorx * quintovalory * quintovalorz;
    // sexta diagonal
    int sextovalorx = matriz[1][3];
    int sextovalory = matriz[0][1];
    int sextovalorz = matriz[2][2];
    int sextovalor = sextovalorx * sextovalory * sextovalorz;
    parteprincipalx = ((primervalor + segundovalor + tercervalor) - (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalx);

}

int parteY(int matriz[][4], int filas, int columnas){
    printf("Calculo para Y:\n");
    int parteprincipalY = 0;
    // primeradiagonal1
    int primervalorx = matriz[0][0];
    int primervalory = matriz[1][3];
    int primervalorz = matriz[2][2];
    int primervalor = primervalorx * primervalory * primervalorz;
    // segundadiagonal1
    int segundovalorx = matriz[1][0];
    int segundovalory = matriz[2][3];
    int segundovalorz = matriz[0][2];
    int segundovalor = segundovalorx * segundovalory * segundovalorz;
    // terceradiagonal1
    int tercervalorx = matriz[2][0];
    int tercervalory = matriz[0][3];
    int tercervalorz = matriz[1][2];
    int tercervalor = tercervalorx * tercervalory * tercervalorz;
    // cuartadiagonal
    int cuartovalorx = matriz[2][0];
    int cuartovalory = matriz[1][3];
    int cuartovalorz = matriz[0][2];
    int cuartovalor = cuartovalorx * cuartovalory * cuartovalorz;
    // quintadaigonal
    int quintovalorx = matriz[0][0];
    int quintovalory = matriz[2][3];
    int quintovalorz = matriz[1][2];
    int quintovalor = quintovalorx * quintovalory * quintovalorz;
    // sexta diagonal
    int sextovalorx = matriz[1][0];
    int sextovalory = matriz[0][3];
    int sextovalorz = matriz[2][2];
    int sextovalor = sextovalorx * sextovalory * sextovalorz;
    parteprincipalY = ((primervalor + segundovalor + tercervalor) - (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalY);

}

int parteZ(int matriz[][4], int filas, int columnas){
    printf("Calculo para Z:\n");
    int parteprincipalZ = 0;
    // primeradiagonal1
    int primervalorx = matriz[0][0];
    int primervalory = matriz[1][1];
    int primervalorz = matriz[2][3];
    int primervalor = primervalorx * primervalory * primervalorz;
    // segundadiagonal1
    int segundovalorx = matriz[1][0];
    int segundovalory = matriz[2][1];
    int segundovalorz = matriz[0][3];
    int segundovalor = segundovalorx * segundovalory * segundovalorz;
    // terceradiagonal1
    int tercervalorx = matriz[2][0];
    int tercervalory = matriz[0][1];
    int tercervalorz = matriz[1][3];
    int tercervalor = tercervalorx * tercervalory * tercervalorz;
    // cuartadiagonal
    int cuartovalorx = matriz[2][0];
    int cuartovalory = matriz[1][1];
    int cuartovalorz = matriz[0][3];
    int cuartovalor = cuartovalorx * cuartovalory * cuartovalorz;
    // quintadaigonal
    int quintovalorx = matriz[0][0];
    int quintovalory = matriz[2][1];
    int quintovalorz = matriz[1][3];
    int quintovalor = quintovalorx * quintovalory * quintovalorz;
    // sexta diagonal
    int sextovalorx = matriz[1][0];
    int sextovalory = matriz[0][1];
    int sextovalorz = matriz[2][3];
    int sextovalor = sextovalorx * sextovalory * sextovalorz;
    parteprincipalZ = ((primervalor + segundovalor + tercervalor) - (cuartovalor + quintovalor + sextovalor));
    printf("%d\n", parteprincipalZ);

}

int partesdivDeterminante( int determinanteprincipal, int  parteprincipalx, int parteprincipalY, int  parteprincipalZ){

    int divX = 0;
    int divY = 0;
    int divZ = 0;

    divX = parteprincipalx/determinanteprincipal;
    divY=parteprincipalY/determinanteprincipal;
    divZ=parteprincipalZ/determinanteprincipal;

    printf("Valor de X:%d\n ", divX);
    printf("Valor de Y:%d\n ", divY);
    printf("Valor de X:%d\n ", divZ);


}