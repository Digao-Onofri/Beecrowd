/*
    Name: Old Clock
    Link: https://judge.beecrowd.com/en/problems/view/3084
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> clock_hours;
    map<int, int> clock_minutes;
    int hours, minutes, final_minutes = 0;

    clock_hours[0] = 0;
    clock_hours[30] = 1;
    clock_hours[60] = 2;
    clock_hours[90] = 3;
    clock_hours[120] = 4;
    clock_hours[150] = 5;
    clock_hours[180] = 6;
    clock_hours[210] = 7;
    clock_hours[240] = 8;
    clock_hours[270] = 9;
    clock_hours[300] = 10;
    clock_hours[330] = 11;

    clock_minutes[6] = 1;
    clock_minutes[12] = 2;
    clock_minutes[18] = 3;
    clock_minutes[24] = 4;
    clock_minutes[30] = 5;

    while(scanf("%d %d", &hours, &minutes) != EOF){
        hours = clock_hours[hours];
        final_minutes = (minutes / 30) * 5;
        final_minutes += clock_minutes[minutes % 30];

        if(hours < 10){
            if(final_minutes < 10){
                printf("0%d:0%d\n", hours, final_minutes);
            }
            else{
                printf("0%d:%d\n", hours, final_minutes);
            }
        }
        else{
            if(final_minutes < 10){
                printf("%d:0%d\n", hours, final_minutes);
            }
            else{
                printf("%d:%d\n", hours, final_minutes);
            }
        }
    }

    return 0;
}