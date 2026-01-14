/*
    Name: String Input and Output
    Link: https://judge.beecrowd.com/en/problems/view/2760
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    char a[110], b[110], c[110];

    scanf("%[^\n]", a);
    scanf(" %[^\n]", b);
    scanf(" %[^\n]", c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    printf("%.10s%.10s%.10s\n", a, b, c);

    return 0;
}