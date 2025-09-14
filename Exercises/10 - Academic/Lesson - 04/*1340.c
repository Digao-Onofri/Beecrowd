/*
    Name: I Can Guess the Data Structure!
    Link: https://judge.beecrowd.com/en/problems/view/1250
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int cases;
    int data[1000][2], i, j, max, last_add;
    bool stack, queue, priority_queue;

    while(scanf("%d", &cases) != EOF){

        max = 0;
        stack = queue = priority_queue = false;

        for(i = 0; i < cases; i++){
            for(j = 0; j < 2; j++){
                scanf("%d", &data[i][j]);
                if(data[i][1] > max && data[i][0] == 1){
                    max = data[i][1];
                }
                if(data[i][0] == 1){
                    last_add = data[i][1];
                }
            }
        }

        for(i = 0; i < cases; i++){             
            if(data[i][0] == 2){
                if(data[0][1] == data[i][1]){
                    queue = true;
                }
                
                if(data[i][1] == max){
                    priority_queue = true;
                }
                
                if(data[i][1] == last_add){
                    stack = true;
                }
                break;
            }
        }

        if(stack && priority_queue && queue){
            printf("not sure\n");
        }
        else if((stack && priority_queue) || (stack && queue) || (priority_queue && queue)){
            printf("not sure\n");
        }
        else if(priority_queue){
            printf("priority queue\n");
        }
        else if(queue){
            printf("queue\n");
        }
        else if(stack){
            printf("stack\n");
        }
        else{
            printf("impossible\n");
        }

    }

    return 0;
}