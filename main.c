#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{   
    int matriz[3][4];
    int filas = 3;
    int columnas = 4;
    
    //int final = partesdivDeterminante(divX);

    ingresarMatriz(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);
    calcularDeterminante(matriz, filas, columnas);
    parteX(matriz,filas,columnas);
    parteY(matriz,filas,columnas);
    parteZ(matriz,filas,columnas);
    //partesdivDeterminante( );
    return 0;
}
