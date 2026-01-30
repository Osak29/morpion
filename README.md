# Tic-Tac-Toe en C

Un jeu classique de Morpion (Tic-Tac-Toe) développé en langage C pour deux joueurs.

## 📋 Description

Ce programme permet à deux joueurs de s'affronter dans une partie de Morpion directement dans le terminal. Le plateau de jeu est représenté par une grille 3x3 numérotée de 1 à 9.

## 🎮 Comment jouer

### Lancement du jeu
```bash
gcc -o morpion morpion.c
./morpion
```

### Règles du jeu
- Le **Joueur 1** joue avec les **X**
- Le **Joueur 2** joue avec les **O**
- Les joueurs alternent les tours
- Pour jouer, entrez le numéro de la case souhaitée (1-9)
- Le premier joueur à aligner 3 symboles (horizontalement, verticalement ou en diagonale) gagne
- Si toutes les cases sont remplies sans gagnant, la partie se termine par un match nul

### Disposition du plateau
```
1 | 2 | 3
4 | 5 | 6
7 | 8 | 9
```

## ⚙️ Fonctionnalités

- **Affichage du plateau** : Visualisation claire de l'état du jeu
- **Validation des coups** : Vérification que la case choisie est disponible
- **Détection de victoire** : Contrôle automatique des lignes, colonnes et diagonales
- **Détection de match nul** : Le jeu se termine si toutes les cases sont remplies
- **Interface en français** : Messages et instructions en français

## 🔧 Structure du code

### Fonctions principales

| Fonction | Description |
|----------|-------------|
| `showMap()` | Affiche le plateau de jeu actuel |
| `play(char sign)` | Permet à un joueur de placer son symbole |
| `win()` | Vérifie si un joueur a gagné |
| `isFull()` | Vérifie si le plateau est complet |
| `iaFacile()` | *(En développement)* Fonction pour une IA facile |

### Variables globales

- `map[10]` : Tableau représentant le plateau de jeu (indices 1-9)

## 🚀 Améliorations possibles

- [ ] Implémenter la fonction `iaFacile()` pour jouer contre l'ordinateur
- [ ] Ajouter différents niveaux de difficulté pour l'IA
- [ ] Permettre de rejouer sans relancer le programme
- [ ] Ajouter un système de score
- [ ] Améliorer l'interface utilisateur avec des couleurs
- [ ] Sauvegarder l'historique des parties

## 📝 Compilation

### Avec GCC
```bash
gcc -o morpion morpion.c
```

### Avec Clang
```bash
clang -o morpion morpion.c
```

## 🐛 Gestion des erreurs

Le programme gère les situations suivantes :
- Tentative de jouer sur une case déjà occupée
- Détection automatique de la fin de partie

## 📄 Licence

Projet éducatif libre d'utilisation.

## 👨‍💻 Auteur

Développé dans le cadre d'un apprentissage du langage C par Oswald KASSA.

---

**Note** : La fonction `iaFacile()` est actuellement en développement et n'est pas encore fonctionnelle dans cette version.
