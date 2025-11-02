/*
    Name: Pomekon Collection
    Link: https://judge.beecrowd.com/en/problems/view/2242
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    set<string> pomekons;
    string pomekon;

    cin >> cases;

    while(cases--){
        cin >> pomekon;
        pomekons.insert(pomekon);
    }

    cout << "Falta(m) " << 151 - pomekons.size() << " pomekon(s)." << endl;

    return 0;
}