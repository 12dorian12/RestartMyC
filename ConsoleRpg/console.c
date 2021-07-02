#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Outil.h"


void mainMenu()
{
	char reponse[STRLEN];
	int onMenu = 1;
	while (onMenu)
	{
		printf("\nEntre un message (cl pour clear et q pour quite) : ");
		input(reponse, STRLEN);
		if (strcmp(reponse, "quite") == 0)
		{
			onMenu = 0;
			printf("A bientot\n\n");
		}
		else if (strcmp(reponse, "cl") == 0)
		{
			system("cls");
		}
		else
		{
			printf("Tu as dit %s", reponse);
		}
	}
}