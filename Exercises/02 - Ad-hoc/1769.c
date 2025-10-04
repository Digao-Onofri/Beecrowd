/*
    Name: SSN 1
    Link: https://judge.beecrowd.com/en/problems/view/1769
*/

#include <stdio.h>
#include <string.h>

int main(){
    char cpf[14];
    int code1, code2, i;
    int count1, count2; 

    while(scanf(" %s", cpf) != EOF){

        code1 = code2 = 0;
        count2 = 9;
        count1 = 1;

        for(i = 0; i < strlen(cpf) - 3; i++){
            if((int) (cpf[i] - 48) >= 0){                
                code1 += (int) (cpf[i] - 48) * count1;
                count1++;
                code2 += (int) (cpf[i] - 48) * count2;
                count2--;
            }
        }

        code1 = code1 % 11;
        code2 = code2 % 11;
        if(code1 == 10){
            code1 = 0;
        }
        if(code2 == 10){
            code2 = 0;
        }

        if(code1 == (int) (cpf[strlen(cpf) - 2] - 48) && code2 == (int) (cpf[strlen(cpf) - 1] - 48)){
            printf("CPF valido\n");
        }
        else{
            printf("CPF invalido\n"); 
        }
        
    }

    return 0;
}