/*
    Name: Leap Year or Not Leap Year and...
    Link: https://judge.beecrowd.com/en/problems/view/1279
    Wrong answer(15%)
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int year;
    bool ordinary = true;
    bool leap = false;

    while(scanf("%d", &year) != EOF){
        ordinary = true;
        leap = false;
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            printf("This is leap year.\n");
            ordinary = false;
            leap = true;
        }

        if(year % 15 == 0){
            printf("This is huluculu festival year.\n");
            ordinary = false;
        }

        if(year % 55 == 0 && leap == true){
            printf("This is bulukulu festival year.\n");
            ordinary = false;
        }

        if(ordinary == true){
            printf("This is an ordinary year.\n");
        }
        printf("\n");
    }

    return 0;
}