/*
    Name: Huaauhahhuahau
    Link: https://judge.beecrowd.com/en/problems/view/2242
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char laughter[51], vowels[51];
    int i, j;
    bool funniest = true;

    scanf(" %s", laughter);

    j = 0;
    for(i = 0; i < strlen(laughter); i++){
        if(laughter[i] == 'a' || laughter[i] == 'e' || laughter[i] == 'i' || laughter[i] == 'o' || laughter[i] == 'u'){
            vowels[j] = laughter[i];
            j++;
        }
    }

    i = 0;
    j = strlen(vowels) - 1;
    while(i <= strlen(vowels) && j >= strlen(vowels) / 2){
        if(vowels[i] != vowels[j]){
            funniest = false;
            break;
        }
        i++;
        j--;
    }

    if(funniest){
        printf("S\n");
    } else{
        printf("N\n");
    }

    return 0;
}