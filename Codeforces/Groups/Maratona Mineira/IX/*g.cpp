/*
    Name: Bário
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/G
    Wrong Answer on test 4
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char lane[1000010];
    int i, boots, size;
    bool pass = true;

    cin >> size;

    for(i = 0; i < size; i++){
        cin >> lane[i];
    }

    for(i = 0; i < size; i++){
        if(i == 0){
            boots = 1;
        } else{
            if(lane[i] == 'x'){
                boots++;
            } else{
                if(lane[i + boots] == '.'){
                    pass = false;
                    break;
                } else{
                    boots = 1;
                }
            }
        }
    }

    if(pass){
        cout << 1 << endl;
    } else{
        cout << -1 << endl;
    }

    return 0;
}