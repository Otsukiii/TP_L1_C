#include <stdio.h>
#include <string.h>

int load(char name[50]){
    int score;//variable pour stocker le score chargé
    char buffer[50], filename[54];//buffer pour lire le score depuis le fichier et filename pour stocker le nom du fichier à ouvrir

    sprintf(filename, "%s.txt", name);
    
    //ouvre le fichier en mode lecture
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
    char filename[54];//variable pour stocker le nom du fichier à ouvrir
    
    sprintf(filename, "%s.txt", name);
    
    //ouvre le fichier en mode écriture
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
    char filename[54];//variable pour stocker le nom du fichier à ouvrir

    sprintf(filename, "%s.txt", name);
    
    //ouvre le fichier en mode append(ajout)
    FILE *file = fopen(filename, "a");
    if(file == NULL){
        return -1;
    }

    fprintf(file, "%d\n", score);
    fclose(file);
    
    return 0;
}

int login(char name[50]){
    int score;//variable pour stocker le score chargé

    score = load(name);//charge le score du profil de l'utilisateur

    //si le score est égal à -1, cela signifie que le profil n'existe pas, donc on crée un nouveau profil avec un score de 0
    if(score == -1){
        printf("Le profile '%s' n'existe pas.\nCréation d'une sauvegarde pour '%s'.\n", name, name);
        score = create(name, 0);
    }
    printf("Chargement reussi.\n\n");
    return score;
}