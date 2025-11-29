/*
    Name: Fast Prime Number
    Link: https://judge.beecrowd.com/en/problems/view/1221
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int cases, i;
    long long int prime;
    bool isprime;

    scanf("%d", &cases);

    while(cases--){
        scanf("%lld", &prime);
        isprime = true;

        for(i = 2; i < sqrt(prime); i++){
            if(prime % i == 0){
                isprime = false;
                break;
            }
        }

        if(isprime){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }


    return 0;
}