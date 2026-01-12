/*
    Name: Coding Competition
    Link: https://judge.beecrowd.com/en/problems/view/3106
*/

#include <stdio.h>

int main(){
    int i, N, students, max;

    scanf("%d", &N);

    max = 0;
    for(i = 0; i < N; i++){
        scanf("%d", &students);
        max += students - (students % 3);
    }

    printf("%d\n", max);
    
    return 0;
}