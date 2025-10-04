/*
    Name: Andy's First Dictionary
    Link: https://judge.beecrowd.com/en/problems/view/1215
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> words;
    set<string>::iterator it;
    string line, word, current;
    int i;

    while (getline(cin, line)) {
        current = "";
        for (i = 0; i < line.size(); i++) {
            if (isalpha(line[i])) {
                current += tolower(line[i]);
            } 
            else {
                if(!current.empty()) {
                    words.insert(current);
                    current.clear();
                }
            }
        }
        if (!current.empty()) {
            words.insert(current);
        }
    }

    for(it = words.begin(); it != words.end(); it++) {
        cout << *it << '\n';
    }

    return 0;
}
