/*
    Name: Laser Sculpture
    Link: https://judge.beecrowd.com/en/problems/view/1107 
*/

#include <stdio.h>

int main(){ 
    int height, length, i;
    int lengths[10001], sum;

    scanf("%d %d", &height, &length);

    while(height != 0 && length){
        sum = 0;

        for(i = 0; i < length; i++){
            scanf("%d", &lengths[i]);
            if(i > 0 && lengths[i] - lengths[i - 1] > 0){
                sum += lengths[i] - lengths[i - 1];
            }
            if(i + 1 == length){
                sum += height - lengths[i];
            }
        }

        printf("%d\n", sum);

        scanf("%d %d", &height, &length);
    }

    return 0;
}