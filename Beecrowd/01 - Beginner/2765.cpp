/*
    Name: Coming Input and Output
    Link: https://judge.beecrowd.com/en/problems/view/2765
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    char str[110];

    scanf("%[^\n]", str);

    for(i = 0; i < strlen(str); i++){
        if(str[i] == ','){
            printf("\n");
        } else{
            printf("%c", str[i]);
        }
    }
    
    printf("\n");

    return 0;
}