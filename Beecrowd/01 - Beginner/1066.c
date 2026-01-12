/*
    Name: Even, Odd, Positive and Negative
    Link: https://judge.beecrowd.com/en/problems/view/1066
*/

#include <stdio.h>

int main(){
    int even, odd;
    int positive, negative;
    int number, cases = 5;

    even = odd = positive = negative = 0;
    while(cases--){
        scanf("%d", &number);

        if(number % 2 == 0){
            even++;
        } else{
            odd++;
        }

        if(number > 0){
            positive++;
        } else if(number < 0){
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}