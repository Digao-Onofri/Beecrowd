/*
    Name: Tourists in the Huacachina Park
    Link: https://judge.beecrowd.com/en/problems/view/2708
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int encar = 0, excar = 0;
    int amount, count = 0;

    while(cin >> str){
        if(str == "ABEND"){
            break;
        }
        cin >> amount;

        if(str == "SALIDA"){
            count -= amount;
            excar++;
        } else{
            count += amount;
            encar++;
        }
    }

    cout << abs(count) << endl << abs(encar - excar) << endl;
    
    return 0;
}