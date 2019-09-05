#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/** \brief Solicita un entero al usuario
 *
 * \param mensaje[] char El mensaje que se va a mostrar
 * \return int El entero que ingreso el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}
/** \brief Solicita un flotante al usuario
 *
 * \param mensaje[] char El mensaje que se va a mostrar
 * \return float El flotante que ingreso el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}
/** \brief Solicita un char al usuario
 *
 * \param mensaje[] char El mensaje que se va a mostrar
 * \return char El char que ingreso el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin); // Win
    scanf("%c",&auxiliar);
    return auxiliar;
}
/** \brief Suma los numeros ingresados por el usuario
 *
 * \param primerNumero float Primer numero que operara
 * \param segundoNumero float Segundo numero que operara
 * \return float El resultado de la suma de los numero pedidos anteriormente
 *
 */
float suma(float primerNumero, float segundoNumero)
{
    float resultado;
    resultado = primerNumero + segundoNumero;
    return resultado;
}
/** \brief Resta los numeros ingresados por el usuario
 *
 * \param primerNumero float Primer numero que operara
 * \param segundoNumero float Segundo numero que operara
 * \return float El resultado de la resta de los numeros pedidos anterirmente
 *
 */
float resta(float primerNumero, float segundoNumero)
{
    float resultado;
    resultado = primerNumero - segundoNumero;
    return resultado;
}
/** \brief Divide los numeros ingresados por el usuario
 *
 * \param dividendo float El numero que va a ser dividido
 * \param divisor float El numero por el cual se dividira
 * \return float El cosiente de la division
 *
 */
float division(float dividendo, float divisor)
{
    float resultado;
    resultado = dividendo / divisor;
    return resultado;
}
/** \brief Multiplica los numeros ingresados por el usuario
 *
 * \param factorUno float Numero que va a ser multiplicado
 * \param factorDos float Numero que va a ser multiplicado
 * \return float Producto de la multiplicacion
 *
 */
float multiplicacion(float factorUno, float factorDos)
{
    float resultado;
    resultado = factorUno * factorDos;
    return resultado;
}
/** \brief Realiza el factorial del numero ingresado por el usuario
 *
 * \param operador float Numero el cual va a recibir el factorial
 * \return float Resultado del factorial
 *
 */
float factorial(float operador)
{
    float resultado;
    if(operador == 0 || operador == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = operador * factorial(operador -1 );
    }
    return resultado;
}

