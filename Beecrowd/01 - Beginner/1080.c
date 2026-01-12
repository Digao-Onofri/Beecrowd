/*
    Name: Highest and Position
    Link: https://judge.beecrowd.com/en/problems/view/1080
*/

#include <stdio.h>

int main(){
    int i, number;
    int biggest, position;

    biggest = 0;
    for(i = 1; i <= 100; i++){
        scanf("%d", &number);
        if(number > biggest){
            biggest = number;
            position = i;
        }
    }

    printf("%d\n%d\n", biggest, position);

    return 0;
}