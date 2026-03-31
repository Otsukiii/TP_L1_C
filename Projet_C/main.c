#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mathgames.h"
#include "savemanager.h"

int main(void){
    int input = -1, freeze, score = 0;
    char name[50];

    while(input != 0){
        input = menu();
        srand (time(NULL));
        switch(input){
            case 1 : printf("-=[ADDITION]=-\n\n"); score += addition(); break;
            case 2 : printf("-=[SOUSTRACTION]=-\n\n"); score += soustraction();break;
            case 3 : printf("-=[MULTIPLICATION]=-\n\n"); score += multiplication(); break;
            case 4 : printf("-=[TABLES DE MULTIPLICATIONS]=-\n\n"); score += tabmultip(); break;
            case 5 : printf("-=[DIVISION]=-\n\n"); score += division();break;
            case 6 : printf("-=[PROBLEMES]=-\n\n"); score += probleme(); break;
            case 7 : printf("-=[CONVERSION DE LONGUEUR]=-\n"); score += longueur(); break;
            case 8 : printf("-=[CONVERSION DU TEMPS]=-\n"); score += convertTemps(); break;
            case 9 : printf("-=[CHARGER UNE SAUVEGARDE]=-\n"); printf("Entrez votre nom: "); scanf("%s", name);score = load(name); break;
            case 10 : printf("-=[CREER UNE SAUVEGARDE]=-\n"); printf("Entrez votre nom: "); scanf("%s", name); create(name, score); break;
            case 11 : printf("-=[SAUVEGARDER]=-"); printf("Entrez votre nom: "); scanf("%s", name); save(name, score); break;
            case 0 : printf("-=[SCORE FINAL:]=-\n%d\n\nMerci de votre visite !", score); break;
            default : printf("ERREUR : L'option %d n'existe pas.\n\n", input); break;
        }
    }
    
    scanf("%d", &freeze);
    
    return 0;
}