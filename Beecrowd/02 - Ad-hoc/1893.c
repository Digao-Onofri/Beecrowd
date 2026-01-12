/*
    Name: Moon Phases
    Link: https://judge.beecrowd.com/en/problems/view/1893
*/

#include <stdio.h>

int main(){
    int two_days, night_before;

    scanf("%d %d", &two_days, &night_before);

    if(night_before <= 2 && night_before >= 0){
        printf("nova\n");
    }
    else if(night_before >= 3 && night_before <= 96){
        if(two_days > night_before){
            printf("minguante\n");
        }
        else{
            printf("crescente\n");
        }
    }
    else{
        printf("cheia\n");
    }

    return 0;
}