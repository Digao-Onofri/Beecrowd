/*
    Name: Rock-paper-scissors-lagarto-Spock
    Link: https://judge.beecrowd.com/en/problems/view/1873
*/

#include <stdio.h>
#include <string.h>

char* jogadas[5] = {"pedra", "papel", "tesoura", "lagarto", "spock"};
int regras[5][5] = {
    {0, -1, 1, 1, -1},
    {1, 0, -1, -1, 1},
    {-1, 1, 0, 1, -1},
    {-1, 1, -1, 0, 1},
    {1, -1, 1, -1, 0}
};

int converte(char *jogada){
    int i;
    for(i = 0; i < 5; i++){
        if(!strcmp(jogada, jogadas[i])){
            return i;
        }
    }
}

int main(){
    int cases, raj, she;
    char rajesh[11], sheldon[11];

    scanf("%d", &cases);    

    while(cases--){
        scanf("%s %s\n", rajesh, sheldon);

        raj = converte(rajesh);
        she = converte(sheldon);

        if(regras[raj][she] == -1){
            printf("sheldon\n");
        }
        else if(regras[raj][she] == 0){
            printf("empate\n");
        }
        else{
            printf("rajesh\n");
        }
        
    }

    return 0;
}