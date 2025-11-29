/*
    Name: Shirt lambda
    Link: https://judge.beecrowd.com/en/problems/view/3036
*/

#include <stdio.h>
#include <math.h>

#define C 300000000.0
#define LAMBDA0 495.0

int main() {
    double speed, lambda;

    scanf("%lf", &speed);

    if(speed >= 0){
        lambda = LAMBDA0 * sqrt((C - speed) / (double) (C + speed)); // approaching
    }
    else{
        lambda = LAMBDA0 * sqrt((C + speed) /(double) (C - speed)); 
    }
    // printf("%.9lf debug\n", lambda);

    if(lambda < 400 || lambda >= 750){ 
        printf("invisivel\n"); 
    } else if(lambda >= 400 && lambda < 425){ 
        printf("violeta\n"); 
    } else if(lambda >= 425 && lambda < 445){ 
        printf("anil\n"); 
    } else if(lambda >= 445 && lambda < 500){ 
        printf("azul\n"); 
    } else if(lambda >= 500 && lambda < 575){ 
        printf("verde\n"); 
    } else if(lambda >= 575 && lambda < 585){ 
        printf("amarelo"); 
    } else if(lambda >= 585 && lambda < 620){ 
        printf("laranja\n"); 
    } else{ 
        printf("vermelho\n"); 
    }

    return 0;
}
