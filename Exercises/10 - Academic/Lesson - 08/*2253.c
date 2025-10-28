/*
    Name: Passwords Validator
    Link: https://judge.beecrowd.com/en/problems/view/2253
    Runtime error
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int upper, low, number, i, space;
    char password[34];

    while(scanf(" %[^\n]", password) != EOF){
        upper = low = number = space = 0;

        if(strlen(password) < 6 || strlen(password) > 32){  
            printf("Senha invalida.\n");
        }
        else{
            for(i = 0; i < strlen(password); i++){
                if(isalpha(password[i])){
                    if(isupper(password[i])){
                        upper++;
                    }
                    else{
                        low++;
                    }
                }
                else if(isdigit(password[i])){
                    number++;
                }
                else{
                    space++;
                }
            }
            
            if(upper >= 1 && low >= 1 && number >= 1 && space == 0){
                printf("Senha valida.\n");
            }
            else{
                printf("Senha invalida.\n");
            }
        }
    }

    return 0;
}