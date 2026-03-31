#include <stdio.h>
#include <string.h>

int load(char name[50]){
    int score, trouve = 0;
    char buffer[50], filename[54];

    sprintf(filename, "%s.txt", name);
    
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        return -1;
    }
    else{
        printf("OUVERTURE DU FICHIER POUR CHARGEMENT REUSSI\n");
    }

    fgets(buffer, 50, file);
    fclose(file);
    sscanf(buffer, "%d", &score);

    return score;
}

int save(char name[50], int score){
    char filename[54];
    
    sprintf(filename, "%s.txt", name);
    
    FILE *file = fopen(filename, "w");
    if(file == NULL){
        return -1;
    }
    else{
        printf("OUVERTURE/CREATION DU FICHIER POUR SAUVEGARDE REUSSI\n");
    }

    fprintf(file, "%d\n", score);

    fclose(file);
    return 0;
}

int create(char name[50], int score){
    char filename[54];

    sprintf(filename, "%s.txt", name);
    
    FILE *file = fopen(filename, "a");
    if(file == NULL){
        return -1;
    }
    else{
        printf("OUVERTURE/CREATION DU FICHIER POUR SAUVEGARDE REUSSI\n");
    }

    fprintf(file, "%d\n", score);
    fclose(file);
    
    return 0;
}