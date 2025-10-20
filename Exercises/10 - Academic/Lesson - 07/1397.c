/*
    Name: Game of The Greatest
    Link: https://judge.beecrowd.com/en/problems/view/1397.c
*/

#include <stdio.h>

int main(){
    int matches;
    int fplayer, splayer;
    int fscore, sscore;
    fscore = sscore = 0;

    scanf("%d", &matches);

    while(matches != 0){

        while(matches--){
            scanf("%d %d", &fplayer, &splayer);

            if(fplayer > splayer){
                fscore++;
            }
            else if(fplayer < splayer){
                sscore++;
            }
        }

        printf("%d %d\n", fscore, sscore);
        fscore = sscore = 0;
        scanf("%d", &matches);      
    }


    return 0;
}