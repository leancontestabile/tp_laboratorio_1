/*
 * calculo.h
 *
 *  Created on: Apr 11, 2022
 *      Author: lean
 */

#ifndef CALCULO_H_
#define CALCULO_H_

/**
 * @brief Muestra el menu con los valores actuales
 * @param kilometros recibe los kilometros ingresados hasta el momento
 * @param precio1 recibe el precio1 ingresado hasta el momento
 * @param precio2 recibe el precio2 ingresado hasta el momento
 */
void menu(int kilometros, float precio1, float precio2);

/**
 * @brief realiza el descuento del 10% al precio del vuelo
 * @param precio recibe el precio del vuelo
 * @return devuelve el resultado del precio con descuento
 */
float precioDebito(float precio);

/**
 * @brief realiza el aumento del 25% al precio del vuelo
 * @param precio recibe el precio del vuelo
 * @return devuelve el resultado del precio con aumento
 */
float precioCredito(float precio);

/**
 * @brief realiza el cambio de precio en pesos argentino a bitcoin
 * @param precio recibe el precio del vuelo
 * @return devuelve el precio del vuelo en bitcoin
 */
float precioBitcoin(float precio);

/**
 * @brief realiza el precio por cada kilometro
 * @param kilometros recibe los kilometros del vuelo
 * @param precio recibe el precio del vuelo
 * @return devuelve el precio unitario
 */
float precioUnitario(int kilometros, float precio);

/**
 * @brief realiza la diferencia positiva entre los vuelos
 * @param a recibe el precio del primer vuelo
 * @param b recibe el precio del segundo vuelo
 * @return devuelve la diferencia entre los vuelos
 */
float diferenciaPrecio(float a, float b);

/**
 * @brief realiza todos los calculos del vuelo ingresado
 * @param kilometros recibe los kilometros ingresados hasta el momento
 * @param precio recibe el precio del vuelo ingresado
 * @param empresa recibe un array con 4 posiciones, donde guarda cada calculo en una posicion
 * @return int 
 */
int calculoGeneral(int kilometros, float precio, float empresa[]);

/**
 * @brief Muestra los resultados de los calculos realizados
 * @param kilometros recibe los kilometros ingresados hasta el momento
 * @param precioA recibe el precio del vuelo1 ingresado hasta el momento
 * @param precioA0 recibe el precio pagando con tarjeta de debito
 * @param precioA1 recibe el precio pagando con tarjeta de credito
 * @param precioA2 recibe el precio pagando con bitcoin
 * @param precioA3 recibe el precio unitario por cada kilometro
 * @param precioB recibe el precio del vuelo2 ingresado hasta el momento
 * @param precioB0 recibe el precio pagando con tarjeta de debito
 * @param precioB1 recibe el precio pagando con tarjeta de credito
 * @param precioB2 recibe el precio pagando con bitcoin
 * @param precioB3 recibe el precio unitario por cada kilometro
 * @param diferencia recibe la diferencia de precios
 */
void resultados(int kilometros, float precioA, float precioA0, float precioA1, float precioA2, float precioA3, float precioB, float precioB0, float precioB1, float precioB2, float precioB3, float diferencia);

/**
 * @brief fuerza los datos ingresados hasta el momento
 * @param kilometros recibe la variable int que contiene los kilometros
 * @param vuelo1 recibe la variable float que contiene el precio del primer vuelo
 * @param vuelo2 recibe la variable float que contiene el precio del segundo vuelo
 * @return int 
 */
int forzarDatos(int *kilometros, float *vuelo1, float *vuelo2);

/**
 * @brief pide un numero float al usuario y lo scanea
 * @param mensaje recibe un mensaje para mostrar por consola
 * @return retorna el numero elegido por el usuario
 */
float getFloat(char *mensaje);

/**
 * @brief pide un numero int al usuario y lo scanea
 * @param mensaje recibe un mensaje para mostrar por consola
 * @return retorna el numero elegido por el usuario
 */
int getInt(char *mensaje);

#endif /* CALCULO_H_ */
