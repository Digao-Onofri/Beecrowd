/*
    Name: Positive numbers
    Link: https://judge.beecrowd.com/en/problems/view/1060
*/

#include <stdio.h>

int main(){
    double numbers;
    int cases = 6;
    int count = 0;

    while(cases--){
        scanf("%lf", &numbers);

        if(numbers > 0){
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}