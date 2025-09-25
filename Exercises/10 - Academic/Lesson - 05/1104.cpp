/*
    Name: Exchanging Cards
    Link: https://judge.beecrowd.com/en/problems/view/1104
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> Alice_cards, Betty_cards;
    set<int>::iterator jt;
    int i, Alice_amount, Betty_amount;
    int common, value;

    scanf("%d %d", &Alice_amount, &Betty_amount);
    
    while(Alice_amount != 0 && Betty_amount != 0){

        Alice_cards.clear();
        Betty_cards.clear();

        for(i = 0; i < Alice_amount; i++){
            scanf("%d", &value);
            Alice_cards.insert(value);
        }

        for(i = 0; i < Betty_amount; i++){
            scanf("%d", &value);
            Betty_cards.insert(value);
        }

        common = 0;
        for(jt = Alice_cards.begin(); jt != Alice_cards.end(); jt++){
            if(Betty_cards.count(*jt)){
                common++;
            }
        }

        if(Alice_cards.size() - common < Betty_cards.size() - common){
            cout << Alice_cards.size() - common << endl;
        }
        else{
            cout << Betty_cards.size() - common<< endl;
        }
        
        scanf("%d %d", &Alice_amount, &Betty_amount);
    }

    return 0;
}