/*
    Name: Diamonds and Sand
    Link: https://judge.beecrowd.com/en/problems/view/1069
*/

#include <stdio.h>
#include <string.h>

int main (){
    char expression[1001];
    int cases, diamonds, lgthan, i;

    scanf("%d", &cases);
    while(cases--){

        diamonds = lgthan = 0;
        scanf(" %s", expression);

        for(i = 0; i < strlen(expression); i++){
            if(expression[i] == '<'){
                lgthan++;
            }
            else if(expression[i] == '>' && lgthan > 0){
                lgthan--;
                diamonds++;
            }
        }

        printf("%d\n", diamonds);
    }

    return 0;
}