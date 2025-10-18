/*
    Name: Leap Year or Not Leap Year and...
    Link: https://judge.beecrowd.com/en/problems/view/1279
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int extract_remainder(char *year, int number){
    int remainder = 0;

    for(int i = 0; i < strlen(year); i++){
        remainder = (remainder * 10 + (year[i] - '0')) % number;
    }

    return remainder;
}

int main(){
    char year[10010];
    bool ordinary = true;
    bool leap = false;
    bool first = true;

    while(scanf("%s", year) != EOF){
        if(!first){
            printf("\n");
        }
        first = false;

        ordinary = true;
        leap = false;
        if((extract_remainder(year, 4) == 0 && extract_remainder(year, 100) != 0) || extract_remainder(year, 400) == 0){
            printf("This is leap year.\n");
            ordinary = false;
            leap = true;
        }

        if(extract_remainder(year, 15) == 0){
            printf("This is huluculu festival year.\n");
            ordinary = false;
        }

        if(extract_remainder(year, 55) == 0 && leap == true){
            printf("This is bulukulu festival year.\n");
            ordinary = false;
        }

        if(ordinary == true){
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}