/*
    Name: The Fantastic Jaspion
    Link: https://judge.beecrowd.com/en/problems/view/1449
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> lyrics;
    map<string, string>::iterator it;
    string song, japanese, portuguese, word;
    istringstream iss(song);
    bool firstWord;
    int instances, words, lines;

    cin >> instances;

    while(instances--){
        cin >> words >> lines;
        cin.ignore();
        lyrics.clear();

        while(words--){
            getline(cin, japanese);
            getline(cin, portuguese);
            lyrics.insert({japanese, portuguese});
        }

        while(lines--){

            getline(cin, song);

            iss.clear();
            iss.str(song);
            firstWord = true;

            while(iss >> word){
                if(!firstWord){
                    cout << ' ';
                }
                firstWord = false;

                it = lyrics.find(word);
                if(it != lyrics.end()){
                    cout << lyrics[word];
                }
                else{
                    cout << word; 
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}