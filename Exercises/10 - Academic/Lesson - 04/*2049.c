/*
    Name: Numbers of Ahmoc
    Link: https://judge.beecrowd.com/en/problems/view/2049.c  
*/

#include <stdio.h>
#include <string.h>

char ahmoc[300000];

int main(){
    int signature_int, i;
    char signature[7];
    
    scanf("%d", &signature_int);
    i = 0;
    while(signature_int != 0){
        i++;
        scanf(" %s", ahmoc);

        sprintf(signature, "%d", signature_int);

        if(strstr(ahmoc, signature) != NULL){
            printf("Instancia %d\nverdadeira\n", i);
        }
        else{
            printf("Instancia %d\nfalsa\n", i);
        }
        
        scanf("%d", &signature_int);
    }


    return 0;
}