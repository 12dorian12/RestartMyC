#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"
#include "console.h"


int main(int argc, char* argv[])
{
	int force = 2;
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));
	printf("tu as %d point de vie\n", subirDegat2(&force));

	mainMenu();

	return 0;
}