/*
    Name: Digits
    Link: https://judge.beecrowd.com/en/problems/view/2867
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, m, cases;
    int count;
    long unsigned int value;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d", &n, &m);

        value = pow(n, m);
        printf("%d\n", value);
        count = 0;
        while(value > 0){
            value = value / 10;
            count++;
        }

        printf("%d\n", count);
    }
    
    return 0;   
}