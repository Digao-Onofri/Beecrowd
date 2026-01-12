/*
    Name: Diving
    Link: https://judge.beecrowd.com/en/problems/view/2311
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, judges;
    double biggest, lowest, value, sum, difficult;
    bool first;
    string name;

    cin >> cases;

    while(cases--){

        first = true;
        judges = 7;
        sum = 0;
        cin >> name;
        cin >> difficult;
        while(judges--){
            cin >> value;
            if(first){
                lowest = value;
                biggest = value;
                first = false;
            }

            if(lowest > value){
                lowest = value;
            }

            if(biggest < value){
                biggest = value;
            }

            sum += value;
        }

        cout << name << " " << fixed << setprecision(2) << (sum - biggest - lowest) * difficult << endl;
    }

    return 0;
}