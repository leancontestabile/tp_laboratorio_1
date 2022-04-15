/*
 * calculo.h
 *
 *  Created on: Apr 11, 2022
 *      Author: lean
 */

#ifndef CALCULO_H_
#define CALCULO_H_

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

int calculoGeneral(int kilometros, float precio, float empresa[]);

void resultados(int kilometros, float precioA, float precioA0, float precioA1, float precioA2, float precioA3, float precioB, float precioB0, float precioB1, float precioB2, float precioB3, float diferencia);

int forzarDatos(int *kilometros, float *vuelo1, float *vuelo2);

float getFloat(char *mensaje);

int getInt(char *mensaje);

#endif /* CALCULO_H_ */
