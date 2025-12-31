/*
    Name: Sum of Consecutive Odd Numbers II
    Link: https://judge.beecrowd.com/en/problems/view/1101
    wrong answer (10%)
*/

#include <stdio.h>

int main(){
    int x, y, sum, aux;

    while(scanf("%d %d", &x, &y)){  
        if(x == 0 || y == 0){
            break;
        }

        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }

        sum = 0;
        while(x <= y){
            sum+= x;
            printf("%d ", x);
            x++;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}