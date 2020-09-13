#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int numeroA;
    int numeroB;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int resultadoA;
    int resultadoB;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroA);
    printf("Ingrese otro numero: ");
    scanf("%d", &numeroB);

    suma = SumarNumeros(numeroA,numeroB);

    printf("La suma de los dos numeros es: %d", suma);

    resta = RestarNumeros(numeroA, numeroB);
    printf("La resta de los dos numeros es: %d\n", resta);

    multiplicacion = MultiplicarNumeros(numeroA, numeroB);
    printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);

    division = DividirNumeros(numeroA, numeroB);
    printf("La division de los dos numeros es: %.2f\n", division);

    resultadoA = CalcularFactorial(numeroA);
    printf("El factorial de %d es: %d\n", numeroA, resultadoA);
    resultadoB = CalcularFactorialDos(numeroB);
    printf("El factorial de %d es: %d", numeroB, resultadoB);

    return 0;
}

