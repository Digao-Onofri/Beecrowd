/*
    Name: Perfect Number
    Link: https://judge.beecrowd.com/en/problems/view/1164
*/

#include <stdio.h>

int main(){
    int i, N, integer, sum;

    scanf("%d", &N);

    while(N--){
        sum = 0;
        scanf("%d", &integer);
        
        for(i = 1; i < integer; i++){
            if(integer % i == 0){
                sum += i;
            }
        }
        if(sum == integer){
            printf("%d eh perfeito\n", integer);
        }
        else{
            printf("%d nao eh perfeito\n", integer);
        }
    }

    return 0;
}