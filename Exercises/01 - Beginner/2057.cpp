/*
    Name: Time Zone
    Link: https://judge.beecrowd.com/en/problems/view/2057
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int time, travel, destination;
    
    cin >> time >> travel >> destination;

    cout << ((time + travel + destination) < 0 ? time + travel + destination + 24 : (time + travel + destination) % 24) << endl;

    return 0;
}