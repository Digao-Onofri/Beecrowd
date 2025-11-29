/*
    Name: Factorial Sum
    Link: https://judge.beecrowd.com/en/problems/view/1161
*/

#include <stdio.h>

int main(){
    long long int sum;
    long long int sum_M, sum_N;
    int i, M, N;

    while(scanf("%d %d", &M, &N) != EOF){

        sum = 0;
        sum_M = sum_N = 1;
        for(i = 1; i <= M; i++){
            sum_M *= i;
        }

        for(i = 1; i <= N; i++){
            sum_N *= i;
        }

        sum = sum_M + sum_N;

        printf("%lld\n", sum);
    }

    return 0;
}