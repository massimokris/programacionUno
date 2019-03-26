#include <stdio.h>
#include <stdlib.h>

int obtenerMaximo (int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    int numMaximo;

    printf("ingrese un numero: \n");
    scanf("%d", &num1);
    printf("ingrese otro numero: \n");
    scanf("%d", &num2);
    printf("ingrese un ultimo numero: \n");
    scanf("%d", &num3);

    numMaximo = obtenerMaximo(num1, num2, num3);

    printf("el numero maximo es: %d \n", numMaximo);
    return 0;
}

int obtenerMaximo (int num1, int num2, int num3){

    int numMaximo = num1;

    if(num2 > numMaximo){

        numMaximo = num2;
    }

    if(num3 > numMaximo){

        numMaximo = num3;
    }


    return numMaximo;
}
