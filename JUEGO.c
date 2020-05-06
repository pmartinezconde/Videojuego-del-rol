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
char menu,menunum;
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
    printf("Elige la clase de tu personaje: \n 1-Guerrero\n 2-Barbaro\n 3-Guardian\n 4-Caballero\n");
    scanf("%c",&menunum);
    switch(menunum);
    {
    	case '1':
    		{
    			printf("El guerrero ha sobrevivido multiples batallas, teniendo un cuerpo resistente\n");
    			pers.atk=6;
    			pers.hp=35;
    			pers.def=6;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}break;
    	
		case '2':
			{
				printf("El barbaro aprovecha su fuerza natural para realizar el maximo daño\n");
				pers.atk=15;
    			pers.hp=20;
    			pers.def=6;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}break;
		case '3':	
			{
				pers.atk=6;
    			pers.hp=20;
    			pers.def=15;
				printf("El guardian esta entrenado en el arte de la defensa, reduciendo las posibilidades de sufrir daño\n");
				
				printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}break;
		case '4':
			{
				printf("El caballero ha entrenado en varias artes, siendo un personaje equilibrado\n");
				pers.atk=10;
    			pers.hp=20;
    			pers.def=10;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}break;
	}
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
