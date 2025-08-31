/*
    Name: Fit or Dont fit II
    Link: https://judge.beecrowd.com/en/problems/view/1241
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int N;
    unsigned int a, b;

    scanf("%d", &N);

    while(N--){

        scanf("%d %d", &a, &b);
        if(a <= b){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}