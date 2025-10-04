/*
    Name: Tire
    Link: https://judge.beecrowd.com/en/problems/view/2374
*/

#include <stdio.h>

int main (){
    int driver_pressure, pump_pressure;

    scanf("%d %d", &driver_pressure, &pump_pressure);

    printf("%d\n", driver_pressure - pump_pressure);

    return 0;
}