/*
    Name: Sub-prime
    Link: https://judge.beecrowd.com/en/problems/view/1105
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, possible, banks, debentures;
    int debtor, creditor, debenture_value;
    int banks_reserves[20];

    scanf("%d %d", &banks, &debentures);

    while(banks != 0 && debentures != 0){
        
        possible = 1;
        for(i = 1; i <= banks; i++){
            scanf("%d", &banks_reserves[i]);
        }

        for(i = 1; i <= debentures; i++){
            scanf("%d %d %d", &debtor, &creditor, &debenture_value);
            banks_reserves[creditor] += debenture_value;
            banks_reserves[debtor] -= debenture_value;
        }

        for(i = 1; i <= banks; i++){
            if(banks_reserves[i] < 0){
                possible = 0;
                break;
            }
        }

        printf("%c\n", possible ? 'S' : 'N');
        
        scanf("%d %d", &banks, &debentures);
    }

    return 0;
}