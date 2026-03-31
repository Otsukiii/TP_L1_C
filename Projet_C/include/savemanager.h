#ifndef PLAYER_SAVE_H
    #define PLAYER_SAVE_H
    #include <stdio.h>

    /**
     * @brief Gère la connexion d'un joueur en chargeant son score.
     *
     * Cette fonction tente de charger les données associées au profil
     * identifié par son nom. Si le profil n'existe pas, une nouvelle
     * sauvegarde est créée avec un score initial de 0.
     *
     * @param name Chaîne de caractères représentant le nom du profil
     *             (maximum 49 caractères + '\0').
     *
     * @return int Le score du joueur après chargement ou création.
     *
     * @note
     * - La fonction utilise load() pour charger un profil existant.
     * - Si load() retourne -1, cela signifie que le profil n'existe pas.
     * - Dans ce cas, create() est appelée pour créer un nouveau profil.
     * - Un message est affiché dans la console pour informer l'utilisateur.
     *
     * @warning
     * Assurez-vous que la chaîne `name` est correctement initialisée
     * et ne dépasse pas 50 caractères pour éviter les débordements mémoire.
     */
    int login(char name[50]);

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