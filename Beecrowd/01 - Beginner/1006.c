/*
    Name: Average 2
    Link: https://judge.beecrowd.com/en/problems/view/1006
*/

#include <stdio.h>

int main(){
    double gradeA, gradeB, gradeC, average;

    scanf("%lf %lf %lf", &gradeA, &gradeB, &gradeC);

    average = ((gradeA * 2) + (gradeB * 3) + (gradeC * 5)) / 10.0;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}