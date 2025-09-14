/*
    Name: Prime Number
    Link: https://judge.beecrowd.com/en/problems/view/1165
*/

#include <stdio.h>

int main(){
    int cases, control;
    int prime, i;

    scanf("%d", &cases);

    while(cases--){
        control = 0;
        scanf("%d", &prime);

        for(i = 2; i < prime; i++){
            if(prime % i == 0){
                control++;
            }
        }

        if(control >= 1){
            printf("%d nao eh primo\n", prime);
        }
        else{
            printf("%d eh primo\n", prime);
        }
    }

    return 0;
}