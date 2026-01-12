/*
    Name: OBI URI
    Link: https://judge.beecrowd.com/en/problems/view/2062
*/

#include <stdio.h>
#include <string.h>

int main(){
    int cases, control;
    char word[21];
    char uri[4] = "URI";
    char obi[4] = "OBI";
    char aux;

    scanf("%d", &cases);
    control = cases;

    while(cases--){
        scanf(" %s", word);
        aux = word[2];
        word[2] = 'I';

        if(strcmp(word, uri) == 0 || strcmp(word, obi) == 0){
            if(cases == 0){
                printf("%s\n", word);
            }
            else{
                printf("%s ", word);
            }
        }
        else{
            word[2] = aux;
            if(cases == 0){
                printf("%s\n", word);
            }
            else{
                printf("%s ", word);
            }
        }
    }

    return 0;
}