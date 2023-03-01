#define _CRT_SECURE_NO_WARNINGS

#include "functions.h"

int main()
{
    /*
    
    // [Exo 1]

    // Tableau vecteurs
    Vecteurs3D TabVecteurs[50];

    // Initialisation à 0
    for (int i = 0; i < 50; i++)
    {
        TabVecteurs[i].x = 0;
        TabVecteurs[i].y = 0;
        TabVecteurs[i].z = 0;
    }

    // Saisi des 10 Vecteurs
    for (int j = 0; j < 10; j++)
    {
        printf("Rentrez la coordonnee X (entier) du Vecteur %d : ", j + 1);
        scanf("%d", &TabVecteurs[j].x);

        printf("Rentrez la coordonnee Y (entier) du Vecteur %d : ", j + 1);
        scanf("%d", &TabVecteurs[j].y);

        printf("Rentrez la coordonnee Z (entier) du Vecteur %d : ", j + 1);
        scanf("%d", &TabVecteurs[j].z);
    }

    // Affichage des 10 vecteurs
    for (int k = 0; k < 10; k++)
    {
        printf(" Vecteur %d : X = %d,  Y = %d, Z = %d", k + 1, TabVecteurs[k].x, TabVecteurs[k].y, TabVecteurs[k].z);
    }

    */

    /*

    // [Exo 3]

    // Mot de passe
    char motDePasse[50];
    // Fonction Mdp
    mot_de_passe(motDePasse);
    printf("Le mot de passe est : %s", motDePasse); // Affichage du mdp

    */

    // [Exo 2]

    // Equipe des 4 relayeurs
    Times EquipeJSP[4, timeEquipe;
    int indexGagnant = 0, indexPerdant = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Rentrez les centiemes (entier) du relayeur %d : ", i + 1);
        scanf("%d", &EquipeJSP[i].centiemes);

        printf("Rentrez les secondes (entier) du relayeur %d : ", i + 1);
        scanf("%d", &EquipeJSP[i].secondes);

        printf("Rentrez les minutes (entier) du relayeur %d : ", i + 1);
        scanf("%d", &EquipeJSP[i].minutes);

        timeEquipe += addTime(Times EquipeJSP[i - 1], Times EquipeJSP[i]);

        if (i > 0)
        {
            if (compareTime(Times EquipeJSP[i - 1], Times EquipeJSP[i]) == 1)
            {
                indexGagnant = i;
                indexPerdant = i - 1;
            }
            else if (compareTime(Times EquipeJSP[i - 1], Times EquipeJSP[i]) == -1)
            {
                indexGagnant = i - 1;
                indexPerdant = i;
            }
        }
    }
}