/*
    Name: Caesar Cipher
    Link: https://judge.beecrowd.com/en/problems/view/1253
*/

#include <stdio.h>
#include <string.h>

int main(){
    char phrase[51];
    int cases, shift, i;

    scanf("%d", &cases);

    while(cases--){
        scanf(" %s", phrase);
        scanf("%d", &shift);

        for(i = 0; i < strlen(phrase); i++){
            phrase[i] = phrase[i] - shift;
            if(phrase[i] < 'A'){
                phrase[i] += 26;
            }
        }
        printf("%s\n", phrase);
    }

    return 0;
}