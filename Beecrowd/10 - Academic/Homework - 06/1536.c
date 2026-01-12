/*
    Name: Libertadores
    Link: https://judge.beecrowd.com/en/problems/view/1536
*/

#include <stdio.h>

int main(){
    int cases, score1, score2;
    int victory1, victory2;

    scanf("%d", &cases);

    while(cases--){


        scanf("%d x %d", &score1, &victory2);
        scanf("%d x %d", &score2, &victory1);


        if(score1 + victory1 == score2 + victory2){
            if(victory1 == victory2){
                printf("Penaltis\n");
            }
            else if(victory1 > victory2){
                printf("Time 1\n");
            }
            else{
                printf("Time 2\n");
            }
        }
        else if(score1 + victory1 > score2 + victory2){
            printf("Time 1\n");
        }
        else{
            printf("Time 2\n");
        }
    }

    return 0;
}