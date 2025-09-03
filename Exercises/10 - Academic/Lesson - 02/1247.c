/*
    Name: Coast Guard
    Link: https://judge.beecrowd.com/en/problems/view/1247
*/

#include <stdio.h>
#include <math.h>

int main(){
    int distance, guard_speed, runaway_speed;

    while(scanf("%d %d %d", &distance, &runaway_speed, &guard_speed) != EOF){
        if(sqrt(144 + distance * distance) / guard_speed <= 12.0 / runaway_speed){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}