/*
 * calculo.h
 *
 *  Created on: Apr 11, 2022
 *      Author: lean
 */

#ifndef CALCULO_H_
#define CALCULO_H_

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

#endif /* CALCULO_H_ */
