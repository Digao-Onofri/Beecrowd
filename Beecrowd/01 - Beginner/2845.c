/*
    Name: Party at the North Pole
    Link: https://judge.beecrowd.com/en/problems/view/2845
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N, i, leprechaun;
    int bigger = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &leprechaun);
        if(bigger < leprechaun){
            bigger = leprechaun;
        }
    }

    printf("%d\n", bigger + 1);

    return 0;
}