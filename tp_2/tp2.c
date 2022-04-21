#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
    int opcion;
    int respuesta;
    respuesta = 1;
    do
    {
        respuesta = utn_getNumero(&opcion, "1-Altas\n2-Modificar\n3-Baja\n4-Informar\n5-Salir\n", "No es una opcion valida\n", 1, 5, 2);
        if (!respuesta)
        {
            switch (opcion)
            {
            case 1:
                printf("Altas");
                break;
            case 2:
                printf("Modificar");
                break;
            case 3:
                printf("Baja");
                break;
            case 4:
                printf("Informar");
                break;
            }
        }
    } while (opcion != 5);
    return 0;
}