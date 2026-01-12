/*
    Name: Feynman
    Link: https://judge.beecrowd.com/en/problems/view/1323
*/

#include <stdio.h>

int main(){
    int squares, amount;

    scanf("%d", &squares);

    while(squares != 0){
        
        amount = 0;
        while(squares > 0){
            amount += squares * squares;
            squares--;
        }
        
        printf("%d\n", amount);
        scanf("%d", &squares);       
    }

    return 0;
}