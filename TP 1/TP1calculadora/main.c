#include <stdio.h>
#include <stdlib.h>

int main()
{
     int variableNumeros[10], i;
    int maxIndice;
    int minIndice;
    int flag;


    flag = 0;

    for (i=0;i<10;i++)
    {
        printf("Ingrese valores a cargar en el vector: ");
        scanf("%d",&variableNumeros[i]);

            while(variableNumeros[i] < 0 || variableNumeros[i] > 20)
        {
             printf("Error, reingrese otro numero: ");
             scanf("%d", &variableNumeros[i]);
        }
        if(flag==0)
        {
            maxIndice = variableNumeros[i];
            minIndice = variableNumeros[i];
            flag = 1;
        }
        else
        {
            if(variableNumeros[i]>maxIndice)
            {
                maxIndice = variableNumeros[i];
            }
            if(variableNumeros[i]<minIndice)
            {
                minIndice = variableNumeros[i];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        if(variableNumeros[i]>10)
        {
            printf(" %d\n", variableNumeros[i]);
        }
    }

    printf("\nEl numero más grande ingresado fue: %d\n",maxIndice);
    printf("El numero más pequeño ingresado fue: %d\n",minIndice);
    printf(" %d\n", variableNumeros[i]);

    return 0;
}
