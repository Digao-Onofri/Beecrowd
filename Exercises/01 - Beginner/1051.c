/*
    Name: Taxes
    Link: https://judge.beecrowd.com/en/problems/view/1051
*/

#include <stdio.h>

int main(){
    double salary;

    scanf("%lf", &salary);

    if(salary <= 2000.00){
        printf("Isento\n");
    } else if(salary <= 3000.00){
        printf("R$ %.2lf\n", (((salary - 2000.00) * 8) / 100));
    } else if(salary <= 4500.00){
        printf("R$ %.2lf\n", (((salary - 2000.00 - (salary - 3000.0)) * 8) / 100) + (((salary - 3000.00) * 18) / 100));
    } else {
        printf("R$ %.2lf\n", (((salary - 2000.00 - (salary - 3000.0)) * 8) / 100) + (((salary - 3000.00 - (salary - 4500)) * 18) / 100) + (((salary - 4500.00) * 28) / 100));
    }

    return 0;
}