/*
    Name: Fire Flowers
    Link: https://judge.beecrowd.com/en/problems/view/1039
*/

#include <stdio.h>
#include <math.h>

int main(){
    int R1, X1, Y1, R2, X2, Y2;
    int distance;

    while(scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF){
        
        distance = sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));

        if(distance + R2 < R1){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }

    }

    return 0;
}