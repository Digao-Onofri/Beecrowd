/*
    Name: Top N
    Link: https://judge.beecrowd.com/en/problems/view/1943
*/

#include <stdio.h>

int main (){
    int position;

    scanf("%d", &position);

    if(position <= 100 && position > 50){
        printf("Top 100\n");
    }
    else if(position <= 50 && position > 25){
        printf("Top 50\n");
    }    
    else if(position <= 25 && position > 10){
        printf("Top 25\n");
    }    
    else if(position <= 10 && position > 5){
        printf("Top 10\n");
    }
    else if(position <= 5 && position > 3){
        printf("Top 5\n");
    }
    else if(position <= 3 && position > 1){
        printf("Top 3\n");
    }
    else{
        printf("Top 1\n");
    }

    return 0;
}