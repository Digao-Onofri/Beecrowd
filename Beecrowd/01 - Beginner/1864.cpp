/*
    Name: Our Days Are Neve Coming Back
    Link: https://judge.beecrowd.com/en/problems/view/1864
*/

#include <bits/stdc++.h>
using namespace std;

//life is not a problem to be solved

int main(){
    string phrase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int size, i;

    cin >> size;

    for(i = 0; i < size; i++){
        cout << phrase[i];
    }

    cout << endl;

    return 0;
}