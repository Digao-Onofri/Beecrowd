/*
    Name: The Fantastic Jaspion
    Link: https://judge.beecrowd.com/en/problems/view/1449
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> lyrics;
    int instances, words, lines;
    string song, japanese, portuguese;

    cin >> instances;

    while(instances){
        cin >> words >> lines;

        while(words--){
            getline(cin, japanese);
            getline(cin,  portuguese);
            lyrics.insert({japanese, portuguese});
            cout << lyrics[japanese] << 'debug\n';
        }

        

        while(lines){
            getline(cin, song);
            cout << lyrics[song] << '\n';
        }
    }

    return 0;
}