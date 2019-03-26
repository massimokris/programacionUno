#include <stdio.h>
#include <stdlib.h>

int suma1(int, int); //prototipo de la funcion
void suma2(int, int); //prototipo de la funcion
int suma3();//prototipo de la funcion
void sumar4();//prototipo de la funcion

int main()
{

    //declaramos variables
    int numeroUno;
    int numeroDos;
    int resultado;

    //asignamos valor a las variables
    printf("ingrese un numero");
    scanf("%d", &numeroUno);

    printf("ingrese otro numero");
    scanf("%d", &numeroDos);

    //aplicamos la segunda funcion
    //que toma datos pero no devuelve nada
    suma2(numeroUno, numeroDos);

    //hacemos la operacion aplicando la funcion que creamos
    resultado = suma1(numeroUno, numeroDos);

    //imprimimos el resultado
    printf("la suma es: %d \n", resultado);
    return 0;

    suma2(numeroUno, numeroDos);
}


//desarrolamos una funcion
//declaramos que tipo de valor va a regresar
//le asignamos un nombre
//le pasamos los parametros que va tomar
int suma1 (int numeroUno, int numeroDos){

    int suma;

    suma = numeroUno + numeroDos;

    //declaramos que retorna la funcion
    return suma;
}

//desarrolamos una funcion
//declaramos que tipo de valor va a regresar
//en este caso no devuelve nada (void)
//le asignamos un nombre
//le pasamos los parametros que va tomar
void suma2 (int numeroUno, int numeroDos){

    int suma;

    suma = numeroUno + numeroDos;

    printf("la suma de los numeros es %d \n", suma);
}

//desarrolamos una funcion
//declaramos que tipo de valor va a regresar
//le asignamos un nombre
//le pasamos los parametros que va tomar
//en este caso no le pasamos parametros
int suma3 (){

    //declaramos variables
    int numeroUno;
    int numeroDos;
    int resultado;

    //asignamos valor a las variables
    printf("ingrese un numero");
    scanf("%d", &numeroUno);

    printf("ingrese otro numero");
    scanf("%d", &numeroDos);

    //hacemos la operacion aplicando la funcion que creamos
    resultado = suma1(numeroUno, numeroDos);

    //declaramos que retorna la funcion
    return resultado;
}

//desarrolamos una funcion
//declaramos que tipo de valor va a regresar
//le asignamos un nombre
//le pasamos los parametros que va tomar
//en este caso no le pasamos parametros y tampoco retorna nada
void suma4 (){

    //declaramos variables
    int numeroUno;
    int numeroDos;
    int resultado;

    //asignamos valor a las variables
    printf("ingrese un numero");
    scanf("%d", &numeroUno);

    printf("ingrese otro numero");
    scanf("%d", &numeroDos);

    //hacemos la operacion aplicando la funcion que creamos
    resultado = suma1(numeroUno, numeroDos);

    //imprimimos el resultado
    printf("la suma es: %d \n", resultado);

    //declaramos que retorna la funcion
    return resultado;
}



