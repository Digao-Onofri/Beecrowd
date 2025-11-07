/*
    Name: Month
    Link: https://judge.beecrowd.com/en/problems/view/1052
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> month;
    int input;

    month[1] = "January";
    month[2] = "February";
    month[3] = "March";
    month[4] = "April";
    month[5] = "May";
    month[6] = "June";
    month[7] = "July";
    month[8] = "August";
    month[9] = "September";
    month[10] = "October";
    month[11] = "November";
    month[12] = "December";

    cin >> input;

    cout << month[input] << endl;

    return 0;
}