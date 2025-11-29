/*
    Name: Combiner
    Link: https://judge.beecrowd.com/en/problems/view/1238
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, N, j, length;
    char stringa[51], stringb[51], answer[102];

    while(scanf("%d", &N) != EOF){
        
        while(N--){
            memset(answer, '\0', sizeof(answer));
            scanf(" %s %s", stringa, stringb);
            length = strlen(stringa) < strlen(stringb) ? strlen(stringa) : strlen(stringb);

            j = 0;
            for(i = 0; i < length; i++){
                answer[j++] = stringa[i];
                answer[j++] = stringb[i];
            }

            if(length < strlen(stringa)){
                for(i = length; i < strlen(stringa); i++){
                    answer[j++] = stringa[i];
                }
            }
            else{
                for(i = length; i < strlen(stringb); i++){
                    answer[j++] = stringb[i];
                }
            }
            
            printf("%s\n", answer);
        }

    }
    
    return 0;
}