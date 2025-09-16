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

        for(i = 0; i < strlen(letters); i++){
            scanf(" %c", &letters[i]);
        }

        if(aux == cases + 1){        
            j = 0;
            for(i = strlen(letters) - 1; i >= 0; i--){
                if(letters[i] != last[j] && letters[i] != ' '){
                    no_earn = true;
                    break;
                }
                j++;
            }

            if(!no_earn){
                count++;
            }
        }
        else{        
            for(i = strlen(letters) - 1; i >= 0; i--){
                if(letters[i] == last[j] && letters[i] != ' '){
                    j++;
                }
                else{
                    no_earn = true;
                }
             }

            if(!no_earn){
                count++;
            }
        }
        
    }

    printf("%d\n", count);

    return 0;
}