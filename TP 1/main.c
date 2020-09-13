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
    int opcion;
    fflush(stdin);
    do
    {
        printf("1. Ingresar 1er operando (A=x) \n2. Ingresar 2do operando(B=y)\n3. Calcular todas las operaciones\n a) Calcular la suma (A+B)\n b) Calcular la resta (A-B)\n c) Calcular la division (A/B)\n d) Calcular la multiplicacion (A*B)\n e) Calcular el factorial (A!) y (B!)\n4. Informar resultados\n5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%d", &numeroA);
            break;
            case 2:
                printf("Ingrese otro numero: ");
                scanf("%d", &numeroB);
            break;
            case 3:
                suma = SumarNumeros(numeroA,numeroB);
                resta = RestarNumeros(numeroA, numeroB);
                multiplicacion = MultiplicarNumeros(numeroA, numeroB);
                division = DividirNumeros(numeroA, numeroB);
                resultadoA = CalcularFactorial(numeroA);
                resultadoB = CalcularFactorialDos(numeroB);

            break;
            case 4:
                printf("\nLa suma de los dos numeros es: %d\n", suma);
                printf("La resta de los dos numeros es: %d\n", resta);
                printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);
                printf("La division de los dos numeros es: %.2f\n", division);
                printf("El factorial de %d es: %d\n", numeroA, resultadoA);
                printf("El factorial A es %d y el B es %d\n\n", numeroB, resultadoB);
            break;
            case 5:
                printf("\nGracias por corregir mi trabajo practico.\n");
                break;
        }



    }while(opcion!=5);







    return 0;
}

