/*
    Name: Justifier II
    Link: https://judge.beecrowd.com/en/problems/view/1278
    Wrong answer(5%)
*/

#include <bits/stdc++.h>
using namespace std;

typedef struct words{
    string phrase;
} words;

int main(){
    int cases, spaces, biggest;
    int letters, i;
    char line[51];
    words text[101];
    string current_line, word;
    istringstream iss(current_line);

    scanf("%d", &cases);

    while(cases != 0){

        memset(text, 0, sizeof(text));
        biggest = 0;
        for(i = 0; i < cases; i++){
            scanf(" %[^\n]", line);

            iss.clear();
            current_line = line;
            iss.str(current_line);
            while(iss >> word){
                text[i].phrase += word;
                text[i].phrase += ' ';
            }
            text[i].phrase[text[i].phrase.length() - 1] = '\0';
            letters = text[i].phrase.length();

            if(letters > biggest){
                biggest = letters;
            }
        }

        for(i = 0; i < cases; i++){
            if(biggest > text[i].phrase.length()){
                spaces = biggest - text[i].phrase.length();
                while(spaces--){
                    cout << ' ';
                }
                cout << text[i].phrase << endl;
            }
            else{
                cout << text[i].phrase << endl;
            }
        }

        scanf("%d", &cases);
    }

    return 0;
}