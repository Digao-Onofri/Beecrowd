/*
    Name: Date Input and Output
    Link: https://judge.beecrowd.com/en/problems/view/2764
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    scanf("%d/%d/%d", &a, &b, &c);

    cout << setw(2) << setfill('0') << b 
    << '/' << setw(2) << setfill('0') << a  
    << '/' << setw(2) << setfill('0') << c << endl;

    cout << setw(2) << setfill('0') << c 
    << '/' << setw(2) << setfill('0') << b
    << '/' << setw(2) << setfill('0') << a << endl;
    
    cout << setw(2) << setfill('0') << a  
    << '-' << setw(2) << setfill('0') << b 
    << '-' << setw(2) << setfill('0') << c << endl;

    return 0;
}