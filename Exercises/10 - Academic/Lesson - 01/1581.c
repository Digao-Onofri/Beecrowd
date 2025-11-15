/*
    Name: International Chat
    Link: https://judge.beecrowd.com/en/problems/view/1581
*/

#include <stdio.h>

int main(){
    int i, N, K, flag, auxk;
    char string[20], aux[20];
    
    scanf("%d", &N);

    while(N--){
        scanf("%d", &K);
        flag = 0;
        auxk = K;

        while(K--){
            scanf("%s", string);  
            //If is the first time copy the language         
            if(K == auxk - 1){
                for(i = 0; i < sizeof(string); i++){
                    aux[i] = string[i];
                }
            }

            for(i = 0; i < sizeof(string); i++){
                if(aux[i] != string[i]){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0){
            printf("%s\n", string);
        }
        else{
            printf("ingles\n");
        }
    }

    return 0;
}