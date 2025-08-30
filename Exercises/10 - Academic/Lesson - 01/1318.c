/*
    Name: Fake Tickets
    Link: https://judge.beecrowd.com/en/problems/view/1318
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N, M, fake, i, ticket;
    int tickets[10000];

    scanf("%d %d", &N, &M);

    while(N != 0 && M != 0){
        
        fake = 0;
        memset(tickets, 0, sizeof(tickets));

        for(i = 0; i < M; i++){
            scanf("%d", &ticket);
            tickets[ticket] += 1;
            if(tickets[ticket] == 2){
                fake += 1;
            }
        }

        printf("%d\n", fake);

        scanf("%d %d", &N, &M);
    }

    return 0;
}