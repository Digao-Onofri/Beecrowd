/*
    Name: Array Hash
    Link: https://judge.beecrowd.com/en/problems/view/1257
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N, lines, result;
    int i, j;
    char string[50];

    scanf("%d", &N);

    while(N--){
        result = 0;
        scanf("%d", &lines);

        for(i = 0; i < lines; i++){
            scanf(" %s", string);
            for(j = 0; j < strlen(string); j++){
                result += ((int)string[j] - 65) + i + j;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}