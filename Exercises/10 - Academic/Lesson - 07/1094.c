/*
    Name: Experiments
    Link: https://judge.beecrowd.com/en/problems/view/1094.c
*/

#include <stdio.h> 

int main(){
    int cases;
    int rabbits, rats, frogs;
    int amount, total;
    char type;

    rabbits = rats = frogs = total = 0;
    scanf("%d", &cases);

    while(cases--){
        scanf("%d %c", &amount, &type);
        total += amount;
        if(type == 'C'){
            rabbits += amount;
        }
        else if(type == 'R'){
            rats += amount;
        }
        else{
            frogs += amount;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs); 
    printf("Percentual de coelhos: %.2f %%\n", (rabbits * 100) /(float) total);
    printf("Percentual de ratos: %.2f %%\n", (rats * 100) /(float) total);
    printf("Percentual de sapos: %.2f %%\n", (frogs * 100) /(float) total);

    return 0;
}