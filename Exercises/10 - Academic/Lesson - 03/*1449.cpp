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
        }

        while(lines){
            scanf(" %[^\n]", song);
            
            spaces = 0;
            for(i = 0; i < strlen(song); i++){
                if(song[i] == ' '){
                    spaces++;
                }
            }

            while(spaces){
                for(i = 0; i < strlen(song); i++){
                    if(song[i] == ' '){
                        j = 0;
                        spaces--;
                        cout << lyrics[word];
                    }
                }
            }
        }
    }

    return 0;
}