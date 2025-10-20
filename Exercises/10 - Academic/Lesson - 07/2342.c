/*
    Name: Overflow
    Link: https://judge.beecrowd.com/en/problems/view/2342
*/

#include <stdio.h>

int main(){
    long long int overflow;
    int first, second;
    char operator;

    scanf("%lld %d %c %d", &overflow, &first, &operator, &second);

    if(operator == '+'){
        if(first + second <= overflow){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else{
        if(first * second <= overflow){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}