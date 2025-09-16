/*
    Name: T-shirt
    Link: https://judge.beecrowd.com/en/problems/view/1258
*/

#include <stdio.h>
#include <string.h>

typedef struct pessoas{
    char nome[50];
    char cor[10];
    char tamanho;
} pessoas;


int main(){
    int cases, i, j;
    pessoas p[60], aux;

    scanf("%d", &cases);

    while(cases != 0){
        
        for(i = 0; i < cases; i++){
            scanf(" %[^\n]", p[i].nome);
            scanf(" %s", p[i].cor);
            scanf(" %c", &p[i].tamanho);
        }

        for(i = 0; i < cases; i++){
            for(j = i + 1; j < cases; j++){
                if(p[i].cor[0] > p[j].cor[0]){
                    aux = p[i];
                    p[i] = p[j];
                    p[j] = aux;
                }
                else if(p[i].tamanho < p[j].tamanho && p[i].cor[0] == p[j].cor[0]){
                    aux = p[i];
                    p[i] = p[j];
                    p[j] = aux;
                }
                else if(p[i].tamanho == p[j].tamanho && p[i].cor[0] == p[j].cor[0] && p[i].nome[0] > p[j].nome[0]){
                    aux = p[i];
                    p[i] = p[j];
                    p[j] = aux;
                }
            }
        }     
        
        printf("\n");
        for(i = 0; i < cases; i++){
            printf("%s %c %s\n", p[i].cor, p[i].tamanho, p[i].nome);
        }

        scanf("%d", &cases);
    }

    return 0;
}