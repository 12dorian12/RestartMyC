#include "joueur.h"

int pointDeVie = 100;

int subirDegat2(const int* degat)
{
	pointDeVie -= *degat * 2;
	return pointDeVie;
}