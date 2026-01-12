/*
    Name: Array Replacement I
    Link: https://judge.beecrowd.com/en/problems/view/1172
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[11];
    int value, i;

    for(i = 0; i < 10; i++){
        cin >> value; 
        if(value <= 0){
            array[i] = 1;
        } else{
            array[i] = value;
        }

        cout << "X[" << i << "] = " << array[i] << endl;
    }

    return 0;
}