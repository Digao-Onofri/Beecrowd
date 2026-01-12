/*
    Name: Musical Loop
    Link: https://judge.beecrowd.com/en/problems/view/1089
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, value, peaks, before, after, j;
    vector<int> loop;
    vector<int>::iterator i;

    while(cin >> size){
        if(size == 0) break;
        
        loop.clear();
        for(j = 0; j < size; j++){
            cin >> value;
            loop.push_back(value);
        }

        peaks = 0;
        for(i = loop.begin(); i != loop.end(); i++){
            after = (*i + 1) % size;
            before = ((*i - 1) + size) % size;

            if((*i < before && *i < after) || (*i > before && *i > after)){
                peaks++;
            }
        }
        
        cout << peaks << endl;
    }   

    return 0;
}