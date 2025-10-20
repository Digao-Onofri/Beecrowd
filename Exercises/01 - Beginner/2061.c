/*
    Name: Closing Tabs
    Link: https://judge.beecrowd.com/en/problems/view/2061
*/

#include <stdio.h>
#include <string.h>

int main(){
    int tabs, actions;
    char action[7];
    char close[7] = "fechou";
    
    scanf("%d %d", &tabs, &actions);

    while(actions--){
        scanf(" %s", action);
        if(strcmp(action, close) == 0){
            tabs += 1;
        }
        else{
            tabs -= 1;
        }
    }

    printf("%d\n", tabs);

    return 0;
}