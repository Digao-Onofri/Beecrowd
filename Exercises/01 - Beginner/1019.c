/*
    Name: Time Conversion
    Link: https://judge.beecrowd.com/en/problems/view/1019
*/

#include <stdio.h>

int main(){
    int seconds, hours, minutes;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}