#include <stdio.h>
#include <stdlib.h>

long factorial(int num);

int main()
{
    int n;

    printf("Ingrese un numero \n");
    scanf("%d", &n);

    printf("el factorial es: %d \n", factorial(n));
    return 0;
}

long factorial(int num){

    long rta;

    if(num<2){

        rta = 1;
    }else{

        rta = num * factorial(num-1);
    }

    return rta;
}
