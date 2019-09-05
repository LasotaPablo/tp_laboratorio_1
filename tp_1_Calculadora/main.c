#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    char continuar;
    do
    {
        float operadorUno;
        float operadorDos;
        int opcion;
        float resultado;
        float resultadoFactorialUno;
        float resultadoFactorialDos;
        printf("-----------CALCULADORA----------\n");
        operadorUno = getFloat("Ingrese el primer numero: ");
        operadorDos = getFloat("Ingrese el segundo numero: ");
        printf("¿Que desea hacer con los numeros?\n1.Sumar\n2.Resta\n3.Dividir\n4.Multiplicacion\n5.Factorial\n6.Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            resultado = suma(operadorUno, operadorDos);
            printf("El resultado de la suma es %.2f\n\n\n",resultado);
            break;
        case 2:
            resultado = resta(operadorUno, operadorDos);
            printf("El resultado de la resta es %.2f\n\n\n",resultado);
            break;
        case 3:
            if(operadorDos != 0)
            {
                resultado = division(operadorUno, operadorDos);
                printf("El resultado de la division es %.2f\n\n\n",resultado);
            }
            else if(operadorDos == 0)
            {
                printf("Error, no es posible dividir por 0\n\n\n");
            }
            break;
        case 4:
            resultado = multiplicacion(operadorUno,operadorDos);
            printf("El producto de la multiplicacion es %.2f\n\n\n",resultado);
            break;
        case 5:
            resultadoFactorialUno = factorial(operadorUno);
            resultadoFactorialDos = factorial(operadorDos);
            printf("El factorial del primer numero es %.2f\n",resultadoFactorialUno);
            printf("El factorial del segundo numero es %.2f\n\n\n",resultadoFactorialDos);
            break;
        case 6:
            continuar = 'n';
            break;
        }
        printf("¿Desea realizar otra operacion?(s/n)");
        fflush(stdin);
        scanf("%c",&continuar);
        system("cls");
    }while(continuar == 's');
}
