/*
    Name: Andy's First Dictionary
    Link: https://judge.beecrowd.com/en/problems/view/1215
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, bool> words;
    map<string, bool>::iterator it;
    char phrasechar[201];
    string phrase(phrasechar), word, final_word;
    istringstream iss(phrase);
    int cases = 4, i, j;

    while(cases--){
        // scanf(" %[^\n]", phrase) != EOF
        scanf(" %[^\n]", phrasechar);
        phrase = phrasechar;
        iss.clear();
        iss.str(phrase);
        
        while(iss >> word){

            j = final_word.begin();
            for(i = word.begin(); i != word.end(); i++){
                if(isalnum(i)){
                    final_word[j] = tolower(i);
                    j++;
                }   
            }

            if(words[final_word] == words.empty()){
                words[final_word] = true;
            }
        }
    }

    for(it = words.begin(); it != words.end(); it++){
        cout << it->first << '\n';
    }

    return 0;
}