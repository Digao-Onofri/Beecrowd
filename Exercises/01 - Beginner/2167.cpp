/*
    Name: Engine Failure
    Link: https://judge.beecrowd.com/en/problems/view/2167
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int speeds[101], i;
    int cases;
    bool find = false;

    cin >> cases;

    for(i = 1; i <= cases; i++){
        cin >> speeds[i];
    }

    for(i = 1; i <= cases; i++){
        if(i > 1){
            if(speeds[i] < speeds[i - 1]){
                find = true;
                break;
            }
        }
    }

    cout << (find ? i : 0) << endl;

    return 0;
}