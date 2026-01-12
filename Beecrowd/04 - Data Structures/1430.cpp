/*
    Name: Jingle Composing
    Link: https://judge.beecrowd.com/en/problems/view/1430
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> notes;
    vector<string>::iterator it;
    map<char, double> note_values;
    string asterisc = "*";
    string segment, compose;
    istringstream iss(segment);
    double duration;
    int count, j;

    note_values['W'] = 1;
    note_values['H'] = 1/2.0;
    note_values['Q'] = 1/4.0;
    note_values['E'] = 1/8.0;
    note_values['S'] = 1/16.0;
    note_values['T'] = 1/32.0;
    note_values['X'] = 1/64.0;

    cin >> compose;
    iss.clear();
    iss.str(compose);

    while(getline(iss, segment, '/')){
        notes.push_back(segment);
    }

    while(notes[0].compare(asterisc) != 0){
        
        count = 0;
        for(it = notes.begin(); it != notes.end(); it++){
            duration = 0;
            for(j = 0; j < size(*it); j++){
                duration += note_values[(*it)[j]];
            }
            if(duration == 1){
                count++;
            }
        }
        
        cout << count << endl;

        cin >> compose;
        iss.clear();
        iss.str(compose);
        notes.clear();
        while(getline(iss, segment, '/')){
            notes.push_back(segment);
        }
    }

    return 0;
}