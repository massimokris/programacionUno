#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int numero;
    int ubicacion;
/*
    for(int i = 0; i < 5; i++){

        printf("Ingrese un numero: \n");
        scanf("%d", &numeros[i]);
    }

    printf("Te muestro el array en el orden que lo ingrese\n\n");*/

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    printf("ingrese ubicacion: ");
    scanf("%d", &ubicacion);

    numeros[ubicacion]=numero;

    printf("usted ingreso el numero");

    for( int i = 0; i < 5; i++){

        printf("%d \n", &numeros[i]);
    }

    printf("Te muestro el array en orden invertido\n\n");

    for( int i = 4; i > -1; i--){

        printf("%d \n", numeros[i]);
    }

    return 0;
}
