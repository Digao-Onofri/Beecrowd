/*
    Name: Lonely Number
    Link: https://judge.beecrowd.com/en/problems/view/2091
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<long long int, int> lonely;
    map<long long int, int>::iterator it;
    int cases;
    long long int number;

    while(cin >> cases){
        if(cases == 0){
            break;
        }
        
        lonely.clear();

        while(cases--){
            cin >> number;
            lonely[number] += 1;
        }

        it = lonely.begin();
        while(it->second % 2 == 0){
            it++;
        }

        cout << it->first << endl;
    }

    return 0;
}