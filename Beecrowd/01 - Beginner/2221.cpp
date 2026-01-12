/*
    Name: Pomekons Battle
    Link: https://judge.beecrowd.com/en/problems/view/2221
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, bonus;
    int a1, d1, l1, v1;
    int a2, d2, l2, v2;

    cin >> cases;

    while(cases--){
        cin >> bonus;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;
        
        v1 = ((a1 + d1) / 2);
        v2 = ((a2 + d2) / 2);

        if(l1 % 2 == 0){
            v1 += bonus;
        }

        if(l2 % 2 == 0){
            v2 += bonus;
        }

        if(v1 == v2){
            cout << "Empate" << endl;
        } else{
            cout << (v1 > v2 ? "Dabriel" : "Guarte") << endl;
        }
    }

    return 0;
}