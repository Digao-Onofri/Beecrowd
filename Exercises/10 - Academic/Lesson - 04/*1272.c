/*
    Name: Hidden Message
    Link: https://judge.beecrowd.com/en/problems/view/1272
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int cases, i, j;
    char phrase[50];
    char hidden[50];

    scanf("%d", &cases);

    while(cases--){
        scanf(" %[^\n]", phrase);

        j = 0;
        for(i = 0; i < strlen(phrase); i++){
            if(islower(phrase[i]) && (phrase[i - 1] == ' ' || i == 0)){                
                hidden[j] = phrase[i];
                j++;
            }
        }
        hidden[j] = '\0';

        printf("%s\n", hidden);
    }

    return 0;
}