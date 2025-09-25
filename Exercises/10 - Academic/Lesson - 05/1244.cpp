/*
    Name: Sort by Length
    Link: https://judge.beecrowd.com/en/problems/view/1244
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> sort_length;
    vector<string>::iterator it;
    char line[2501];
    int cases;
    istringstream iss(line);
    string word;
    bool first;

    scanf("%d", &cases);

    while(cases--){
        scanf(" %[^\n]", line);

        sort_length.clear();
        iss.clear();
        iss.str(line);

        while(iss >> word){
            sort_length.push_back(word);
        }
        
        stable_sort(sort_length.begin(), sort_length.end(),
            [](const string &a, const string &b) {
                return a.size() > b.size();
        });

        first = true;
        for(it = sort_length.begin(); it != sort_length.end(); it++){
            if(first){
                cout << *it;
                first = false;
            }
            else{
                cout << ' ' << *it ;
            }
        }
        cout << endl;
    }

    return 0;
}