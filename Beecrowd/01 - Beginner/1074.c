/*
    Name: Even or Odd
    Link: https://judge.beecrowd.com/en/problems/view/1074
*/

#include <stdio.h>

int main(){
    int cases, number;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &number);
        if(number & 0x1){
            if(number > 0){
                printf("ODD POSITIVE\n");
            } else{
                printf("ODD NEGATIVE\n");
            }
        } else if(number > 0){
            printf("EVEN POSITIVE\n");
        } else if(number < 0){
            printf("EVEN NEGATIVE\n");
        } else{
            printf("NULL\n");
        }
    }

    return 0;
}