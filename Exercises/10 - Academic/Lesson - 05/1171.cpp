/*
    Name: Number Frequence
    Link: https://judge.beecrowd.com/en/problems/view/1171
*/

#include <bits/stdc++.h>
using namespace std;

int main (){
    map<int, int> number;
    map<int, int>::iterator it;
    int cases, actual_number;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &actual_number);

        number[actual_number] += 1;
    }

    for(it = number.begin(); it != number.end(); it++){
        cout << it->first << " aparece " << it->second << " vez(es)" << "\n";
    }
    

    return 0;
}