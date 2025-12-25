/*
    Name: Logical Sequence 2
    Link: https://judge.beecrowd.com/en/problems/view/1145
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int line, value, i, count;
    bool first = true;

    cin >> line >> value;

    count = 0;
    for(i = 1; i <= value; i++){
        if(count == line){
            count = 0;
            cout << endl;
            first = true;
        }

        if(first){
            cout << i;
            first = false;
        } else{
            cout << " " << i;
        }
        count++;
    }

    cout << endl;

    return 0;
}