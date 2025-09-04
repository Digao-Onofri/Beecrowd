/*
    Name: Salary with Bonus
    Link: https://judge.beecrowd.com/en/problems/view/1009
*/

#include <stdio.h>

int main(){
    double sales, salary;
    char name[40];

    scanf("%s %lf %lf", name, &salary, &sales);

    printf("TOTAL = R$ %.2lf\n", salary + (sales * 0.15));

    return 0;
}