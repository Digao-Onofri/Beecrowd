/*
    Name: Help!
    Link: https://judge.beecrowd.com/en/problems/view/1367
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N, full_time, time, correct;
    int exercises[26];
    char character, judgment[10];

    scanf("%d", &N);

    while(N != 0){

        correct = 0;
        full_time = 0;
        memset(exercises, 0, sizeof(exercises));

        while(N-- != 0){
            scanf(" %c %d %s", &character, &time, judgment);
            
            if(strcmp(judgment, "correct") == 0){
                full_time += time + (exercises[(int)character - 65] * 20);
                correct += 1;
            }
            else{
                exercises[(int)character - 65] += 1;
            }
        }

        printf("%d %d\n", correct, full_time);

        scanf("%d", &N);
    }    

    return 0;
}