#include <stdio.h>
#include <stdlib.h>

/** \brief funcion que cambia el valor de una variable por posicion en memoria e indica si la pudo cambiar o no
 *
 * \param la direccion de memoria de la variable
 * \return 1 si la pudo cambiar y 0 si no;
 *
 */

int getInt(int* puntero, int veces, char* mes);//el int* indica que es puntero de tipo int

int main()
{
    int x;
    int flagX;
    char mensaje[20] = {"ingrese un numero"};//inicializamos el vector

    x = 100;
    flagX = getInt(&x, 3, mensaje);//le mandamos a la funcion la direccion de memoria de la variable

    if(flagX == 1){

        printf("x vale %d\n", x);
    }else{

        printf("no se pudo cargar la variable");
    }


    return 0;
}

int getInt(int* puntero, int veces, char* mes){

    int num;
    int todoOk;
    int contador;

    contador = 0;

    printf("%s", mes);
    scanf("%d", &num);

    while(num <= 0){

        printf("Reingrese un numero positivo: \n");
        scanf("%d", &num);
        contador++;

        if(contador == veces){

            todoOk = 0;
            break;
        }


    }

    if(contador < veces){

        *puntero = num;//el * indica que estamos asignando a esa variable guardada en la direccion de memoria un valor
        todoOk = 1;
    }


    return todoOk;
}
