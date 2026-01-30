#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char map[10] = {'0','1','2','3','4','5','6','7','8','9'};

void showMap() {
    printf("\n%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n\n",
        map[1], map[2], map[3],
        map[4], map[5], map[6],
        map[7], map[8], map[9]);
}

int play(char sign) {
    int choix;
    printf("Entrez une case à marquer : ");
    scanf("%d", &choix);

    if (map[choix] != 'X' && map[choix] != 'O') {
        map[choix] = sign;
        return 1;
    } else {
        printf("Case déjà prise, réessayez.\n");
        return 0;
    }
}

int win() {
    // Lignes
    if (map[1]==map[2] && map[2]==map[3]) return 1;
    if (map[4]==map[5] && map[5]==map[6]) return 1;
    if (map[7]==map[8] && map[8]==map[9]) return 1;
    // Colonnes
    if (map[1]==map[4] && map[4]==map[7]) return 1;
    if (map[2]==map[5] && map[5]==map[8]) return 1;
    if (map[3]==map[6] && map[6]==map[9]) return 1;
    // Diagonales
    if (map[1]==map[5] && map[5]==map[9]) return 1;
    if (map[3]==map[5] && map[5]==map[7]) return 1;
    return 0;
}

int isFull() {
    for (int i = 1; i <= 9; i++)
        if (map[i] != 'X' && map[i] != 'O')
            return 0;
    return 1;
}

void iaFacile(char map[10]){
    for(int i = 1;i<11;i++){
        if(map[i] != 'X' && map[i] != 'O'){
            
        }
    }
    
}

int main() {
    int who = 2, result = 0, valid;

    do {
        showMap();
        do {
            printf("Joueur 1 : X\n");
            valid = play('X');
            result = win();
        } while(valid == 0);

        if (result == 1) { who = 1; break; }
        if (isFull()) break;

        showMap();
        valid = 0;
        do {
            printf("Joueur 2 : O\n");
            valid = play('O');
            result = win();
        } while(valid == 0);

    } while(result == 0 && !isFull());

    showMap();

    if (result == 1)
        printf("Le joueur %d a gagné !\n", who);
    else
        printf("Match nul !\n");

    return 0;
}
