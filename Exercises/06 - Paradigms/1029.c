/*
    Name: Fibonacci, How Many Calls?
    Link: https://judge.beecrowd.com/en/problems/view/1029
*/

#include <stdio.h>

Fibonacci(int value, int *count){
    *count = *count + 1;
    if(value == 0){
        return 0;
    }
    if(value == 1){
        return 1;
    }

    return Fibonacci(value - 1, count) + Fibonacci(value - 2, count);
}

int main(){
    int cases, answer, value, count;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &value);
        count = 0;
        answer = Fibonacci(value, &count);

        printf("fib(%d) = %d calls = %d\n", value, count - 1, answer);
    }

    return 0;
}