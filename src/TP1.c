#include <stdlib.h>
#include <stdio.h>
#include "calculo.h"

int main(void)
{
	setbuf(stdout, NULL);
    int opcion;
    int opcionVuelo;
    int kilometros = 0;
    float pAerolineas = 0;
    float pLatam = 0;
    float calculoAerolinea[4];
    float calculoLatam[4];
    float diferencia;
    int flag = 0;
    do
    {
        menu(kilometros, pAerolineas, pLatam);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            kilometros = getInt("Ingrese los kilometros: ");
            break;
        case 2:
            opcionVuelo = getInt("Ingrese que precio quiere ingresar (1 - Aerolineas | 2 - Latam): ");
            switch (opcionVuelo)
            {
            case 1:
                pAerolineas = getFloat("Ingrese el precio del vuelo en Aerolineas: ");
                break;
            case 2:
                pLatam = getFloat("Ingrese el precio del vuelo en Latam: ");
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }
            break;
        case 3:
            if (kilometros != 0 && pAerolineas != 0 && pLatam != 0)
            {
                calculoGeneral(kilometros, pLatam, calculoLatam);
                calculoGeneral(kilometros, pAerolineas, calculoAerolinea);
                diferencia = diferenciaPrecio(pLatam, pAerolineas);
                printf("Se han calculados los costos exitosamente\n");
                flag = 1;
            }
            else
            {
                printf("Error, ingrese los datos correctamente\n");
                flag = 0;
            }
            break;
        case 4:
            if (flag == 1)
            {
                resultados(kilometros, pLatam, calculoLatam[0], calculoLatam[1], calculoLatam[2], calculoLatam[3], pAerolineas, calculoAerolinea[0], calculoAerolinea[1], calculoAerolinea[2], calculoAerolinea[3], diferencia);
            }
            else
            {
                printf("Error, recuerde calcular los costos antes\n");
            }
            break;
        case 5:
            forzarDatos(&kilometros, &pAerolineas, &pLatam);
            break;
        case 6:
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }
    } while (opcion != 6);
    return 0;
}
