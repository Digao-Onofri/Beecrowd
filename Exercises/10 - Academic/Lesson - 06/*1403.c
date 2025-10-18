/*
    Name: Grandpa is Famous
    Link: https://judge.beecrowd.com/en/problems/view/1403
    Presentation error (5%)
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int rankings, week_players;
    int player;
    int wins[10001];
    int r, p, i;
    int best, second_best;
    bool first = true;
    bool first_answer = true;

    scanf("%d %d", &rankings, &week_players);
    while (rankings != 0 && week_players != 0) {

        memset(wins, 0, sizeof(wins));

        // Read all rankings
        for (r = 0; r < rankings; r++) {
            for (p = 0; p < week_players; p++) {
                scanf("%d", &player);
                wins[player]++;
            }
        }

        // Find best and second best scores
        best = 0;
        second_best = 0;
        for (i = 0; i < 10001; i++) {
            if (wins[i] > best) {
                second_best = best;
                best = wins[i];
            } else if (wins[i] > second_best && wins[i] < best) {
                second_best = wins[i];
            }
        }

        // Print all players with second best score (space-separated)
        first_answer = true;
        for (i = 0; i < 10001; i++) {
            if (wins[i] == second_best) {
                if (!first_answer){
                    putchar(' ');
                }
                printf("%d", i);
                first_answer = false;
            }
        }

        scanf("%d %d", &rankings, &week_players);
        if(rankings != 0 && week_players != 0){
            printf("\n");
        }
    }

    return 0;
}
