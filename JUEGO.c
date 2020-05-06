#include <stdio.h>
#include <stdlib.h>
#define LONG 10
typedef struct
{
	int espada;
	int armadura; 
	int escudo;
} Inventario;
typedef struct
{
	char nombre[LONG];
	int atk;
	int hp; 
	int def;
	Inventario inv;
} Personaje;
int main(void)
{
Personaje pers;	
char menu;
printf("MENU, ELIGE :\n 1-Empezar partida\n 2-Salir del juego\n");
scanf("%c",&menu);
switch(menu)
{
    case '1':
    {
    printf("Bienvenido\n");
    printf("Introduzca el nombre del personaje(10 caracteres maximo):\n");
    fflush(stdin);
    gets(pers.nombre);
    system("PAUSE");
    } break;
    case '2':
    {
    printf("¡Hasta la proxima!");
    } break;
    default:
    {
    } break;
}
    return 0;
}
