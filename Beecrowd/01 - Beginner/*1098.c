/*
    Name: Sequence IJ 3
    Link: https://judge.beecrowd.com/en/problems/view/1098
    wrong answer (65%)
*/

#include <stdio.h>

int main(){
    int count;
    double i, j;

    j = 1;
    for(i = 0; i <= 2.0; i+=0.2){
        count = 3; 
        while(count--){
            if(i == (int) i){
                printf("I=%.0f J=%.0f\n", i, j);
            } else{
                printf("I=%.1f J=%.1f\n", i, j);
            }
            j++;
        }   
        j-=1.8;
    }

    return 0;
}