/*
    Name: Automated Checking Machine
    Link: https://judge.beecrowd.com/en/problems/view/1743
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> line1, line2;
    int i, value;
    bool compatible = true;

    for(i = 0; i < 5; i++){
        cin >> value; 
        line1.push_back(value);
    }

    for(i = 0; i < 5; i++){
        cin >> value; 
        line2.push_back(value);
    }

    for(i = 0; i < 5; i++){
        if(line1[i] == line2[i]){
            compatible = !compatible;
            break;
        }
    }

    if(compatible){
        cout << "Y" << endl;
    } else{
        cout << "N" << endl;
    }

    return 0;
}