/*
    Name: New Record
    Link: https://judge.beecrowd.com/en/problems/view/2551
    wrong answer (20%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, distance, time, speed, i;
    map<int, bool> days;
    map<int, bool>::iterator it;
    bool first;
    double record;

    while(cin >> cases){
        first = true;
        days.clear();
        for(i = 1; i <= cases; i++){
            cin >> time >> distance;
            if(first){
                record = distance / (double) time; 
                first = false;
                days[i] = true;
            }

            speed = distance / (double) time;
            if(record <= speed){
                days[i] = true;
                record = speed;
            }
        }

        for(it = days.begin(); it != days.end(); it++){
            cout << it->first << endl;
        }
    }

    return 0;
}