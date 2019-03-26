#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int sumaNumeros;
    int numeroMinimo;
    int numeroMaximo;
    int contadorNumeros;
    int contadorPares;
    int flag;
    float promedio;
    char respuesta;

    contadorNumeros = 0;
    contadorPares = 0;
    sumaNumeros = 0;
    flag = 0;

    do
    {

        printf("ingrese un numero: \n");
        fflush(stdin);
        scanf("%d", &numero);

        while(numero<0)
        {

            printf("numero invalido, ingrese un numero: \n");
            fflush(stdin);
            scanf("%d", &numero);

        }

        sumaNumeros = sumaNumeros+numero;
        contadorNumeros++;

        if(numero%2 == 0)
        {

            contadorPares++;

        }

        if(numero > numeroMaximo || flag == 0)
        {

            numeroMaximo = numero;

        }

        if(numero < numeroMinimo || flag == 0)
        {

            numeroMinimo = numero;

            flag = 1;

        }

        printf("desea continuar: \n");
        fflush(stdin);
        scanf("%c", &respuesta);

    }while(respuesta == 's');

    promedio = (float) sumaNumeros/contadorNumeros;


    printf("Hello world!\n");
    printf("cantidad de pares: %d \n suma de los numeros: %d \n promedio de los numeros: %f \n el numero maximo y minimo %d y %d \n" ,contadorPares,sumaNumeros,promedio,numeroMaximo,numeroMinimo);
    return 0;
}

