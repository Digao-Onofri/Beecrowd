/*
    Name: Lost Boots
    Link: https://judge.beecrowd.com/en/problems/view/1245
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int i, N, number, sum;
    int right[61], left[61];
    char foot;

    while(scanf("%d", &N) != EOF){
        sum = 0;
        memset(right, 0, sizeof(right));
        memset(left, 0, sizeof(left));
        
        while(N--){
            scanf(" %d %c", &number, &foot);

            if(foot == 'E'){
                left[number] += 1;
            }
            else{
                right[number] += 1;
            }
        }

        for(i = 0; i < 61; i++){
            if(right[i] > 0 && left[i] > 0){
                if(right[i] > left[i]){
                    sum += left[i];
                }
                else{
                    sum += right[i];
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}