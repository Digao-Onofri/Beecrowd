/*
    Name: Identifying Tea
    Link: https://judge.beecrowd.com/en/problems/view/2006
*/

#include <stdio.h>

int main(){
    int type, tea, amount = 0;
    int contestants = 5;

    scanf("%d", &tea);

    while(contestants--){
        scanf("%d", &type);
        if(type == tea){
            amount++;
        }
    }

    printf("%d\n", amount);

    return 0;
}