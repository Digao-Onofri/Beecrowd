/*
    Name: Simple Calculate
    Link: https://judge.beecrowd.com/en/problems/view/1010
*/

#include <stdio.h>
int main(){
    int code, amount, N = 2;
    double price, value = 0;

    while(N--){
        scanf("%d %d %lf", &code, &amount, &price);
        value += amount * price;    
    }

    printf("VALOR A PAGAR: R$ %.2lf\n", value);

    return 0;
}