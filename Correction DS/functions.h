#pragma once

#include <stdio.h>

/*

// Exo 3
#include <conio.h> // Pour _getch();

*/

/*

// [Exo 1]

// Structure type Vecteurs (x,y,z)
typedef struct
{
	int x;
	int y;
	int z;
}Vecteurs3D;

*/

/*

// [Exo 3]

// Prototypes fonction mot_de_passe
void mot_de_passe(char* password);

*/

// [Exo 2]

typedef struct
{
	int minutes;
	int secondes;
	int centiemes;
}Times;

Times addTime(Times Temps1, Times temps2);
int compareTime(Times Temps1, Times Temps2);