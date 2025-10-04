/*
    Name: PUM
    Link: https://judge.beecrowd.com/en/problems/view/1142
*/

#include <stdio.h>

int main(){
    int N, i, j;

    scanf("%d", &N);

    j = 1;
    while(N--){
        for(i = 0; i < 3; i++){
            printf("%d ", j + i);
        }
        printf("PUM\n");
        j += 4;
    }

    return 0;
}