/*
    Name: Flowers Flourish from France
    Link: https://judge.beecrowd.com/en/problems/view/1140
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char string[1049], first;
    int i, flag;

    scanf("%[^\n]", string);

    while(string[0] != '*'){
        first = toupper(string[0]);
        i = flag = 0;
        
        while(string[i] != '\0'){
            if(string[i] == ' ' && toupper(string[i+1]) != first){
                flag = 1;
                break;
            }
            i++;
        }

        if(flag == 1){
            printf("N\n");
        }
        else{   
            printf("Y\n");
        }

        scanf(" %[^\n]", string);
    }
    
    return 0;
}