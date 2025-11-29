/*
    Name: Huaauhahhuahau
    Link: https://judge.beecrowd.com/en/problems/view/2242
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int vowel(char character){
    switch(character){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':   return 1;
        default:    return 0;
    }
}

int main(){
    char laughter[51];
    int i, j;
    bool funniest = true;

    scanf("%s", laughter);

    i = 0;
    j = strlen(laughter) - 1;
    while(i < j){
        
        if(vowel(laughter[i]) && vowel(laughter[j])){
            if(laughter[j] != laughter[i]){
                funniest = false;
                break;
            }
            i++;
            j--;
        }
        else{
            if(!vowel(laughter[i])){
                i++;
            }   
            if(!vowel(laughter[j])){
                j--;
            } 
        }
    }

    if(funniest){
        printf("S\n");
    } else{
        printf("N\n");
    }

    return 0;
}