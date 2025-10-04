/*
    Name: Flavious Josephus Legend
    Link: https://judge.beecrowd.com/en/problems/view/1030
*/

#include <stdio.h>

int remained(int qtd, int step){
    if(qtd == 1)  return 0;
    return (remained(qtd - 1, step) + step) % qtd;
}

int main(){
    int i = 1, N, qtd, step;

    scanf("%d", &N);

    while(i <= N){
        scanf("%d %d", &qtd, &step);

        printf("Case %d: %d\n", i, remained(qtd, step) + 1);

        i++;
    }

    return 0;
}