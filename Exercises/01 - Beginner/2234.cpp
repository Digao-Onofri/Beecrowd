/*
    Name: Hot Dogs
    Link: https://judge.beecrowd.com/en/problems/view/2234
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int dogs, part;
    double average;

    cin >> dogs >> part;

    average = dogs / (double) part;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}