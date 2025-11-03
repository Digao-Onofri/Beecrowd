/*
    Name: Friends of Habay
    Link: https://judge.beecrowd.com/en/problems/view/2136
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    list<string> first;
    list<string>::iterator ft;  
    map<int, string> friends;
    map<int, string>::iterator jt;
    set<string> friends_print;
    set<string> unfriends_print;
    string name, choice, current;

    while(cin >> name){
        if(name == "FIM"){
            break;
        }
        cin >> choice;

        if(choice == "YES"){
            friends[name.length()] = name;
            first.push_back(name);
            friends_print.insert(name);
        } else{
            unfriends_print.insert(name);
        }
    }

    for(string current : friends_print){
        cout << current << endl;
    }

    for(string current : unfriends_print){
        cout << current << endl;
    }

    cout << endl;

    jt = prev(friends.end());
    ft = first.begin();
    current = *ft;
    while((long unsigned int)jt->first != current.size()){
        ft++;
        current = *ft;
    }

    cout << "Amigo do Habay:" << endl;
    cout << *ft << endl;

    return 0;
}