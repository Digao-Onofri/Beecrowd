/*
    Name: Game Time
    Link: https://judge.beecrowd.com/en/problems/view/1046
*/

#include <stdio.h>
#include <math.h>

int main(){
    int inicio, fim, total;

    scanf("%d %d", &inicio, &fim);

    if(inicio >= fim){
        total = (24 - inicio) + fim;
    }
    else{
        total = fabs(fim - inicio);
    }

    printf("O JOGO DUROU %d HORA(S)\n", total);

    return 0;
}