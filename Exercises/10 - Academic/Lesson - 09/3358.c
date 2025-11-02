/*
    Name: Surname is not Easy
    Link: https://judge.beecrowd.com/en/problems/view/3358
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char surname[43];
    int cases, consonants, i;
    bool easy;
    scanf("%d", &cases);

    while(cases--){
        scanf(" %s", surname);
        consonants = 0;
        easy = true;

        for(i = 0; i < strlen(surname); i++){
            if(consonants == 3){
                easy = false;
                break;
            } else{
                if(tolower(surname[i]) == 'a' || tolower(surname[i]) == 'e' || tolower(surname[i]) == 'i' || tolower(surname[i]) == 'o' || tolower(surname[i]) == 'u'){
                    consonants = 0;
                } else{
                    consonants++;
                }
            }
        }

        if(consonants == 3){
            easy = false;
        }

        if(easy){
            printf("%s eh facil\n", surname);
        } else{
            printf("%s nao eh facil\n", surname);
        }

    }

    return 0;
}