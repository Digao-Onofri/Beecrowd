/*
    Name: Man, Elephant and Mouse
    Link: https://judge.beecrowd.com/en/problems/view/1477
    Time limit exceeded
*/

#include <stdio.h>
#include <string.h>
#define N 100010
int main(){
    int players, operations;
    int aux[N], i, j;
    int man, elephant, mouse;
    char operation;

    while(scanf("%d %d", &players, &operations) != EOF){
        memset(aux, 0, sizeof(aux));
        while(operations--){
            scanf(" %c %d %d", &operation, &i, &j);
            man = elephant = mouse = 0;
            if(operation == 'C'){
                while(i <= j){
                    if(aux[i] == 0){
                        man++;
                    } else if(aux[i] == 1){
                        elephant++;
                    } else{
                        mouse++;
                    }
                    i++;
                }
                printf("%d %d %d\n", man, elephant, mouse);
            }
            else{
                while(i <= j){
                    if(aux[i] + 1 == 3){
                        aux[i] = 0;
                    }
                    else{
                        aux[i]++;
                    }
                    i++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}