/*
    Name: Dijkstra
    Link: https://judge.beecrowd.com/en/problems/view/2653
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> jewels;
    string jewelry;

    while(cin >> jewelry){
        jewels.insert(jewelry);
    }

    cout << jewels.size() << endl;
    
    return 0;
}