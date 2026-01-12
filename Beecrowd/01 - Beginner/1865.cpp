/*
    Name: Mjölnir
    Link: https://judge.beecrowd.com/en/problems/view/1865
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int cases, force;

    cin >> cases;
    
    while(cases--){
        cin >> name >> force;

        if(name == "Thor"){
            cout << "Y" << endl;
        } else{
            cout << "N" << endl;
        }
    }

    return 0;
}