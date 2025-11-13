/*
    Name: Multiplication Table
    Link: https://judge.beecrowd.com/en/problems/view/1078
*/

#include <stdio.h>

int main(){
    int i, number;

    scanf("%d", &number);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, number, i * number);
    }

    return 0;
}