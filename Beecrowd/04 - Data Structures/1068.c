/*
    Name: Parenthesis Balance I
    Link: https://judge.beecrowd.com/en/problems/view/1068
*/

#include <stdio.h>
#include <string.h>

int main(){
    char expression[10000];
    int parenthesis, i;

    while(scanf(" %s", expression) != EOF){
        parenthesis = 0;
        for(i = 0; i < strlen(expression); i++){
            if(expression[i] == '('){
                parenthesis++;
            }
            else if(expression[i] == ')'){
                if(parenthesis > 0){
                    parenthesis--;
                }
                else{
                    break;
                }
            }
        }

        if(parenthesis == 0 && i == strlen(expression)){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}