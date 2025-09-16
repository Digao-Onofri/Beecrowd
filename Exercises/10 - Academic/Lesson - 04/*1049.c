/*
    Name: Animal
    Link: https://judge.beecrowd.com/en/problems/view/1049
*/

#include <stdio.h>

int main(){
    char word1[13], word2[13], word3[13];

    scanf("%s", word1);
    scanf(" %s", word2);
    scanf(" %s", word3);

    printf("%s", word1);
    if(word1 == 'vertebrado'){
        if(word2 == 'ave\n'){
            if(word3 == 'carnivoro\n'){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(word3 == 'onivoro\n'){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(word2 == 'inseto\n'){
            if(word3 == 'hematofago\n'){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(word3 == 'hematofago\n'){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
