/*
 * calculo.c
 *
 *  Created on: Apr 11, 2022
 *      Author: lean
 */

#include <stdlib.h>
#include <stdio.h>

void menu(int kilometros, float precio1, float precio2)
{
    printf("\n1 - Ingresar Kilometros (km = %d)\n"
           "2 - Ingresar Precio de los Vuelos (Aerolineas = %.2f, Latam = %.2f)\n"
           "3 - Calcular todos los costos\n"
           "4 - Informar Resultados\n"
           "5 - Carga forzada de datos\n"
           "6 - Salir\n-> ",
           kilometros, precio1, precio2);
}
float precioDebito(float precio){
    float r;
    r = precio - (precio * 10 / 100);
    return r;
}

float precioCredito(float precio){
    float r;
    r = precio + (precio * 25 / 100);
    return r;
}

float precioBitcoin(float precio){
    float r;
    r = precio / 4606954.55;
    return r;
}

float precioUnitario(int kilometros, float precio){
    float r;
    r = precio/kilometros;
    return r;
}

float diferenciaPrecio(float a, float b){
    float r;
    r = a-b;
    if (r<0)
    {
        r=r*-1;
    }
    return r;
}

void resultados(int kilometros, float precioA, float precioA0, float precioA1, float precioA2, float precioA3, float precioB, float precioB0, float precioB1, float precioB2, float precioB3, float diferencia)
{
    printf("Kilometros ingresados: %d km\n\n"
    "Precio Latam: %.2f\n"
     "a) Precio con tarjeta de debito: %.2f\n"
     "b) Precio con tarjeta de credito: %.2f\n"
     "c) Precio pagando con bitcoin : %.2f\n"
     "d) Precio unitario: %.2f\n\n"
     "Precio Aerolineas: %.2f\n"
     "a) Precio con tarjeta de debito: %.2f\n"
     "b) Precio con tarjeta de credito: %.2f\n"
     "c) Precio pagando con bitcoin : %.2f\n"
     "d) Precio unitario: %.2f \n\n"
     "La diferencia de precio es: %.2f\n",
      kilometros, precioA, precioA0, precioA1, precioA2, precioA3, precioB, precioB0, precioB1, precioB2, precioB3, diferencia);
}

void calculoGeneral(int kilometros, float precio, float empresa[])
{
    empresa[0] = precioDebito(precio);
    empresa[1] = precioCredito(precio);
    empresa[2] = precioBitcoin(precio);
    empresa[3] = precioUnitario(kilometros, precio);
}

void forzarDatos(int *kilometros, float *vuelo1, float *vuelo2){
    *kilometros = 7090;
    *vuelo1 = 162965;
    *vuelo2 = 159339;
    printf("Los datos han sido cargados de manera forzada\n");
}

float getFloat(char *mensaje){
    float num;
    printf("%s", mensaje);
    scanf("%f", &num);
    return num;
}

int getInt(char *mensaje){
    float num;
    if (mensaje != NULL)
    {
        printf("%s", mensaje);
        scanf("%f", &num);
    }
    return num;
}
