#include <stdio.h>
#include "funciones.h"

int suma(int nro1, int nro2)
{
    return (nro1 + nro2);

}

int resta(int nro1, int nro2)
{
    return (nro1 - nro2);
}

int multiplicacion(int nro1, int nro2)
{
    return(nro1 * nro2);

}

float division (int nro1,int nro2)
{
    float resultado=(float)nro1/nro2;
    return resultado;
}


int ingreseOperador ()
{
    int aux;
    printf("Ingrese un nro: \n");
    scanf("%d",&aux);
    return aux;
}

int enterParaContinuar()
{
    int salir=0,tec=0;
    do
    {
        printf("presiona enter para continuar operando");

        tec=getch();
        if (tec==13)
            salir=1;
    }
    while(salir!=1);
    system("cls");
}

float valida_nro_distinto_0(int nro2)
{


    while(nro2==0)
    {

        printf("\nERROR: ingrese divisor distinto de 0\n");
        nro2=ingreseOperador();
    }

    return nro2;
}

int factorizar(int nro1)
{
    int i;
    int factoreo=1;

    for (i=1; i<=nro1 ; i++ )
    {
        factoreo=factoreo * i;

    }

    return factoreo;
}

int errorfactoreo(int nro1)
{

    while (nro1<0)
    {
        printf("\nERROR: ingrese numero mayor o igual a 0 para factorizar A!\n ");
        nro1=ingreseOperador();
    }

    return nro1;
}
