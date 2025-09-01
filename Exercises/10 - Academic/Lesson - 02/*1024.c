/*
    Name: Encryption
    Link: https://judge.beecrowd.com/en/problems/view/1024
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, i, j;
    char stringa[1000];
    char aux[1000];

    scanf("%d", &N);

    while(N--){
        scanf(" %[^\n]", stringa);
        
        for(i = 0; i < strlen(stringa); i++){
            if(isupper(stringa[i]) || islower(stringa[i])){
                stringa[i] = (char)((int)stringa[i] + 3); 
            }
        }

        // if(strlen(stringa) % 2 == 1){
        //     for(i = strlen(aux) / 2; i < strlen(aux); i++){
        //         stringa[i] = (char)((int)stringa[i] - 3);
        //     }
        // }

        j = 0;
        for(i = strlen(stringa) - 1; i >= 0; i--){
            aux[j] = stringa[i];
            j++;
        }

        for(i = strlen(aux) / 2; i < strlen(aux); i++){
            aux[i] = (char)((int)aux[i] - 1);
        }

        printf("%s\n", aux);
        
    }

    return 0;
}