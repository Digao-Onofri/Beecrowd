/*
    Name: Fire Flowers
    Link: https://judge.beecrowd.com/en/problems/view/1039
*/

#include <stdio.h>
#include <math.h>

int main(){
    int R1, X1, Y1, R2, X2, Y2;
    

    while(scanf("%d %d %d %d %d %d", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF){
        X1 = fabs(X1);
        Y1 = fabs(Y1);
        X2 = fabs(X2);
        
        if(fabs(X1 - X2) > R1 || fabs(Y1 - Y2) > R1 || R2 >= R1){
            printf("MORTO\n");
        }
        else{
            printf("RICO\n");
        }

    }

    return 0;
}