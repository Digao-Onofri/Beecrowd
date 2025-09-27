/*
    Name: Blobs
    Link: https://judge.beecrowd.com/en/problems/view/1170
*/

#include <stdio.h>

int main(){
    int cases, days;
    double food;

    scanf("%d", &cases);

    while(cases--){
        days = 0;
        scanf("%lf", &food);

        while(food > 1){
            food = food / 2;
            days++;
        }

        printf("%d dias\n", days);

    }

    return 0;
}