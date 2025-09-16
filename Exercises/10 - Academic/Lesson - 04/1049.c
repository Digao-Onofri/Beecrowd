/*
    Name: Animal
    Link: https://judge.beecrowd.com/en/problems/view/1049
*/

#include <stdio.h>
#include <string.h>

int main(){
    char word1[13], word2[13], word3[13];
    char vertebrado[] = "vertebrado";
    char carnivoro[] = "carnivoro";
    char ave[] = "ave";
    char onivoro[] = "onivoro";
    char inseto[] = "inseto";
    char hematofago[] = "hematofago";

    scanf(" %s", word1);
    scanf(" %s", word2);
    scanf(" %s", word3);

    if(strcmp(word1, vertebrado) == 0){
        if(strcmp(word2, ave) == 0){
            if(strcmp(word3, carnivoro) == 0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(strcmp(word3, onivoro) == 0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(strcmp(word2, inseto) == 0){
            if(strcmp(word3, hematofago) == 0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(word3, hematofago) == 0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
