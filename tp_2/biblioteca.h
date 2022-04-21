#include <stdio.h>
#include <stdlib.h>

int ordenamientoDescendente(int array[], int len){
    int retorno = -1;
    int aux;
    if (array != NULL && len > 0)
    {
        retorno = 0;
        for (int i=0; i<len-1; i++)
        {
            for (int j=i+1; j<len; j++)
            {
                if (array[i]<array[j])
                {
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
    return retorno;
}

int ordenamientoAscendente(int array[], int len){
    int retorno = -1;
    int aux;
    if (array != NULL && len > 0)
    {
        retorno = 0;
        for (int i=0; i<len-1; i++)
        {
            for (int j=i+1; j<len; j++)
            {
                if (array[i]>array[j])
                {
                    aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
    }
    return retorno;
}

void mostrarArray(int array[], int len){
    for (int i = 0; i < len; i++)
    {
        if (array[i] != 0)
        {
            printf("%d ", array[i]);
        }
    }
}

int inicializarArray(int array[], int len){
    int retorno = -1;
    if (array != NULL && len > 0)
    {
        retorno = 0;
        for (int i = 0; i < len; i++)
        {
            array[i]=0;
        }
    }
    return retorno;
}

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos){
    int retorno = -1;
    int bufferInt;
    do
    {
        printf("%s", mensaje);
        scanf("%d", &bufferInt);
        if (bufferInt >= minimo && bufferInt <=maximo)
        {
            retorno = 0;
            *pResultado = bufferInt;
            break;
        }
        printf("%s", mensajeError);
        reintentos--;        
    } while (reintentos>=0);
    return retorno;
}