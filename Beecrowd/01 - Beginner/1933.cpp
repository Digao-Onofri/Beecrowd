/*
    Name: Tri-du
    Link: https://judge.beecrowd.com/en/problems/view/1933
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int v1, v2;

    cin >> v1 >> v2;

    if(v1 >= v2){
        cout << v1 << endl;
    } else{
        cout << v2 << endl;
    }

    return 0;
}