/*
    Name: Supermarket Line
    Link: https://judge.beecrowd.com/en/problems/view/2065.c  
*/

#include <stdio.h>

int main(){
    int cashiers, clients;
    int time_item[10000];
    int amount_item[10000];
    int time, i, j;

    scanf("%d %d", &cashiers, &clients);

    for(i = 0; i < cashiers; i++){
        scanf("%d", &time_item[i]);
    }

    for(i = 0; i < clients; i++){
        scanf("%d", &amount_item[i]);
    }

    j = 0;
    for(i = 0; i < clients; i++){
        if(i < cashiers && cashiers > 1){
            time += time_item[i] * amount_item[i];
            time = time / 2
        }
        else{
            time += time_item[j] * amount_item[i];
            j++;
            if(j >= cashiers){
                j = 0;
            }
        }
    }

    printf("%d\n", time);

    return 0;
}