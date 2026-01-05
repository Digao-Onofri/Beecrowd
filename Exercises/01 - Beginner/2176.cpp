/*
    Name: Parity
    Link: https://judge.beecrowd.com/en/problems/view/2176
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string value;
    string::iterator it;
    int count = 0;

    cin >> value;

    for(it = value.begin(); it != value.end(); it++){
        if(*it == '1'){
            count++;
        }
    }

    cout << value << (count % 2 == 0 ? 0 : 1) << endl;

    return 0;
}