/*
    Name: Even Between five Numbers
    Link: https://judge.beecrowd.com/en/problems/view/1065
*/

#include <stdio.h>

int main(){
    int numbers;
    int cases = 5;
    int count = 0;

    while(cases--){
        scanf("%d", &numbers);

        if(numbers % 2 == 0){
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}