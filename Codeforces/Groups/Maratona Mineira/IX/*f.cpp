/*
    Name: Caindo de Paraquedas
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/F
    Wrong answer on test 11
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, d, e, sum;
    string navegation;
    string::iterator it;
    bool possible = false;

    cin >> value >> navegation;
    sum = d = e = 0;
    for(it = navegation.begin(); it != navegation.end(); it++){
        if(*it == 'D'){
            sum += value;
            d++;
            e = 0;
        } else{
            d = 0;
            e++;
            sum -= value;
        }

        if(d * value >= 360 || e * value >= 360 || abs(sum) >= 360){
            possible = true;
            break;
        }
    }

    if(possible){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }

    return 0;
}