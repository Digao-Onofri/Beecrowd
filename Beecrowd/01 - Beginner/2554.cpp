/*
    Name: Pizza Before BH
    Link: https://judge.beecrowd.com/en/problems/view/2554
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int people, dates, go, i;
    string date;
    bool everyone, print;
    
    while(cin >> people >> dates){
        print = false;
        while(dates--){
            cin >> date;
            everyone = true;
            for(i = 0; i < people; i++){
                cin >> go;
                if(!go){
                    everyone = false;
                }
            }

            if(everyone && !print){
                cout << date << endl;
                print = true;
            }
        }

        if(!print){
            cout << "Pizza antes de FdI" << endl;
        }
    }

    return 0;
}