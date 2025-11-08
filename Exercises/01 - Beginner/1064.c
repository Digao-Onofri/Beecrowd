/*
    Name: Positives and Average
    Link: https://judge.beecrowd.com/en/problems/view/1064
*/

#include <stdio.h>

int main(){
    double numbers, average = 0;
    int cases = 6;
    int count = 0;

    while(cases--){
        scanf("%lf", &numbers);

        if(numbers > 0){
            average += numbers;
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1lf\n", average / count);

    return 0;
}