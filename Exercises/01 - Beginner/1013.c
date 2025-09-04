/*
    Name: The Greatest
    Link: https://judge.beecrowd.com/en/problems/view/1013
*/

#include <stdio.h>

int main(){
    int values[3], aux, i, j;

    scanf("%d %d %d", &values[0], &values[1], &values[2]);

    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++){
            if(values[i] > values[j]){
                aux = values[i];
                values[i] = values[j];
                values[j] = aux;
            }   
        }
    }

    printf("%d eh o maior\n", values[2]);

    return 0;
}