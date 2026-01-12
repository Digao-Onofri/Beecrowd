/*
    Name: Secret Code
    Link: https://judge.beecrowd.com/en/problems/view/2727
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, char> code;
    int cases;
    char message[35];
    string str;

    code["."] = 'a';
    code[".."] = 'b';
    code["..."] = 'c';
    code[". ."] = 'd';
    code[".. .."] = 'e';
    code["... ..."] = 'f';
    code[". . ."] = 'g';
    code[".. .. .."] = 'h';
    code["... ... ..."] = 'i';
    code[". . . ."] = 'j';
    code[".. .. .. .."] = 'k';
    code["... ... ... ..."] = 'l';
    code[". . . . ."] = 'm';
    code[".. .. .. .. .."] = 'n';
    code["... ... ... ... ..."] = 'o';
    code[". . . . . ."] = 'p';
    code[".. .. .. .. .. .."] = 'q';
    code["... ... ... ... ... ..."] = 'r';
    code[". . . . . . ."] = 's';
    code[".. .. .. .. .. .. .."] = 't';
    code["... ... ... ... ... ... ..."] = 'u';
    code[". . . . . . . ."] = 'v';
    code[".. .. .. .. .. .. .. .."] = 'w';
    code["... ... ... ... ... ... ... ..."] = 'x';
    code[". . . . . . . . ."] = 'y';
    code[".. .. .. .. .. .. .. .. .."] = 'z';

    while(cin >> cases){
        while(cases--){
            scanf(" %[^\n]", message);
            str = message;
            cout << code[str] << endl;
        }
    }

    return 0;
}