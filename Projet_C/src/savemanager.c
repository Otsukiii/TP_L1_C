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
        printf("Sauvegarde reussie.\n\n");
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

    fprintf(file, "%d\n", score);
    fclose(file);
    
    return 0;
}

int login(char name[50]){
    int score;

    score = load(name);

    if(score == -1){
        printf("Le profile '%s' n'existe pas.\nCréation d'une sauvegarde pour '%s'.\n", name, name);
        score = create(name, 0);
    }
    printf("Chargement reussi.\n\n");
    return score;
}