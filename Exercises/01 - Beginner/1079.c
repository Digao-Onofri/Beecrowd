/*
    Name: Multiplication Table
    Link: https://judge.beecrowd.com/en/problems/view/1078
*/

#include <stdio.h>

int main(){
    int cases;
    double n1, n2, n3;
    double average;

    scanf("%d", &cases);

    while(cases--){
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        average = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
        printf("%.1lf\n", average);
    }

    return 0;
}