/*
    Name: System of a Download
    Link: https://judge.beecrowd.com/en/problems/view/2582
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, b1, b2;

    cin >> cases;

    while(cases--){
        cin >> b1 >> b2;

        if(b1 + b2 == 0){
            cout << "PROXYCITY" << endl;
        } else if(b1 + b2 == 1){
            cout << "P.Y.N.G." << endl;
        } else if(b1 + b2 == 2){
            cout << "DNSUEY!" << endl;
        } else if(b1 + b2 == 3){
            cout << "SERVERS" << endl;
        } else if(b1 + b2 == 4){
            cout << "HOST!" << endl;
        } else if(b1 + b2 == 5){
            cout << "CRIPTONIZE" << endl;
        } else if(b1 + b2 == 6){
            cout << "OFFLINE DAY" << endl;
        } else if(b1 + b2 == 7){
            cout << "SALT" << endl;
        } else if(b1 + b2 == 8){
            cout << "ANSWER!" << endl;
        } else if(b1 + b2 == 9){
            cout << "RAR?" << endl;
        } else{
            cout << "WIFI ANTENNAS" << endl;
        }
    }

    return 0;
}