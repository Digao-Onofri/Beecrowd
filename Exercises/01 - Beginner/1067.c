/*
    Name: Odd Numbers
    Link: https://judge.beecrowd.com/en/problems/view/1067
*/

#include <stdio.h>

int main(){
    int number;
    int i;

    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}