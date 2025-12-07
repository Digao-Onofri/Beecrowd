/*
    Name: Phase
    Link: https://judge.beecrowd.com/en/problems/view/2663
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> players;
    int cases, i, last, grades, qualifiers;

    cin >> cases >> qualifiers;

    while(cases--){
        cin >> grades;
        players.push_back(grades);
    }

    sort(players.begin(), players.end());
    
    i = qualifiers;
    last = players[qualifiers - 1];
    while(last == players[i]){
        i++;
        qualifiers++;
    }

    cout << qualifiers << endl;

    return 0;
}