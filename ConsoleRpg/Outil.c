#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "Outil.h"

//permet de recup le clavier en enlevant le retour a la ligne
int input(char* str)
{
	char* retourLigne = NULL;
	if (fgets(str, STRLEN, stdin) != 0)
	{
		retourLigne = strchr(str, '\n');
		if (retourLigne != NULL)
		{
			*retourLigne = '\0';
			return 0;
		}
		else
		{
			return 1; //pas de retour a la ligne
		}
	}
	else
	{
		return 2; //probleme de saisie
	}

}

//permet de set la couleur dans la console windows
// 0: noir
// 1 : bleu foncé
// 2 : vert
// 3 : bleu - gris
// 4 : marron
// 5 : pourpre
// 6 : kaki
// 7 : gris clair
// 8 : gris
// 9 : bleu
// 10 : vert fluo
// 11 : turquoise
// 12 : rouge
// 13 : rose fluo
// 14 : jaune fluo
// 15 : blanc
void consolColor(int foreGround, int backGroud)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdout, backGroud*16+foreGround);
}