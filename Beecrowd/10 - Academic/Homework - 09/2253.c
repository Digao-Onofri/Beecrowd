/*
    Name: Passwords Validator
    Link: https://judge.beecrowd.com/en/problems/view/2253
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int upper, low, number, i, invalid, size;
    char password[100];

    while(fgets(password, sizeof(password), stdin) != NULL){
        
        password[strcspn(password, "\n")] = '\0';
        upper = low = number = invalid = 0;

        size = strlen(password);
        if(size < 6 || size > 32){  
            printf("Senha invalida.\n");
            continue;
        }
        
        for(i = 0; i < size; i++){
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
                invalid++;
            }
        }
        
        if(upper >= 1 && low >= 1 && number >= 1 && invalid == 0){
            printf("Senha valida.\n");
        }
        else{
            printf("Senha invalida.\n");
        }

    }

    return 0;
}