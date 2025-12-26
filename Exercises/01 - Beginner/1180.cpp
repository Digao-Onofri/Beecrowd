/*
    Name: Lowest Number and Position
    Link: https://judge.beecrowd.com/en/problems/view/1180
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[1000];
    int n, i, lowest, pos;
    bool first = true;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> array[i];
        if(first){
            lowest = array[i];
            pos = i;
            first = false;
        }

        if(lowest > array[i]){
            lowest = array[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}