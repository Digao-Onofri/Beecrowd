/*
    Name: Six Odd Numbers
    Link: https://judge.beecrowd.com/en/problems/view/1070
*/

#include <stdio.h>

int main(){
    int number;
    int count = 0;

    scanf("%d", &number);

    while(count != 6){
        if(number % 2 != 0){
            printf("%d\n", number);
            count++;
        }
        number++;
    }
    return 0;
}