/*
    Name: Optical Reader
    Link: https://judge.beecrowd.com/en/problems/view/1129
*/

#include <stdio.h>

int main(){
    int questions;
    int a, b, c, d, e;
    
    scanf("%d", &questions);

    while(questions != 0){

        while(questions--){        
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);  

            if(a <= 127 && b > 127 && c > 127 && d > 127 && e > 127){
                printf("A\n");
            }
            else if(a > 127 && b > 127 && c > 127 && d > 127 && e <= 127){
                printf("E\n");
            }
            else if(a > 127 && b > 127 && c <= 127 && d > 127 && e > 127){
                printf("C\n");
            }
            else if(a > 127 && b > 127 && c > 127 && d <= 127 && e > 127){
                printf("D\n");
            }
            else if(a > 127 && b <= 127 && c > 127 && d > 127 && e > 127){
                printf("B\n");
            }
            else{
                printf("*\n");
            }
        }

        scanf("%d", &questions);  
    }

    return 0;
}