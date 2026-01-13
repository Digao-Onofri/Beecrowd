/*
    Name: Bário
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/G
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char lane[1000010];
    int i, j, boots, size, pulos = 0;
    bool pass = true;

    cin >> size;

    for(i = 0; i < size; i++){
        cin >> lane[i];
    }
    
    if(lane[0] == '.'){
        cout << -1 << endl;
        return 0;
    } 

    boots = 1;
    for(i = 1; i < size; i++){
        if(lane[i] == 'x'){
            boots++;
        } else{
            j = i;
            while(j <= i + boots){
                if(lane[j] == 'x'){
                    i = j;
                    boots = 1;
                    break;
                } 
                j++;
            }

            if(lane[i] != 'x'){
                pass = false;
                break;
            } 
            pulos++;
        }
    }

    if(pass){
        cout << pulos << endl;
    } else{
        cout << -1 << endl;
    }

    return 0;
}