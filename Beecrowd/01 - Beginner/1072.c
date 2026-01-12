/*
    Name: Interval 2
    Link: https://judge.beecrowd.com/en/problems/view/1072
*/

#include <stdio.h>

int main(){
    int cases, number, in, out;

    in = out = 0;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &number);

        if(number >= 10 && number <= 20){
            in++;
        } else{
            out++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}