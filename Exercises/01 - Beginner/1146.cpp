/*
    Name: Growing Sequences
    Link: https://judge.beecrowd.com/en/problems/view/1146
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, i;
    bool first;

    while(cin >> value){
        if(value == 0){
            break;
        }

        first = true;
        for(i = 1; i <= value; i++){
            if(first){
                cout << i;
                first = false;
            } else{     
                cout << " " << i;
            }

        }

        cout << endl;
    }

    return 0;
}