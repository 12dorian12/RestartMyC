#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include "Outil.h"
#include "joueur.h"
#include "console.h"


int main(int argc, char* argv[])
{
	/*int force = 2;
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));*/

	//SetConsoleTitle("Console Rpg");//wchar_t*
	int touche = -1;
	int posMenu = 0;
	int typeMenu = 0;
	int direction = 0;
	affichageMenu(posMenu, typeMenu);
	while (touche != 27) // _kbhit() detect la frape d'une touche
	{
		touche = _getch();
		direction = clavierMenu(touche);
		if (direction != 0)
		{
			naviguerMenu(&posMenu, &typeMenu, direction);
			affichageMenu(posMenu, typeMenu);
		}
	}

	return 0;
}