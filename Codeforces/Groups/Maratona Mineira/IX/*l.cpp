/*
    Name: Se liga na cifra
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/L
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int dist, pos, i, linha;
    string str, sol;
    bool subindo;

    cin >> str >> dist;

    sol = str;
    pos = 0;
    subindo = false;
    for(i = 0; i < size(str); i++){
        sol[pos] = str[i];

        if(pos >= size(str)){
            pos = linha++;
        }
        
        linha = i % 5;
        if(linha == 4){
            subindo = true;
        }

        if(linha == 0){
            subindo = false;
        }

        if(subindo){
            pos += linha + 2 * (linha - 3);
        } else{
            pos += linha + 2 * (linha - 3);
        }
    }

    cout << sol << endl;

    return 0;
}