/*
    Name: Bhaskara's Formula
    Link: https://judge.beecrowd.com/en/problems/view/1036
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if(delta < 0 || a == 0){
        printf("Impossivel calcular\n");
    }
    else{
        x1 = (-1 * b + sqrt(delta)) / (2 * a);
        x2 = (-1 * b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
}