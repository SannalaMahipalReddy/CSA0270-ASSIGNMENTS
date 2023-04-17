#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    struct Player players[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf("%s", players[i].name);
        printf("Enter runs scored: ");
        scanf("%d", &players[i].runs);
    }

    int totalRuns = 0;
    for (int i = 0; i < numPlayers; i++) {
        totalRuns += players[i].runs;
    }

    printf("\nTotal runs scored by the team: %d\n", totalRuns);

    return 0;
}
