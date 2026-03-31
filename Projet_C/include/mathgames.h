#ifndef MATHGAMES_H
    #define MATHGAMES_H
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * @brief Affiche le menu principal du jeu.
     * 
     * Propose plusieurs types d'exercices mathématiques et récupère
     * le choix de l'utilisateur.
     * 
     * @return int Le choix de l'utilisateur :
     *         0 = Quitter
     *         1 = Addition
     *         2 = Soustraction
     *         3 = Multiplication
     *         4 = Table de multiplication
     *         5 = Division
     */
    int menu(void);

    /**
     * @brief Génère une addition aléatoire et demande la réponse.
     * 
     * Deux nombres aléatoires entre 0 et 100 sont générés.
     * L'utilisateur doit donner le bon résultat.
     * 
     * @return int 1 si la réponse est correcte, 0 sinon.
     */
    int addition(void);

    /**
     * @brief Génère une soustraction aléatoire et demande la réponse.
     * 
     * Deux nombres aléatoires entre 0 et 100 sont générés.
     * Le programme s'assure que le résultat est positif.
     * 
     * @return int 1 si la réponse est correcte, 0 sinon.
     */
    int soustraction(void);

    /**
     * @brief Génère une multiplication simple et demande la réponse.
     * 
     * Deux nombres aléatoires entre 1 et 10 sont générés.
     * L'utilisateur doit donner le résultat du produit.
     * 
     * @return int 1 si la réponse est correcte, 0 sinon.
     */
    int multiplication(void);

    /**
     * @brief Affiche et fait pratiquer une table de multiplication.
     * 
     * L'utilisateur choisit une table (1 à 10).
     * Le programme affiche la table puis propose un exercice
     * sur cette table.
     * 
     * @return int 1 si toutes les réponses sont correctes, 0 sinon.
     */
    int tabmultip(void);

    /**
     * @brief Génère une division euclidienne et demande quotient et reste.
     * 
     * Deux nombres aléatoires sont générés avec a >= b.
     * L'utilisateur doit fournir le quotient et le reste.
     * 
     * @return int 1 si le quotient et le reste sont correctes, 0 sinon.
     */
    int division(void);

    /**
     * @brief Génère un problème de calcul aléatoire et vérifie la réponse de l'utilisateur.
     *
     * Cette fonction crée un énoncé mathématique simple basé sur une situation concrète
     * (billes, bonbons, crayons, livres, hamsters ou fleurs).
     *
     * Le problème est généré aléatoirement selon :
     * - un type d'opération : addition (gain) ou soustraction (perte)
     * - un contexte (6 scénarios différents)
     * - des valeurs aléatoires pour les quantités
     *
     * L'utilisateur doit entrer une réponse au clavier.
     *
     * @return int
     * - 1 si la réponse de l'utilisateur est correcte
     * - 0 si la réponse est incorrecte
     *
     * @note
     * La fonction utilise `rand()` pour générer des valeurs aléatoires.
     * Assurez-vous d'avoir initialisé le générateur avec `srand()` avant appel.
     *
     * @warning
     * La fonction attend une entrée valide de type entier via `scanf`.
     */
    int probleme(void);

    /**
     * @brief Génère une question aléatoire de conversion de temps et vérifie la réponse de l'utilisateur.
     *
     * Cette fonction propose trois types de conversions :
     * - Heures et minutes vers minutes
     * - Minutes et secondes vers secondes
     * - Heures, minutes et secondes vers secondes
     *
     * Un exercice est choisi aléatoirement. L'utilisateur doit entrer la réponse
     * au clavier, et la fonction indique si elle est correcte ou affiche la bonne réponse.
     *
     * @note Utilise rand(), printf() et scanf().
     * Assurez-vous d'avoir initialisé le générateur aléatoire avec srand()
     * avant d'appeler cette fonction.
     *
     * @warning Aucune vérification de saisie utilisateur n'est effectuée.
     *
     * @return int
     * - 1 si la réponse de l'utilisateur est correcte
     * - 0 si la réponse est incorrecte
     */
    int convertTemps(void);

    /**
     * @brief Génère un exercice de conversion de longueurs entre différentes unités.
     *
     * Cette fonction choisit aléatoirement :
     * - Une valeur entière (entre 1 et 9)
     * - Une unité de départ (mm, cm, dm, m, dam, hm, km)
     * - Une unité d'arrivée
     *
     * L'utilisateur doit convertir la valeur donnée dans l'unité demandée.
     * La réponse est vérifiée avec une tolérance pour les nombres flottants.
     *
     * Exemple : convertir 5 cm en m.
     *
     * @note Utilise rand(), pow(), fabs(), printf() et scanf().
     * Assurez-vous d'avoir initialisé le générateur aléatoire avec srand().
     *
     * @warning Aucune vérification de la validité de la saisie utilisateur n'est effectuée.
     *
     * @return int
     * @retval 1 si la réponse est correcte
     * @retval 0 si la réponse est incorrecte
     */
    int longueur(void);

#endif