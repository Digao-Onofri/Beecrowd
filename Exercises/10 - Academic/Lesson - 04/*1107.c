/*
    Name: Laser Sculpture
    Link: https://judge.beecrowd.com/en/problems/view/1107 
*/

#include <stdio.h>

int main(){ 
    int height, length;
    int final_height;

    scanf("%d %d", &height, &length);

    while(height != 0 && length){

        for(i = 0; i < length; i++){
            scanf("%d", &length);
        }

        scanf("%d %d", &height, &length);
    }

    return 0;
}