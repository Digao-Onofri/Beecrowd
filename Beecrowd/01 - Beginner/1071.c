/*
    Name: Sum of Consecutive Odd Numbers I
    Link: https://judge.beecrowd.com/en/problems/view/1071
*/

#include <stdio.h>

int main(){
    int start, end, aux;
    int sum = 0, i;

    scanf("%d %d", &start, &end);

    if(end < start){
        aux = start;
        start = end;
        end = aux;
    }

    for(i = start + 1; i < end; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}