/*
    Name: Salary Increase
    Link: https://judge.beecrowd.com/en/problems/view/1048
*/

#include <stdio.h>

int main(){
    double salary;

    scanf("%lf", &salary);

    if(salary <= 400.00){
        printf("Novo salario: %.2lf\n", (salary * 115) / 100);
        printf("Reajuste ganho: %.2lf\n", (salary * 15) / 100);
        printf("Em percentual: 15 %%\n");
    } else if(salary <= 800.00){
        printf("Novo salario: %.2lf\n", (salary * 112) / 100);
        printf("Reajuste ganho: %.2lf\n", (salary * 12) / 100);
        printf("Em percentual: 12 %%\n");
    } else if(salary <= 1200.00){
        printf("Novo salario: %.2lf\n", (salary * 110) / 100);
        printf("Reajuste ganho: %.2lf\n", (salary * 10) / 100);
        printf("Em percentual: 10 %%\n");
    } else if(salary <= 2000.00){
        printf("Novo salario: %.2lf\n", (salary * 107) / 100);
        printf("Reajuste ganho: %.2lf\n", (salary * 7) / 100);
        printf("Em percentual: 7 %%\n");
    } else{
        printf("Novo salario: %.2lf\n", (salary * 104) / 100);
        printf("Reajuste ganho: %.2lf\n", (salary * 4) / 100);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}