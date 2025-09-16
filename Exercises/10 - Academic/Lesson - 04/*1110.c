/*
    Name: Throwing Cars Away
    Link: https://judge.beecrowd.com/en/problems/view/1110
*/

#include <stdio.h>
#include <string.h>

int main(){
    int cards, i, j, k;
    int deck[51], aux, count;
    int discarded[51];

    scanf("%d", &cards);

    while(cards != 0){

        memset(deck, 0, sizeof(deck));

        for(i = 1; i <= cards; i++){
            deck[i] = i;
        }

        k = 0;
        while(count >= 2){        
            
            for(i = 1; i <= cards; i++){
                discarded[k] = deck[i];
                deck[i] = 0;
                k++;

                if(i + 1 <= cards){
                    aux = deck[i + 1];
                }

                for(j = i + 1; j <= cards; j++){
                    deck[j] = deck[j + 1];
                }
                deck[j] = aux;
            }
            
            count = 0;
            for(i = 0; i < cards; i++){
                if(deck[i] != 0){
                    count++;
                }
                if(count >= 2){
                    break;
                }
            }
        }

        printf("Discarded cards: ");
        for(i = 0; i < k; i++){
            if(i + 1 == k){
                printf("%d\n", discarded[i]);
            }
            else{
                printf("%d, ", discarded[i]);
            }
        }

        printf("Remaining card: ");
        for(i = 0; i < cards; i++){
            if(deck[i] != 0){
                printf("%d\n", deck[i]);
            }
        }

        scanf("%d", &cards);
    }

    return 0;
}