/*
    Name: Triangle
    Link: https://judge.beecrowd.com/en/problems/view/1929
*/

#include <stdio.h>
int main(){
    int possible, j, aux, i, sides[4];

    for(i = 0; i < 4; i++){
        scanf("%d", &sides[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
            if(sides[i] > sides[j]){
                aux = sides[i];
                sides[i] = sides[j];
                sides[j] = aux;
            }
        }
    }

    if(sides[0] + sides[1] > sides[2] || sides[1] + sides[2] > sides[3]){
        possible = 1;
    }
    else{
        possible = 0;
    }

    printf("%c\n", possible ? 'S' : 'N');

    return 0;
}