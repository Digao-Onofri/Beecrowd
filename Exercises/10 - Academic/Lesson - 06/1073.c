/*
    Name: Even Square
    Link: https://judge.beecrowd.com/en/problems/view/1073
*/

#include <stdio.h>

int main(){
    int number, i;

    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        //If the last significant bit 
        //is 1 it is an odd number
        if(!(i & 0x1)){ 
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    return 0;
}