/*
    Name: Blobs
    Link: https://judge.beecrowd.com/en/problems/view/1170
*/

#include <stdio.h>
int main(){
    int N, days;
    float food;

    scanf("%d", &N);

    while(N--){
        days = 0;
        scanf("%f", &food);
        while(food > 1){
            food /= 2;
            days++;
        }
        printf("%d dias\n", days);
    }

    return 0;
}