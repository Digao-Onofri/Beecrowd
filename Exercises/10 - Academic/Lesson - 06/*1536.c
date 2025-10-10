/*
    Name: Libertadores
    Link: https://judge.beecrowd.com/en/problems/view/1536
    Wrong answer(35%)
*/

#include <stdio.h>

int main(){
    int cases, score1, score2;
    int sum1, sum2, i;

    scanf("%d", &cases);

    while(cases--){

        sum1 = sum2 = 0;

        for(i = 0; i < 2; i++){
            if(i == 0){
                scanf("%d x %d", &score1, &score2);
            }
            else{
                scanf("%d x %d", &score2, &score1);
            }

            sum1 += score1;
            sum2 += score2;
        }

        if(sum1 == sum2){
            printf("Penaltis\n");
        }
        else if(sum1 > sum2){
            printf("Time 1\n");
        }
        else{
            printf("Time 2\n");
        }
    }

    return 0;
}