/*
    Name: Sequence IJ 3
    Link: https://judge.beecrowd.com/en/problems/view/1097
*/

#include <stdio.h>

int main(){
    int i, j, count;

    j = 7;
    for(i = 1; i <= 9; i+=2){
        count = 3; 
        while(count--){
            printf("I=%d J=%d\n", i, j);
            j--;
        }   
        j+=3;
    }

    return 0;
}