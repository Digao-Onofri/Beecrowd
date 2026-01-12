/*
    Name: Remaining 2
    Link: https://judge.beecrowd.com/en/problems/view/1075
*/

#include <stdio.h>

int main (){
    int integer, i;

    scanf("%d", &integer);

    for(i = 1; i <= 10000; i++){
        if(i % integer == 2){
            printf("%d\n", i);
        }
    }

    return 0;
}