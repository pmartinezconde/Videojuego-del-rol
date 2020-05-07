#include <stdio.h>
#include <stdlib.h>
#define LONG 16
typedef struct
{
	int decision;
	int salida;
}Menu;
//Stats del inventario
typedef struct
{
	int espada;
	char nombespada;
	int armadura; 
	char nombarmadura;
	int escudo;
	char nombescudo;
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
int escena(int pershp,int pershpactual,int persatk, int persdef,int invdinero)
{
int opcion;
int pista;
stats(pershp, pershpactual,persatk,persdef,invdinero);
printf("\n\n Te despiertas en una cueva a oscuras...\n ¿Que haces?\n -1 Inspeccionar los alrededores\n -2 Buscar una salida\n-3 MENU\n");
			
		do{
			
			scanf("%i",&opcion);
			if(opcion==1)
			{
			printf("A tus alrededores ves varias piedras que parecen haberse desprendido  hoyo que hay en el techo, del cual deduces que has caido\n");
			pista=1;
			}
			if(opcion==2)
			{
			printf("Ves al frente como la cueva continua ");
			if (pista==1)
			printf(", y no parece que puedas escalar para salir por donde caiste");
			printf("\n por lo que decides avanzar por la cueva\n");
			}

			}while(opcion!=3);
menuopciones(pershp, pershpactual,persatk,persdef,invdinero);
}
int menuopciones(int pershp,int pershpactual,int persatk, int persdef,int invdinero)
{
	Menu options;
	int sel;
	system("cls");
	printf("-1: Volver\n-2 Usar objetos\n-3 Salir del juego ");
	scanf("%i",&sel);
	if(sel==1)
	escena(pershp, pershpactual,persatk,persdef,invdinero);
	if(sel==2)
	//inven(); funcion inventario
	if(sel==3)
	exit(0);
	
}
int main(void)
{
Menu options;
Inventario inv;
Personaje pers;	
char menu,menunum;
int rehacer, pista, muerte=0;

do
{
system("cls");
printf("MENU, ELIGE :\n 1-Empezar partida\n 2-Salir del juego\n");
scanf("%c",&menu);
}
while(menu!='1'&&menu!='2');
do
{

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
    			
    			printf("Has elegido al Guerrero\nAtaque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
    	
		else if(menunum=='2')
			{
				pers.atk=15;
    			pers.hp=20;
    			pers.hpactual=20;
    			pers.def=6;
    			
    			printf("Has elegido al Barbaro\nAtaque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
		else if(menunum=='3')	
			{
				pers.atk=6;
    			pers.hp=20;
    			pers.hpactual=20;
    			pers.def=15;
				
				printf("Has elegido al Guardian\nAtaque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
		else if(menunum=='4')
			{
				pers.atk=10;
    			pers.hp=27;
    			pers.hpactual=27;
    			pers.def=10;
    			
    			printf("Has elegido al Caballero\nAtaque: %i   Salud: %i    Defensa: %i\n",pers.atk,pers.hp,pers.def);
			}
	printf("-1 Comenzar aventura\n-2 Volver al menu para cambiar personaje\n");
	scanf("%i",&rehacer);
	if(rehacer==1)
	{
		do
		{	
			inv.dinero=0;
			
			escena(pers.hp,pers.hpactual,pers.atk,pers.def,inv.dinero);
			if(options.salida==0)
			exit(0);
		}
			while(0<menunum<5);
		
	}
}
	break;
    
    case '2':
    {
    printf("¡Hasta la proxima!");
    exit(0);
    } break;
    default:
    {	
    } break;

}

}while(rehacer==2);
    if(muerte==1)
    {
	printf("Has muerto, quieres volver a empezar?\n -1: Volver al menu\n -2: Salir del juego\n");
    scanf("%d",&menunum);
    if(menunum==1)
    	{
    	muerte=0;
    	main();
    	}
    }

return 0;

}
