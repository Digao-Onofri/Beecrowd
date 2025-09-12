/*
    Name: The Fantastic Jaspion
    Link: https://judge.beecrowd.com/en/problems/view/1449
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> lyrics;
    int instances, words, lines, i, spaces;
    char song[81], japanese[81], portuguese[81], word[81];

    cin >> instances;

    while(instances){
        cin >> words >> lines;

        while(words--){
            scanf(" %[^\n]", japanese);
            scanf(" %[^\n]", portuguese);
            lyrics.insert({japanese, portuguese});
            cout << lyrics[japanese]
        }

        while(lines){
            scanf(" %s", song);

            while(1){

            }
        }
    }

    return 0;
}