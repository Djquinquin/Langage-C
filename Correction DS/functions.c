#include "functions.h"

/*

// Exo 3 (Fonction mdp)
void mot_de_passe(char* password)
{
	printf("Veuillez saisir votre MDP : ");

	for (int i = 0; i < 50; i++)
	{
		password[i] = _getch(); // On recupere le caractère entrer

		if (password[i] == 13) // Si entrée
		{
			password[i] = '\0'; // on définis le caractère actuel comme le dernier
			break; // On arrête la saisie
		}

		printf("*"); // On affiche l'étoile
	}
}

*/

// [Exo 2]

Times addTime(Times Temps1, Times Temps2)
{
	Times NewTime;
	NewTime.centiemes += Temps1.centiemes + Temps2.centiemes;

	if (NewTime.centiemes > 100)
	{
		NewTime.secondes += NewTime.centiemes / 100;
		NewTime.centiemes %= 100;
	}

	NewTime.secondes += Temps1.secondes + Temps2.secondes;

	if (NewTime.secondes > 60)
	{
		NewTime.minutes += NewTime.secondes / 60;
		NewTime.secondes %= 60;
	}

	NewTime.minutes += Temps1.minutes + Temps2.minutes;

	return NewTime;
}

int compareTime(Times Temps1, Times Temps2)
{
	int result = 0;

	if (Temps1.minutes < Temps2.minutes)
	{
		result = -1;
	}
	else if (Temps1.minutes == Temps2.minutes && Temps1.secondes < Temps2.secondes)
	{
		result = -1;
	}
	else if (Temps1.minutes == Temps2.minutes && Temps1.secondes == Temps2.secondes && Temps1.centiemes < Temps2.centiemes)
	{
		result = -1;
	}
	else if (Temps1.minutes == Temps2.minutes && Temps1.secondes == Temps2.secondes && Temps1.centiemes == Temps2.centiemes)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}

	return result;
}