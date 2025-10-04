/*
    Name: Zero or One
    Link: https://judge.beecrowd.com/en/problems/view/1467
*/

#include <stdio.h>

int main (){
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if((a == b && c != a)){
            printf("C\n");
        }
        else if(a == c && b != a){
            printf("B\n");
        }
        else if(b == c && a != b){
            printf("A\n");
        }
        else{
            printf("*\n");
        }
    }

    return 0;
}