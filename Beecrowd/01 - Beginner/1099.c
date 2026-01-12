/*
    Name: Sum of Consecutive Odd Numbers II
    Link: https://judge.beecrowd.com/en/problems/view/1099
*/

#include <stdio.h>

int main(){
    int cases, x, y;
    int sum, aux;

    scanf("%d", &cases);

    while(cases--){
        sum = 0;
        scanf("%d %d", &x, &y);

        if(x > y){
            aux = y;
            y = x;
            x = aux;
        }

        while(x + 1 < y){
            x++;
            if(x % 2 != 0){
                sum += x;
            }
        }

        printf("%d\n", sum);

    }

    return 0;
}