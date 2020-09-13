#include "Funciones.h"

int SumarNumeros (int numeroA, int numeroB)
{
    int suma;
    suma = numeroA + numeroB;
    return suma;
}

int RestarNumeros(int numeroA, int numeroB)
{
    int resta;
    resta = numeroA - numeroB;
    return resta;
}
int MultiplicarNumeros(int numeroA, int numeroB)
{
    int multiplicacion;
    multiplicacion = numeroA * numeroB;
    return multiplicacion;
}
int DividirNumeros(int numeroA, int numeroB)
{
    float division;
    division = numeroA / numeroB;
    return division;

}
int CalcularFactorial(int numeroA)
{
    int resultadoA;

    if(numeroA == 0)
    {
        resultadoA = 1;
    }
    else
    {
         resultadoA = numeroA * CalcularFactorial(numeroA - 1);
    }

    return resultadoA;

}

int CalcularFactorialDos(int numeroB)
{
    int resultadoB;

    if(numeroB == 0)
    {
        resultadoB = 1;
    }
    else
    {
         resultadoB = numeroB * CalcularFactorial(numeroB - 1);
    }

    return resultadoB;

}
