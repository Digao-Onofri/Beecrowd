/*
    Name: Small Unlucky Numbers
    Link: https://judge.beecrowd.com/en/problems/view/3299
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (){
    long long int number, final_number;
    int unlucky[18], aux_number;
    int i;
    bool mala_suerte = false;

    scanf("%lld", &number);
    final_number = number;
    memset(unlucky, 0, sizeof(unlucky));
    
    i = 17;
    while(number != 0){
        aux_number = number % 10;
        number /= 10;

        unlucky[i] = aux_number;
        i--;
    }
    
    for(i = 0; i < 17; i++){
        if(unlucky[i] == 1 && unlucky[i + 1] == 3){
            mala_suerte = true;
        }
    }

    if(mala_suerte){
        printf("%lld es de Mala Suerte\n", final_number);
    }
    else{
        printf("%lld NO es de Mala Suerte\n", final_number);
    }
    return 0;
}