/*
    Name: He is Offside!
    Link: https://judge.beecrowd.com/en/problems/view/1410
*/

#include <stdio.h>

int main(){
    int i, j, aux, A, D;
    int distA[11], distD[11];

    scanf("%d %d", &A, &D);

    while(A != 0 && D != 0){
        for(i = 0; i < A; i++){
            scanf("%d", &distA[i]);
        }

        for(i = 0; i < D; i++){
            scanf("%d", &distD[i]);
        }

        for(i = 0; i < D; i++){
            for(j = i + 1; j < D; j++){
                if(distD[i] > distD[j]){
                    aux = distD[j];
                    distD[j] = distD[i];
                    distD[i] = aux; 
                }
            }
        }

        for(i = 0; i < A; i++){
            for(j = i + 1; j < A; j++){
                if(distA[i] > distA[j]){
                    aux = distA[j];
                    distA[j] = distA[i];
                    distA[i] = aux; 
                }
            }
        }
        
        if(distA[0] < distD[1]){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }

        scanf("%d %d", &A, &D);
    }

    return 0;
}