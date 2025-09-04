/*
    Name: Sphere
    Link: https://judge.beecrowd.com/en/problems/view/1011
*/

#include <stdio.h>
#include <math.h>

int main(){
    double radius, pi = 3.14159;
    double volume;

    scanf("%lf", &radius);

    volume = (4.0/3) * pi * pow(radius, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}