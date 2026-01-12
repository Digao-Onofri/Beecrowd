/*
    Name: Area of a Circle
    Link: https://judge.beecrowd.com/en/problems/view/1002
*/

#include <stdio.h>
#include <math.h>
 
int main() {
    double pi = 3.14159;
    double radius, area;
    
    scanf("%lf", &radius);
    area = pi * pow(radius, 2);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}