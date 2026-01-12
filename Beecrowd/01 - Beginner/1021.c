/*
    Name: Banknotes and Coins
    Link: https://judge.beecrowd.com/en/problems/view/1017
*/

#include <stdio.h>
#include <math.h> 

int main(){

    double N;
    int qtd_100, qtd_50, qtd_20;
    int qtd_10, qtd_5, qtd_2;
    int qtd_1, qtd_050, qtd_025;
    int qtd_010, qtd_005, qtd_001;

    scanf("%lf", &N);

    //Banknotes
    qtd_100 = N / 100;
    N -= qtd_100 * 100;
    qtd_50 = N / 50;
    N -= qtd_50 * 50;
    qtd_20 = N / 20;
    N -= qtd_20 * 20;
    qtd_10 = N / 10;
    N -= qtd_10 * 10;
    qtd_5 = N / 5;
    N -= qtd_5 * 5;
    qtd_2 = N / 2;
    N -= qtd_2 * 2;

    //Coins
    qtd_1 = N / 1;
    N -= qtd_1 * 1;
    qtd_050 = N / 0.50;
    N -= qtd_050 * 0.50;
    qtd_025 = N / 0.25;
    N -= qtd_025 * 0.25;
    qtd_010 = N / 0.10;
    N -= qtd_010 * 0.10;
    qtd_005 = N / 0.05;
    N -= qtd_005 * 0.05;
    qtd_001 = N / 0.01;
    N -= qtd_001 * 0.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", qtd_100, qtd_50, qtd_20, qtd_10, qtd_5, qtd_2);

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", qtd_1, qtd_050, qtd_025, qtd_010, qtd_005, qtd_001);

    return 0;
}