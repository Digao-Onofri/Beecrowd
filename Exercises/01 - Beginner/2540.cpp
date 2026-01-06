/*
    Name: Leader's Impeachment
    Link: https://judge.beecrowd.com/en/problems/view/2540
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, count, i;
    double votes;

    while(cin >> size){
        count = 0;
        
        for(i = 0; i < size; i++){
            cin >> votes;
            if(votes){
                count++;
            }
        }
        
        
        votes = (size * 2.0) / 3;
        cout << (count >= votes ? "impeachment" : "acusacao arquivada") << endl;
    }

    return 0;
}