/*
    Name: Whose Turn Is It?
    Link: https://judge.beecrowd.com/en/problems/view/1914
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string n1, n2, op1, op2;
    long long int v1, v2;
    int cases;
    bool first;
    cin >> cases;

    while(cases--){
        cin >> n1 >> op1;
        cin >> n2 >> op2;
        cin >> v1 >> v2;

        first = false;
        if(op1 == "PAR"){
            first = true;
        }

        if((v1 + v2) % 2 == 0 && first){
            cout << n1 << endl;
        } else if(((v1 + v2) & 0x1) && !first) {
            cout << n1 << endl;
        } else{
            cout << n2 << endl;
        }
    }

    return 0;
}