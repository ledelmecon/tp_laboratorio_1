#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    int num1;
    int num2;
    int Flag_op1=0;
    int Flag_op2=0;
    float resultado;

    printf("Bienvenidos a la Calculadora elija entre las opciones para poder operar:\n\n");
    while(seguir=='s')
    {

        if(Flag_op1==0)
        {
            printf("1- Ingresar 1er operando (A=X)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%d)\n",num1);
        }

        if(Flag_op2==0)
        {
            printf("2- Ingresar 2do operando (B=Y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%d)\n",num2);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("\nIngrese opcion: ");

        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            num1=ingreseOperador();
            Flag_op1=1;
            system("cls");


            break;

        case 2:
            num2=ingreseOperador();
            Flag_op2=1;
            system("cls");
            break;
        case 3:
            if((Flag_op1==1)&&(Flag_op2==1))
            {
                resultado=suma(num1,num2);
                system("cls");
                printf("La suma de A + B es %.0f\n\n\n",resultado);
            }
            else
            {
                printf("Error: debe ingresar ambos operadores para realizar esta operacion.\n\n\n");
            }


            enterParaContinuar();
            break;
        case 4:
            if((Flag_op1==1)&&(Flag_op2==1))
            {
                resultado=resta(num1,num2);
                system("cls");
                printf("La resta de A - B es %.0f\n\n\n",resultado);
            }
            else
            {
                printf("Error: debe ingresar ambos operadores para realizar esta operacion.\n\n\n");
            }
            enterParaContinuar();
            break;
        case 5:
            if((Flag_op1==1)&&(Flag_op2==1))
            {
                num2=valida_nro_distinto_0(num2);
                resultado=division(num1,num2);
                system("cls");
                printf("La division de A / B es %.2f\n\n\n",resultado);
            }
            else
            {
                printf("Error: debe ingresar ambos operadores para realizar esta operacion.\n\n\n");
            }
            enterParaContinuar();
            break;
        case 6:
            if((Flag_op1==1)&&(Flag_op2==1))
            {
                resultado=multiplicacion(num1,num2);
                system("cls");
                printf("La multiplicacion de A * B es %.0f\n\n\n",resultado);
            }
            else
            {
                printf("Error: debe ingresar ambos operadores para realizar esta operacion.\n\n\n");
            }
            enterParaContinuar();
            break;
            break;
        case 7:
            if(Flag_op1==1)
            {
                num1=errorfactoreo(num1);
                resultado= factorizar(num1);
                system("cls");
                printf("EL factoreo de A!=%d es %.0f\n\n\n",num1,resultado);
            }
            else
            {
                printf("Error: debe ingresar el operador A para esta operacion.\n\n\n");
            }
            enterParaContinuar();
            break;
        case 8:
            if ((Flag_op1==1) && (Flag_op2==1))
            {
                if (num1<0 || num2==0)
                {
                    printf("\n\nPara mostrar todas las operaciones A debe ser numero positivo y B distinto de 0, corrija a continuacion:\n");
                    num1=errorfactoreo(num1);
                    num2=valida_nro_distinto_0(num2);
                }
                num1=errorfactoreo(num1);
                resultado=suma(num1,num2);
                system("cls");
                printf("\nLa suma de A + B es %.0f\n\n\n",resultado);
                resultado=resta(num1,num2);
                printf("La resta de A - B es %.0f\n\n\n",resultado);
                resultado=division(num1,num2);
                printf("La division de A / B es %.2f\n\n\n",resultado);
                resultado=multiplicacion(num1,num2);
                printf("La multiplicacion de A * B es %.0f\n\n\n",resultado);
                if ((Flag_op1==0) || (Flag_op2==0))
                    resultado= factorizar(num1);
                printf("EL factoreo de A!=%d es %.0f\n\n\n",num1,resultado);
            }
            else
            {
                printf("\n\n\nError: debe ingresar ambos operadores para realizar esta operacion.\n\n\n");
            }
            enterParaContinuar();
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;

}
