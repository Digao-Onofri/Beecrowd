/*
    Name: Coffee Machine
    Link: https://judge.beecrowd.com/en/problems/view/2670
*/

#include <stdio.h>

int main(){
    int floor1, floor2, floor3;
    int time1, time2, time3;

    scanf("%d %d %d", &floor1, &floor2, &floor3);

    time1 = floor2 * 2 + floor3 * 4;
    time2 = floor1 * 2 + floor3 * 2;
    time3 = floor1 * 4 + floor2 * 2;

    if(time1 <= time2 && time1 <= time3){
        printf("%d\n", time1);
    }
    else if(time2 <= time1 && time2 <= time3){
        printf("%d\n", time2);
    }
    else if(time3 <= time1 && time3 <= time2){
        printf("%d\n", time3);
    }

    return 0;
}