#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Outil.h"

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