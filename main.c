#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"
// Inventario de Ferreteria

int main(int argc, char *argv[])
{
    int sn = 2 ,menu;
    int cantidad[7] = {4,5,6,7,8,0,0};
    int ID[7] = {100,111,122,133,144,155,166};
    float precio[7]= {12.12,13.13,14.14,15.15,16.16,0,0};
    char nombre[7][50] = {"Ladrillos","Tornillos","Cemento","Acero","Silicona","Nada","Nada"};
    char descripcion[7][50];
    int i, valor = 5;
    int barras;
do
{
    printf("=================================================== Bienvenido al  Menu===========================================================================\n");
    printf("  1= Ver Productos                   2=Ingreso Producto              3=Modificacion del Producto               4=Eliminacion del Prodcuto\n");
    printf("Seleccione una opcion\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        mostrarProdcutos(ID,nombre,cantidad,precio,descripcion,valor,i);
        break;
    case 2:
        valor=ingresoProductos(nombre,descripcion,cantidad,precio,valor,i);
        break;
    case 3:
        modificacionProductos(ID,cantidad,precio,barras,i);

        break;
    case 4:
        eliminacion(ID,nombre,cantidad,precio,barras,i);
        break;
    default:
        break;
    }
    printf("Quieres entrar otra vez al menu si = 2 // no = 1 \n");
    scanf("%d",&sn);
} while (sn!=1);

printf("Gracias por visitar Ferreterias Flores\n");
}