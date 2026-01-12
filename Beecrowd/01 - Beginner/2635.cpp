/*
    Name: Web Browser
    Link: https://judge.beecrowd.com/en/problems/view/2635
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int words, queries, count, lenght;
    vector<string> storage;
    vector<string>::iterator it;
    string sub, str;
    string::iterator jt, kt;

    while(cin >> words){
        
        while(words--){
            cin >> sub;
            storage.push_back(sub);
        }

        cin >> queries;
        while(queries--){
            cin >> sub;
            count = lenght = 0;
            for(it = storage.begin(); it != storage.end(); it++){
                jt = sub.begin();
                str = *it;
                kt = str.begin();
                while(jt != sub.end()){
                    if(*jt == *kt){
                        jt++;
                        kt++;
                    } else{
                        break;
                    }
                }

                if(jt == sub.end()){
                    count++;
                    if(lenght < size(str)){
                        lenght = size(str);
                    }
                }
            }
            if(count == 0){
                cout << -1 << endl;
            } else{
                cout << count << " " << lenght << endl;
            }
        }
    }

    return 0;
}