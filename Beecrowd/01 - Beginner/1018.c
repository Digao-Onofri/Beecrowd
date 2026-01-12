/*
    Name: Banknotes
    Link: https://judge.beecrowd.com/en/problems/view/1018
*/

#include <stdio.h>

int main(){
    int N, aux, qtd_100, qtd_50, qtd_20;
    int qtd_10, qtd_5, qtd_2, qtd_1;

    scanf("%d", &N);
    aux = N;

    qtd_100 = N / 100;
    N = N % 100;
    qtd_50 = N / 50;
    N = N % 50;    
    qtd_20 = N / 20;
    N = N % 20;    
    qtd_10 = N / 10;
    N = N % 10;
    qtd_5 = N / 5;
    N = N % 5;
    qtd_2 = N / 2;
    N = N % 2;
    qtd_1 = N / 1;

    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", qtd_100);
    printf("%d nota(s) de R$ 50,00\n", qtd_50);
    printf("%d nota(s) de R$ 20,00\n", qtd_20);
    printf("%d nota(s) de R$ 10,00\n", qtd_10);
    printf("%d nota(s) de R$ 5,00\n", qtd_5);
    printf("%d nota(s) de R$ 2,00\n", qtd_2);
    printf("%d nota(s) de R$ 1,00\n", qtd_1);

    return 0;
}