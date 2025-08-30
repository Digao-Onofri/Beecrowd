/*
    Name: Fuel Spent
    Link: https://judge.beecrowd.com/en/problems/view/1017
*/

#include <stdio.h>

int main(){
    int time, speed;
    float dist, liters;

    scanf("%d %d", &time, &speed);

    dist = speed * time;

    liters = dist / 12;

    printf("%.3f\n", liters);

    return 0;
}