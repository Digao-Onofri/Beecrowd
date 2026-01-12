/*
    Name: The Pronalândia Puzzle
    Link: https://judge.beecrowd.com/en/problems/view/1984
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string value;
    string::iterator it;

    cin >> value;

    for(it = value.end() - 1; it >= value.begin(); it--){
        cout << *it;
    }

    cout << endl;

    return 0;
}