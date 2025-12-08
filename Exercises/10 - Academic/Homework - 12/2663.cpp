/*
    Name: Phase
    Link: https://judge.beecrowd.com/en/problems/view/2663
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> players;
    vector<int>::iterator i;
    int cases, last, grades, qualifiers;

    cin >> cases >> qualifiers;

    while(cases--){
        cin >> grades;
        players.push_back(grades);
    }

    sort(players.begin(), players.end(), greater<int>());

    i = players.begin() + qualifiers;
    last = players[qualifiers - 1];
    while(last == *i){
        if(i == players.end()) break;
        i++;
        qualifiers++;
    }

    cout << qualifiers << endl;

    return 0;
}