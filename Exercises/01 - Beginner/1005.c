/*
    Name: Average
    Link: https://judge.beecrowd.com/en/problems/view/1005
*/

#include <stdio.h>

int main(){
    double a, b, average;

    scanf("%lf %lf", &a, &b);

    average = (a * 3.5 + b * 7.5) / 11.0;

    printf("MEDIA = %.5lf\n", average);

}
