/*
    Name: Triangle
    Link: https://judge.beecrowd.com/en/problems/view/1043
*/

#include <stdio.h>

int triangle(double a, double b, double c){
    return a + b > c && a + c > b && b + c > a;
}

int main(){ 
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    if(triangle(a, b, c)){
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else{
        printf("Area = %.1lf\n", ((a + b) * c) / 2.0);
    }

    
    return 0;
}