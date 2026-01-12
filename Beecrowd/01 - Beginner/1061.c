/*
    Name: Event Time
    Link: https://judge.beecrowd.com/en/problems/view/1061
*/

#include <stdio.h>

int main(){
    int day1, hour1, min1, sec1;
    int day2, hour2, min2, sec2;
    int totalsec1, totalsec2;
    int totalsec;

    scanf("Dia %d\n", &day1);
    scanf("%d : %d : %d\n", &hour1, &min1, &sec1);
    scanf("Dia %d\n", &day2);
    scanf("%d : %d : %d", &hour2, &min2, &sec2);

    totalsec1 = 24 * 3600 * day1 + hour1 * 3600 + min1 * 60 + sec1;
    totalsec2 = 24 * 3600 * day2 + hour2 * 3600 + min2 * 60 + sec2;
    totalsec = totalsec2 - totalsec1;

    printf("%d dia(s)\n", totalsec / (24 * 3600));
    totalsec %= 24 * 3600;
    printf("%d hora(s)\n", totalsec / 3600);
    totalsec %= 3600;
    printf("%d minuto(s)\n", totalsec / 60);
    totalsec %= 60;
    printf("%d segundo(s)\n", totalsec);

    return 0;
}