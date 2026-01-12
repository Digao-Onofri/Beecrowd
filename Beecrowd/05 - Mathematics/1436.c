/*
    Name: Brick Game
    Link: https://judge.beecrowd.com/en/problems/view/1436
*/

#include <stdio.h>

int main (){
    int cases, members, i, j;
    int ages[11], aux, count;

    scanf("%d", &cases);

    count = 1;
    while(cases--){
        scanf("%d", &members);

        for(i = 0; i < members; i++){
            scanf("%d", &ages[i]);
        }

        for(i = 0; i < members; i++){
            for(j = i + 1; j < members; j++){
                if(ages[i] > ages[j]){
                    aux = ages[i];
                    ages[i] = ages[j];
                    ages[j] = aux;
                }
            }
        }

        printf("Case %d: %d\n", count, ages[members / 2]);
        count++;
    }

    return 0;
}