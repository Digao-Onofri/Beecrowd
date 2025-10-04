/*
    Name: KiloMan
    Link: https://judge.beecrowd.com/en/problems/view/1250
*/

#include <stdio.h>
#include <string.h>

int main(){
    int cases, hits;
    int heights[51], shots, i;
    char jumps[51];

    scanf("%d", &cases);

    while(cases--){
        hits = 0;
        scanf("%d", &shots);

        memset(jumps, '\0', sizeof(jumps));
        memset(heights, 0, sizeof(heights));

        for(i = 0; i < shots; i++){
            scanf("%d", &heights[i]);
        }
        
        for(i = 0; i < shots; i++){
            scanf(" %c", &jumps[i]);
        }

        for(i = 0; i < shots; i++){
            if(jumps[i] == 'S' && (heights[i] == 1 || heights[i] == 2)){
                hits++;
            }
            else if(jumps[i] == 'J' && heights[i] > 2){
                hits++;
            }
        }

        printf("%d\n", hits);
    }

    return 0;
}