#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "mathgames.h"

int menu(void){
    int userChoice;

    printf("+-----------------------------+\n| 1: Addition                 |\n| 2: Soustraction             |\n| 3: Multiplication           |\n| 4: Table de multiplications |\n| 5: Divisions                |\n| 6: Problemes                |\n| 7: Conversion de longueur   |\n| 8: Conversion du temps      |\n| 9: Sauvegarder              |\n| 0: Quitter                  |\n+-----------------------------+\nVotre choix: ");
    scanf("%d", &userChoice);
    printf("\n===============================\n\n");
    
    return userChoice;
}

int addition(void){
    int a = rand()%101, b = rand()%101, reponse;
    
    printf("%d + %d = ", a, b);;
    scanf("%d", &reponse);
    
    if (reponse == a+b){
        printf("\nBravo !\n\n");
        return 1;
    }
    else{
        printf("\nFaux ! La bonne reponse est %d\n\n", a+b);
        return 0;
    }
}

int soustraction(void){
    int a = rand()%101, b = rand()%101, reponse;

    if (b > a){
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d - %d = ", a, b);
    scanf("%d", &reponse);
    
    if(reponse == a-b){
        printf("\nBravo !\n\n");
        return 1;
    }
    else{
        printf("\nFaux ! La bonne reponse est %d\n\n", a-b);
        return 0;
    }
}

int multiplication(void){
    int a = rand()%10+1, b = rand()%10+1, c = a*b, d;
    printf("%d x %d = ", a, b);
    scanf("%d", &d);
    
    if (c == d) {
        printf("\nBravo !\n\n");
        return 1;
    }
    else {
        printf("\nFaux ! La bonne reponse est %d\n\n", c);
        return 0;
    }
}

int tabmultip(void){
    int n, i, reponse, resultat = 1;
    
    printf("Sur quelle table voulez vous travailler ? (1 - 10) : ");
    scanf("%d", &n);
    printf("\n");
    
    if (n<0 || n>10){
        printf("ERREUR : Entree invalide, veuillez choisir une table entre 1 et 10.\n\n");
        return 0;
    }

    printf("[Table de : %d]\n", n);
    
    for (i = 1; i <= 10 ; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    printf("\n[Exercice]\n\n");
    
    for (i = 1; i <= 10; i++){
        printf("%d x %d = ", n, i);
        scanf("%d", &reponse);
        
        if (reponse != n*i){
            printf("\nFaux ! La bonne reponse est %d\n\n", n*i);
            resultat = 0;
        }
        else {
            printf("\nBravo !\n\n");
        }
     }
     return resultat;
}

int division(void){
    int a, b;
    
    do {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
    } while (a < b);
    
    int reste_programme = a%b, quotiont_programme = a/b, reste_utilisateur, quotient_utilisateur;
    
    printf("%d / %d = ?\n", a, b);
    printf("\nQuotient : ");
    scanf("%d", &quotient_utilisateur);
    printf("Reste : ");
    scanf("%d", &reste_utilisateur); 
    
    if ((reste_programme == reste_utilisateur) && (quotient_utilisateur == quotiont_programme)) {
        printf("\nBravo !\n\n");
        return 1;
    }
    else {
        if (reste_programme == reste_utilisateur) {
            printf("\nFaux ! Le bon quotient est %d.\n\n", quotiont_programme);
            return 0;
        }
        else if (quotient_utilisateur == quotiont_programme){
            printf("\nFaux ! Le bon reste est %d.\n\n", reste_programme);
            return 0;
        }
        else {
            printf("\nFaux ! Le bon quotient est %d et le bon reste est %d.\n\n", quotiont_programme, reste_programme);
            return 0;
        }
    }
}

int probleme(void) {
    int type = rand() % 2;
    int contexte = rand() % 6;
    int a = rand() % 49 + 2;
    int b = rand() % 49 + 2;
    int c = rand() % 29 + 2;
    int rep;
    int calcul;

    switch (contexte) {
        case 0:
        switch (type) {
            case 0:
            printf("Eric avait %d sacs de %d billes. Il perd %d billes.\n", a, b, c);
            printf("Combien lui en reste-t-il ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Antoine avait %d sacs de %d billes. Il gagne %d billes.\n", a, b, c);
            printf("Combien en a-t-il maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        case 1:
        switch (type) {
            case 0:
            printf("Samantha avait %d paquets de %d bonbons. Elle mange %d bonbons.\n", a, b, c);
            printf("Combien lui en reste-t-elle ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Clara avait %d paquets de %d bonbons. Elle recoit bonbons %d de plus.\n", a, b, c);
            printf("Combien en a-t-elle maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        case 2:
        switch (type) {
            case 0:
            printf("Elodie avait %d boites de %d crayons. Elle jette %d crayons.\n", a, b, c);
            printf("Combien lui en reste-t-elle ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Samuel avait %d boites de %d crayons. Il achete %d crayons de plus.\n", a, b, c);
            printf("Combien en a-t-il maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        case 3:
        switch (type) {
            case 0:
            printf("Ines avait %d piles de %d livres. Elle rend %d livres.\n", a, b, c);
            printf("Combien lui en reste-t-elle ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Alexis avait %d piles de %d livres. Il en achete %d autre livre.\n", a, b, c);
            printf("Combien en a-t-til maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        case 4:
        switch (type) {
            case 0:
            printf("Marie avait %d cages de %d hamsters. Elle vend %d hamsters.\n", a, b, c);
            printf("Combien lui en reste-t-elle ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Brian avait %d cages de %d hamsters. %d petits hamsters naissent.\n", a, b, c);
            printf("Combien en a-t-il maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        case 5:
        switch (type) {
            case 0:
            printf("Louis avait %d bouquets de %d fleurs. Il vend %d fleurs.\n", a, b, c);
            printf("Combien lui en reste-t-il ?\n"); calcul = ((a*b)-c);
            break;
            case 1:
            printf("Jessica avait %d bouquets de %d fleurs. Elle recoit %d fleurs de plus.\n", a, b, c);
            printf("Combien en a-t-elle maintenant ?\n"); calcul = ((a*b)+c);
            break;
        } break;

        default: break;
    }

    printf("Votre reponse: ");
    scanf("%d", &rep);

    if (rep == calcul) {
        printf("Bravo !\n");
        return 1;
    }
    else {
        printf("Faux, la bonne reponse etait %d.\n", calcul);
        return 0;
    }
    

}

int convertTemps(void) {
   int type;
   int h, m, s;
   int bonneReponse;
   int user;


   type = rand() % 3;


   if (type == 0) {
       h = rand() % 5;
       m = rand() % 60;


       bonneReponse = h * 60 + m;


       printf("Convertis en minutes : %d h %d min\n", h, m);
   }


   else if (type == 1) {
       m = rand() % 60;
       s = rand() % 60;


       bonneReponse = m * 60 + s;


       printf("Convertis en secondes : %d min %d s\n", m, s);
   }


   else {
       h = rand() % 5;
       m = rand() % 60;
       s = rand() % 60;


       bonneReponse = h * 3600 + m * 60 + s;


       printf("Convertis en secondes : %d h %d min %d s\n", h, m, s);
   }


   printf("Ta reponse : ");
   scanf("%d", &user);


   if (user == bonneReponse) {
       printf("Correct !\n");
       return 1;
   } else {
       printf(" Faux ! Bonne reponse : %d\n", bonneReponse);
       return 0;
   }
}

int longueur() {
    int l = rand() % 7;
    int L = rand() % 7;
    int a = rand() % 9 + 1;

    float rep;
    float rep2;

    const char *d[] = {
        "mm", "cm", "dm", "m", "dam", "hm", "km"
    };
    
    const char *d2 = d[l];
    const char *d3 = d[L];

    rep2 = a * pow(10, l - L);

    printf("Convertissez %d%s en %s.\n", a, d2, d3);
    printf("Votre reponse (en %s): ", d3);
    scanf("%f", &rep);

    if (fabs(rep2 - rep) < 0.0001) {
        printf("Bravo !\n");
        return 1;
    }
    else {
        printf("Faux, la bonne reponse etait %.2f.\n", rep2);
        return 0;
    }
}