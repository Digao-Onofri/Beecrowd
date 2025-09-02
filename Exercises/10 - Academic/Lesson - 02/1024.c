/*
    Name: Encryption
    Link: https://judge.beecrowd.com/en/problems/view/1024
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, i;
    char string[1000];
    char aux;

    scanf("%d", &N);

    while(N--){
        scanf(" %[^\n]", string);
        
        for(i = 0; i < strlen(string); ++i){
            if(isalpha(string[i])){
                string[i] += 3; 
            }
        }

        for(i = 0; i < strlen(string) / 2; i++){
            aux = string[i];
            string[i] = string[strlen(string) - 1 - i];
            string[strlen(string) - 1 - i] = aux;
        }

        for(i = strlen(string) / 2; i < strlen(string); ++i){
            string[i] -= 1;
        }

        printf("%s\n", string);
        
    }

    return 0;
}