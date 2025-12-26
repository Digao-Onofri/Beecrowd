/*
    Name: Array fill I
    Link: https://judge.beecrowd.com/en/problems/view/1173
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[10];
    int value, i;

    memset(array, 1, sizeof(array));
    cin >> value;
    array[0] = value;
    cout << "N[" << 0 << "] = " << array[0] << endl;
    for(i = 1; i < 10; i++){
        array[i] = array[(i - 1) % 10] * 2;
        cout << "N[" << i << "] = " << array[i] << endl;
    }

    return 0;
}