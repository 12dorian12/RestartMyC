#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int min = 0, max = 0;
	printf("definit le min : ");
	scanf_s("%d", &min);
	printf("definit le max : ");
	scanf_s("%d", &max);

	srand(time(NULL));
	int nbAleatoire = (rand()%(max-min+1)+min);
	
	int reponse = 0;
	int nbCoup = 0;
	do
	{
		printf("\nQuelle est le nombre ? ");
		scanf_s("%d", &reponse);

		if (reponse > nbAleatoire)
		{
			printf("Non c'est moin\n");
		}
		else if (reponse < nbAleatoire)
		{
			printf("Non c'est plus\n");
		}
		else
		{
			printf("\n\n\n*****************************\nBien jouez tu as reussit en %d coups\n*****************************\n\n", nbCoup);
		}
		nbCoup++;

	} while (reponse != nbAleatoire);
	return 0;
}