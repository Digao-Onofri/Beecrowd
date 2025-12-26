/*
    Name: Array Fill II
    Link: https://judge.beecrowd.com/en/problems/view/1177
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, i, count = 0;

    cin >> value;

    for(i = 0; i < 1000; i++){
        if(count == value){
            count = 0;
        }
        cout << "N[" << i << "] = " << count << endl;
        count++;
    }

    return 0;
}