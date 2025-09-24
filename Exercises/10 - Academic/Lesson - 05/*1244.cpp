/*
    Name: Sort by length
    Link: https://judge.beecrowd.com/en/problems/view/1244
*/

#include <bits/stdc++.h>
using namespace std;

typedef struct names{
    string name;
}names;

int main(){
    names string[50000], aux;
    char names[5000];
    int cases, i = 0, j, size;
    istringstream iss(names);
    std::string string_names, word;

    scanf("%d", &cases);

    while(cases--){
        scanf(" %[^\n]", names);

        string_names = names;

        iss.clear();
        iss.str(names);

        while(iss >> word){
            string[i].name = word;
            i++;
        }

    }
    size = i;
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(string[i].name.length() > string[j].name.length()){
                aux = string[i];
                string[i] = string[j];
                string[j] = aux;
            }
            else if(string[i].name.length() == string[j].name.length() && strlen[i].name[0] > strlen[i].name[0]){
                aux = string[i];
                string[i] = string[j];
                string[j] = aux;
            }
        }
    }

    return 0;
}