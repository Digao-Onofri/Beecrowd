/*
    Name: Sub-prime
    Link: https://judge.beecrowd.com/en/problems/view/1105
*/

#include <stdio.h>

int main(){
    int i, count, banks, debentures;
    int debtor, creditor, debenture_value;
    int monetary, banks_reserves[20];

    scanf("%d %d", &banks, &debentures);

    while(banks != 0 && debentures != 0){
        
        count = 0;
        for(i = 1; i <= banks; i++){
            scanf("%d", &monetary);
            banks_reserves[i] += monetary;
        }

        for(i = 1; i <= debentures; i++){
            scanf("%d %d %d", &debtor, &creditor, &debenture_value);
            
            if(banks_reserves[debtor] >= debenture_value){
                banks_reserves[creditor] += debenture_value;
                banks_reserves[debtor] -= debenture_value;
                count += 1;
            }
            
        }

        if(count == debentures){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
        
        scanf("%d %d", &banks, &debentures);
    }

    return 0;
}