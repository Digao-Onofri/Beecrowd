/*
    Name: Face 2015 Free Gift
    Link: https://judge.beecrowd.com/en/problems/view/1944
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){ 
    int cases, aux, count, i, j;
    char letters[9];
    char last[] = "FACE";
    bool no_earn = false;

    scanf("%d", &cases);

    aux = cases;
    count = 0;

    while(cases--){

        no_earn = false;

        scanf(" %[^\n]", letters);

        if(aux == cases + 1){        
            j = 0;
            for(i = strlen(letters) - 1; i >= 0; i--){
                if(letters[i] == last[j]){
                    j++;
                }
                else if(letters[i] != ' '){
                    no_earn = true;
                }
            }

            if(!no_earn){
                count++;
            }
        }
        else{        
            for(i = strlen(letters) - 1; i >= 0; i--){
                if(letters[i] == last[j]){
                    j++;
                }
                else if(letters[i] != ' '){
                    no_earn = true;
                }
             }

            if(!no_earn){
                count++;
            }
        }
        
        printf("%s debug\n", last);

        j = 0;
        for(i = 0; i < strlen(letters); i++){
            if(letters[i] != ' '){
                last[j] = letters[i];
                j++;
            }
        }

        printf("%s debug last\n", last);
        printf("%s debug\n", letters);
        printf("%d\n", count);
        
    }

    printf("%d\n", count);

    return 0;
}