#ifndef PLAYER_SAVE_H
    #define PLAYER_SAVE_H
    #include <stdio.h>

    /**
     * @brief Charge le score d'un joueur depuis son fichier.
     * 
     * Cette fonction construit le nom du fichier à partir du nom du joueur
     * (format "nom.txt"), ouvre le fichier en lecture, lit la première ligne
     * et retourne le score.
     * 
     * @param name Nom du joueur dont on veut charger le score.
     * @return int 
     *         - Le score du joueur si le fichier existe et est lisible
     *         - -1 si le fichier n'a pas pu être ouvert
     */
    int load(char name[50]);

    /**
     * @brief Sauvegarde un score en remplaçant le fichier existant.
     * 
     * Cette fonction ouvre le fichier en mode écriture ("w"), ce qui
     * écrase le contenu existant et écrit le nouveau score.
     * 
     * @param name Nom du joueur dont on veut sauvegarder le score.
     * @param score Score à enregistrer.
     * @return int
     *         - 0 si l'écriture a réussi
     *         - -1 si le fichier n'a pas pu être ouvert
     */
    int save(char name[50], int score);

    /**
     * @brief Crée un fichier pour un joueur et ajoute un score initial.
     * 
     * Cette fonction construit le nom du fichier à partir du nom du joueur
     * (format "nom.txt") et ouvre le fichier en mode ajout ("a"). Si le
     * fichier n'existe pas, il est créé. Le score initial est écrit dans
     * le fichier.
     * 
     * @param name Nom du joueur pour lequel créer le fichier.
     * @param score Score initial à enregistrer.
     * @return int
     *         - 0 si le fichier a été créé ou ouvert avec succès
     *         - -1 si le fichier n'a pas pu être ouvert
     */
    int create(char name[50], int score);

#endif