/*
    Name: T-shirt
    Link: https://judge.beecrowd.com/en/problems/view/1258
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pessoas{
    char nome[50];
    char cor[10];
    char tamanho;
} pessoas;


int main(){
    int cases, i, j, cmp;
    pessoas p[60], aux;
    bool first = true;

    scanf("%d", &cases);

    while(cases != 0){
        
        for(i = 0; i < cases; i++){
            scanf(" %[^\n]", p[i].nome);
            scanf(" %s", p[i].cor);
            scanf(" %c", &p[i].tamanho);
        }

        for(i = 0; i < cases; i++){
            for(j = i + 1; j < cases; j++){
                cmp = strcmp(p[i].cor, p[j].cor);

                if (cmp > 0 || 
                   (cmp == 0 && p[i].tamanho < p[j].tamanho) || 
                   (cmp == 0 && p[i].tamanho == p[j].tamanho && strcmp(p[i].nome, p[j].nome) > 0)) {
                    aux = p[i];
                    p[i] = p[j];
                    p[j] = aux;
                }
            }
        }     
        
        if(!first){
            printf("\n");
        }
        first = false;
        for(i = 0; i < cases; i++){
            printf("%s %c %s\n", p[i].cor, p[i].tamanho, p[i].nome);
        }

        scanf("%d", &cases);
    }

    return 0;
}