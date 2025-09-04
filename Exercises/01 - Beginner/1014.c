/*
    Name: Consumption
    Link: https://judge.beecrowd.com/en/problems/view/1014
*/

#include <stdio.h>

int main(){
    int distance;
    double fuel;

    scanf("%d %lf", &distance, &fuel);

    printf("%.3lf km/l\n", distance / fuel);

    return 0;
}