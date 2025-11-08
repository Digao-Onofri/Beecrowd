/*
    Name: Even numbers
    Link: https://judge.beecrowd.com/en/problems/view/1059
*/

#include <stdio.h>

int main(){
    int i = 1;

    while(i <= 100){
        if(i % 2 == 0){    
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}