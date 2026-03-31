# 📘 Champion des Maths

Mini-projet en langage C

## 🧠 Description

**Champion des Maths** est un jeu en console permettant à l’utilisateur de s’entraîner aux opérations mathématiques de base.

Le programme propose plusieurs mini-jeux :
- Addition
- Soustraction
- Multiplication
- Division
- Tables de multiplication
- Conversions (temps, longueur)
- Problèmes mathématiques

Un système de score permet de suivre la progression du joueur.

## ⚙️ Fonctionnalités

- 📋 Menu interactif
- 🎲 Génération aléatoire de questions
- ✅ Vérification des réponses
- 🏆 Système de points
- 💾 Sauvegarde des scores
- 🔄 Chargement du score au démarrage
- 🎯 Affichage des résultats (Gagné / Perdu)

## 🛠️ Prérequis

- Compilateur C (GCC recommandé)
- Windows / Linux / macOS
- Bibliothèques :
  - stdio.h
  - stdlib.h
  - time.h
  - math.h

## 📥 Installation

    git clone <url-du-repo>
    cd <nom-du-projet>
    gcc main.c -I include src/*.c -o build/mathCM1


## ▶️ Utilisation

### Windows

    cd build
    mathCM1.exe

### Linux / macOS

    cd build
    ./mathCM1


## 🎮 Utilisation du programme

1. Lancer le programme
2. Choisir une option dans le menu
3. Répondre aux questions
4. Gagner des points
5. Suivre votre score

## 📁 Structure du projet

    .
    ├── include/
    │   ├── mathgames.h
    │   └── savemanager.h
    ├── src/
    │   ├── mathgames.c
    │   └── savemanager.c
    ├── build/
    │   ├── mathCM1.exe
    │   ├── Alpha.txt
    │   └── Beta.txt
    ├── main.c
    └── README.md

## 👨‍💻 Auteur

Projet réalisé par les 4 collaborateurs du repositorie.
