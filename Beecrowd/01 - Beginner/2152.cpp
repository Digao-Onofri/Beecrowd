/*
    Name: Pepe, I Aldready Took the Candle!
    Link: https://judge.beecrowd.com/en/problems/view/2152
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, hour, minutes, instance;

    cin >> cases;

    while(cases--){
        cin >> hour >> minutes >> instance;

        cout << setw(2) << setfill('0') << hour 
        << ":" << setw(2) << setfill('0') << minutes 
        << (instance ? " - A porta abriu!" : " - A porta fechou!") 
        << endl;
    }

    return 0;
}