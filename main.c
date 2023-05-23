#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{   
    int matriz[3][4];
    int filas = 3;
    int columnas = 4;
    
    ingresarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);
    int determinanteprincipal = calcularDeterminante(matriz, filas, columnas);
    int parteprincipalx = parteX(matriz, filas, columnas);
    int parteprincipalY = parteY(matriz, filas, columnas);
    int parteprincipalZ = parteZ(matriz, filas, columnas);
    partesdivDeterminante(determinanteprincipal, parteprincipalx, parteprincipalY, parteprincipalZ);
    return 0;
}
