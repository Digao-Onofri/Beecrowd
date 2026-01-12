/*
    Name: Two Bills
    Link: https://judge.beecrowd.com/en/problems/view/2140
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int bills[7] = {2, 5, 10, 20, 50, 100};
    int price, paid, i, amount;

    while(cin >> price >> paid){
        if(price == 0 || paid == 0){
            break;
        }

        price = paid - price;

        amount = 0;
        i = 5;
        while(i >= 0){

            if(price == 0 || amount >= 2){
                break;
            }

            if(price - bills[i] >= 0){
                price -= bills[i];
                amount++;
            }

            i--;
        }

        if(price == 0 && amount == 2){
            cout << "possible" << endl;
        } else{
            cout << "impossible" << endl;
        }
    }

    return 0;
}