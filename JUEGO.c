#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
	char menu;
printf("MENU, ELIGE :\n 1-Empezar partida\n 2-Salir del juego\n");
	scanf("%c",&menu);
	switch(menu)
	{
		case '1':
			{
				printf("Bienvenido");
				break;
			}
		case '2':
		printf("¡Hasta la proxima!");
			break;
		
	default:
		
		break;

	}
	
	return 0;
}
