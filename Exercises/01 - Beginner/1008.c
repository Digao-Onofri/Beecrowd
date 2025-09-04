/*
    Name: Salary
    Link: https://judge.beecrowd.com/en/problems/view/1008
*/

#include <stdio.h>

int main(){
    int number, hours;
    double amount;

    scanf("%d %d %lf", &number, &hours, &amount);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, amount * hours);

    return 0;
}