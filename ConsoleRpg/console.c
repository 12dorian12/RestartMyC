#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include "Outil.h"


//void mainMenu()
//{
//	char reponse[STRLEN];
//	int onMenu = 1;
//	while (onMenu)
//	{
//		printf("\nEntre un message (cl pour clear et q pour quite) : ");
//		input(reponse, STRLEN);
//		if (strcmp(reponse, "quite") == 0)
//		{
//			onMenu = 0;
//			printf("A bientot\n\n");
//		}
//		else if (strcmp(reponse, "cl") == 0)
//		{
//			system("cls");
//		}
//		else
//		{
//			printf("Tu as dit %s", reponse);
//		}
//	}
//}


int isFleche = 0;
int clavierMenu(int touche)
{
	if (isFleche)
	{
		//printf("buerk\n");
		switch (touche)
		{
		case 72: //top
			isFleche = 0;
			return 8;
			break;
		case 80: //bot
			isFleche = 0;
			return 2;
			break;
		case 75: //gauche
			isFleche = 0;
			return 4;
			break;
		case 77: //droite
			isFleche = 0;
			return 6;
			break;
		default:
			isFleche = 0;
			break;
		}
	}
	if (touche == 224)
	{
		isFleche = 1;
	}
	return 0;
}

void affichageMenu(int pos, int type)
{
	system("cls");
	switch (type)
	{
	case 0:
		switch (pos)
		{
		case 0:
			printf("   play   \n");
			printf("  Option  \n");
			printf("   Quit   \n");
			break;
		case 1:
			consolColor(15, 1);
			printf("   play   \n");
			consolColor(15, 0);
			printf("  Option  \n");
			printf("   Quit   \n");
			break;
		case 2:
			printf("   play   \n");
			consolColor(15, 1);
			printf("  Option  \n");
			consolColor(15, 0);
			printf("   Quit   \n");
			break;
		case 3:
			printf("   play   \n");
			printf("  Option  \n");
			consolColor(15, 1);
			printf("   Quit   \n");
			consolColor(15, 0);
			break;
		}
		break;
	}
}

void naviguerMenu(int* pos, int *type, int direction)
{
	switch (*type)
	{
	case 0:
		if (direction == 2)
		{
			*pos = *pos+1;
			*pos = (*pos > 3) ? 3 : *pos;
		}
		else if (direction == 8)
		{
			*pos = *pos - 1;
			*pos = (*pos < 1) ? 1 : *pos;
		}
		break;
	}
}