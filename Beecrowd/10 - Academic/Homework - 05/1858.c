/*
    Name: Theon's Answer
    Link: https://judge.beecrowd.com/en/problems/view/1858
*/

#include <stdio.h>

int main(){
    int cases, answer = 1;
    int numbers, lowest, i;

    scanf("%d", &cases);
    scanf("%d", &numbers);
    lowest = numbers;

    for(i = 0; i < cases; i++){
        scanf("%d", &numbers);
        if(numbers < lowest){
            lowest = numbers;
            answer = i + 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}