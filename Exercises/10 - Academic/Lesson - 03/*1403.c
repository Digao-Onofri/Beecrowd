/*
    Name: Grandpa is Famous
    Link: https://judge.beecrowd.com/en/problems/view/1403
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparison(const void *a, const void *b){
    int A = *(int*) a;
    int B =  *(int*) b;

    return (A > B) - (A < B);
}

int main(){
    int rankings, week_players, i, j, size;
    int second_best, best, player;
    int second_bests[251], wins[10001];

    scanf("%d %d", &rankings, &week_players);

    while(rankings != 0 && week_players != 0){       
    
        memset(second_bests, 0, sizeof(second_bests));
        memset(wins, 0, sizeof(wins));
        i = 0;

        while(rankings--){
            while(week_players--){
                scanf("%d", &player);
                second_bests[i] = player;
                i++;
                wins[player] += 1;
            }
        }
       
        qsort(second_bests, i, sizeof(int), comparison);

        best = second_best = 0;
        for(j = 0; j < 10001; j++){
            if(wins[j] > best){
                second_best = best;
                best = wins[j];
            }
            else if (wins[j] > second_best && wins[j] < best) {
                second_best = wins[j];
            }
        }
       
        size = i;
        if(best == second_best){
            for(i = 0; i <= size; i++){
                printf("%d ", second_bests[i]);
            }
            printf("\n");
        }
        else{
            printf("%d %d\n", best, second_best);
        }
        
        scanf("%d %d", &rankings, &week_players);
    }

    return 0;
}