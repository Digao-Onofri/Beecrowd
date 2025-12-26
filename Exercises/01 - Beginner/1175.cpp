/*
    Name: Array change I
    Link: https://judge.beecrowd.com/en/problems/view/1175
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[20];
    int i, aux;

    for(i = 0; i < 20; i++){
        cin >> array[i];
    }

    for(i = 0; i < 10; i++){
        aux = array[i];
        array[i] = array[19 - i];
        array[19 - i] = aux;
        cout << "N[" << i << "] = " << array[i] << endl; 
    }

    for(i = 10; i < 20; i++){
        cout << "N[" << i << "] = " << array[i] << endl; 
    }

    return 0;
}