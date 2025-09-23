/*
    Name: Lost Boots
    Link: https://judge.beecrowd.com/en/problems/view/1245
*/

#include <stdio.h>
#include <string.h>

int main(){
    int left[61], right[61];
    int cases, number;
    int count, i;
    char foot;

    while(scanf("%d", &cases) != EOF){

        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        count = 0;
        
        while(cases--){
            scanf("%d %c", &number, &foot);

            if(foot == 'D'){
                right[number] += 1;
            }
            else{
                left[number] += 1;
            }
        }

        for(i = 0; i < 61; i++){
            if(right[i] < left[i]){
                count += right[i];
            }
            else{
                count += left[i];
            }
        }

        printf("%d\n", count);
    }

    return 0;
}