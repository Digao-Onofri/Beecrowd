/*
    Name: Coordinates of a Point
    Link: https://judge.beecrowd.com/en/problems/view/1041
*/

#include <stdio.h>

int main(){
    double x, y;

    scanf("%lf %lf", &x, &y);

    if(x == 0 || y == 0){
        if(x == 0 && y == 0){
            printf("Origem\n");
        }
        else if(x == 0){
            printf("Eixo Y\n");
        }
        else{
            printf("Eixo X\n");
        }
    }   
    else if(y > 0){
        if(x > 0){
            printf("Q1\n");
        }
        else{
            printf("Q2\n");
        }
    }
    else{        
        if(x > 0){
            printf("Q4\n");
        }
        else{
            printf("Q3\n");
        }
    }

    return 0;
}