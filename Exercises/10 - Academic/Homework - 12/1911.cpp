/*
    Name: Help Girafales
    Link: https://judge.beecrowd.com/en/problems/view/1911
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> signature;
    map<string, string> day;
    string name, sign;
    string::iterator i, j;
    int students, day_class, difference, count;
    
    while(cin >> students){
        if(students ==  0){
            break;
        }

        signature.clear();
        while(students--){
            cin >> name >> sign;
            signature[name] = sign;
        }

        cin >> day_class;

        count = 0;
        while(day_class--){
            cin >> name >> sign;
            j = sign.begin();
            difference = 0;
            for(i = signature[name].begin(); i != signature[name].end(); i++, j++){
                if(*i != *j){
                    difference++;
                }
            }

            if(difference > 1){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}