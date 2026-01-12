/*
    Name: Alarm Clock
    Link: https://judge.beecrowd.com/en/problems/view/1103
*/

#include <stdio.h>

int main(){
    int h1, m1, h2, m2;
    int answer;

    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)){
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }

        h1 = h1 * 60 + m1;
        h2 = h2 * 60 + m2;
        
        if(h1 >= h2){
            h2 += 24 * 60;
        }

        printf("%d\n", h2 - h1);

    }

    return 0;
}