/*
    Name: Fit or Dont fit II
    Link: https://judge.beecrowd.com/en/problems/view/1241
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char stringa[1001], stringb[1001];

    scanf("%d", &N);

    while(N--){

        scanf(" %s %s", stringa, stringb);
        if(strlen(stringa) < strlen(stringb)){
            printf("nao encaixa\n");
        }
        else{
            strcpy(stringa, stringa + (strlen(stringa) - strlen(stringb)));
            if(!strcmp(stringa, stringb)){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}