#include <stdio.h>
#include <stdlib.h>
#define LONG 16
//Stats del inventario
typedef struct
{
	int espada;
	int armadura; 
	int escudo;
	int dinero;
} Inventario;
//Stats del personaje
typedef struct
{
	char nombre[LONG];
	int atk;
	int hp; 
	int hpactual;
	int def;
	Inventario inv;
} Personaje;
//LLAMADA A LAS STATS: stats(pers.hp,pers.atk,pers.def,inv.dinero);
int stats(int salud, int saludtemporal, int fuerza, int defensa, int dinero)
{
    system("cls");
	Personaje pers;
	Inventario inv;
	printf("|Salud: %i / %i  Fuerza: %i   Defensa: %i|  Dinero: %i", salud, saludtemporal, fuerza, defensa, dinero);
}
int main(void)
{
Inventario inv;
Personaje pers;	
char menu,menunum;
int rehacer;
do
{
system("cls");
printf("MENU, ELIGE :\n 1-Empezar partida\n 2-Salir del juego\n");
scanf("%c",&menu);
switch(menu)
{
    case '1':
    {
    printf("Bienvenido\n");
    printf("Introduzca el nombre del personaje(15 caracteres maximo):\n");
    fflush(stdin);
    gets(pers.nombre);   
    printf("Elige la clase de tu personaje: \n 1-Guerrero\n 2-Barbaro\n 3-Guardian\n 4-Caballero\n\n-El guerrero ha sobrevivido multiples batallas, teniendo un cuerpo resistente\n-El barbaro aprovecha su fuerza natural para atacar a sus enemigos\n-El guardian esta entrenado en el arte de la defensa, reduciendo las posibilidades de sufrir daño\n-El caballero ha entrenado en varias artes, siendo un personaje equilibrado\n\n");
    scanf("%c",&menunum);
    
    	if(menunum=='1')
    		{	
    			pers.atk=6;
    			pers.hp=35;
    			pers.hpactual=35;
    			pers.def=6;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
    	
		else if(menunum=='2')
			{
				pers.atk=15;
    			pers.hp=20;
    			pers.hpactual=20;
    			pers.def=6;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
		else if(menunum=='3')	
			{
				pers.atk=6;
    			pers.hp=20;
    			pers.hpactual=20;
    			pers.def=15;
				
				printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
		else if(menunum=='4')
			{
				pers.atk=10;
    			pers.hp=27;
    			pers.hpactual=27;
    			pers.def=10;
    			
    			printf("Ataque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
	printf("-1 Comenzar aventura\n-2 Volver al menu para cambiar personaje\n");
	scanf("%i",&rehacer);
	if(rehacer==1)
	stats(pers.hp, pers.hpactual,pers.atk,pers.def,inv.dinero);
	
	
}break;
    
    case '2':
    {
    printf("¡Hasta la proxima!");
    } break;
    default:
    {
    } break;
}
}
    while(rehacer==2);

return 0;
}
