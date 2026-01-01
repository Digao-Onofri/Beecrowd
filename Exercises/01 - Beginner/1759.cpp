/*
    Name: Ho Ho Ho
    Link: https://judge.beecrowd.com/en/problems/view/1759
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int i;
    bool first;

    cin >> size;

    first = true;
    for(i = 0; i < size; i++){
        if(first){
            first = false;
            cout << "Ho";
        } else{
            cout << " Ho";
        }
    }

    cout << "!" << endl;

    return 0;
}