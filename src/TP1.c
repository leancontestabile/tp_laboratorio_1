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
    float precioAerolineas[4];
    float precioLatam[4];
    float diferencia;
    int flag = 0;
    do
    {
        printf("\n1 - Ingresar Kilometros (km = %d)\n"
        "2 - Ingresar Precio de los Vuelos (Aerolineas = %.2f, Latam = %.2f)\n"
        "3 - Calcular todos los costos\n"
        "4 - Informar Resultados\n"
        "5 - Carga forzada de datos\n"
        "6 - Salir\n-> ", kilometros, pAerolineas, pLatam);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingrese los kilometros: ");
            scanf("%d", &kilometros);
            break;
        case 2:
            printf("Ingrese que precio quiere ingresar (1 - Aerolineas | 2 - Latam): ");
            scanf("%d", &opcionVuelo);
            switch (opcionVuelo)
            {
            case 1:
                printf("Ingrese el precio del vuelo en Aerolineas: ");
                scanf("%f", &pAerolineas);
                break;
            case 2:
                printf("Ingrese el precio del vuelo en Latam: ");
                scanf("%f", &pLatam);
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }
            break;
        case 3:
            if (kilometros!=0 && pAerolineas!=0 && pLatam!=0)
            {
                precioLatam[0] = precioDebito(pLatam);
                precioAerolineas[0] = precioDebito(pAerolineas);
                precioLatam[1] = precioCredito(pLatam);
                precioAerolineas[1] = precioCredito(pAerolineas);
                precioLatam[2] = precioBitcoin(pLatam);
                precioAerolineas[2] = precioBitcoin(pAerolineas);
                precioLatam[3] = precioUnitario(kilometros, pLatam);
                precioAerolineas[3] = precioUnitario(kilometros, pAerolineas);
                diferencia = diferenciaPrecio(pLatam, pAerolineas);
                printf("Se han calculados los costos exitosamente\n");
                flag = 1;
            }else
            {
                printf("Error, ingrese los datos correctamente\n");
                flag = 0;
            }
            break;
        case 4:
            if (flag == 1)
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
                "La diferencia de precio es: %.2f\n", kilometros, pLatam, precioLatam[0], precioLatam[1], precioLatam[2], precioLatam[3], pAerolineas, precioAerolineas[0], precioAerolineas[1], precioAerolineas[2], precioAerolineas[3], diferencia);
            }else
            {
                printf("Error\n");
            }
            break;
        case 5:
            kilometros = 7090;
            pAerolineas = 162965;
            pLatam = 159339;
            printf("Los datos han sido cargados de manera forzada\n");
            break;
        case 6:
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }
    } while (opcion != 6);
    printf("Hasta luego!\n");
    system("PAUSE");
    return 0;
}
