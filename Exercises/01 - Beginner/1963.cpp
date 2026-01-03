/*
    Name: The Motion Picture
    Link: https://judge.beecrowd.com/en/problems/view/1963
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double v1, v2, percentage;

    cin >> v1 >> v2;

    percentage = (v2 * 100) / v1;
    percentage -= 100;

    cout << fixed << setprecision(2) << percentage << "%" << endl;

    return 0;
}