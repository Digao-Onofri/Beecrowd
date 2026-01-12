/*
    Name: MacPRONALTS
    Link: https://judge.beecrowd.com/en/problems/view/1985
*/

#include <stdio.h>

int main(){
    int purchase, quantity, product;
    double sum = 0; //always equal to zero to prevent previous values

    scanf("%d", &purchase);

    while(purchase--){
        scanf("%d %d", &product, &quantity);
        if(product == 1001){
            sum += 1.50 * quantity;
        }
        else if(product == 1002){
            sum += 2.50 * quantity;
        }        
        else if(product == 1003){
            sum += 3.50 * quantity;
        }        
        else if(product == 1004){
            sum += 4.50 * quantity;
        }
        else{
            sum += 5.50 * quantity;
        }
    }

    printf("%.2lf\n", sum);

    return 0;
}