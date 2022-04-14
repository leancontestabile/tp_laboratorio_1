/*
 * calculo.c
 *
 *  Created on: Apr 11, 2022
 *      Author: lean
 */

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
