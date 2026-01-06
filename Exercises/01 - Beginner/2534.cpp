/*
    Name: General Exam
    Link: https://judge.beecrowd.com/en/problems/view/2534
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int citizens[102], i, j;
    int size, queries, pos;

    while(cin >> size >> queries){
        for(i = 0; i < size; i++){
            cin >> citizens[i];
        }

        for(i = 0; i < size; i++){
            for(j = i + 1; j < size; j++){
                if(citizens[i] < citizens[j]){
                    pos = citizens[i];
                    citizens[i] = citizens[j];
                    citizens[j] = pos;
                }
            }
        }
        while(queries--){
            cin >> pos;
            cout << citizens[pos - 1] << endl;
        }
    }

    return 0;
}