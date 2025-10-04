/*
    Name: Sticks Game
    Link: https://judge.beecrowd.com/en/problems/view/1366
*/

#include <stdio.h>

int main(){
    int sticks;
    int size, amount, pairs;

    scanf("%d", &sticks);

    while(sticks != 0){
        pairs = 0;

        while(sticks--){
            scanf("%d %d", &size, &amount);
            pairs += amount / 2;
        }
        
        printf("%d\n", pairs / 2);
        scanf("%d", &sticks);
    }

    return 0;
}