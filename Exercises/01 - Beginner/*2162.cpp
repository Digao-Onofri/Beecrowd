/*
    Name: Peaks and Valleys
    Link: https://judge.beecrowd.com/en/problems/view/2162
    incomplete solution
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[101], size, i, count;
    bool last, first;
    //if last is peak will be true
    //if last is valley will be false;

    cin >> size;

    count = 0;
    for(i = 0; i < size; i++){
        cin >> mat[i];
    }

    first = true;
    for(i = 0; i < size; i++){
        if(i - 1 >= 0 && i + 1 < size){
            if((mat[i] > mat[i - 1] && mat[i] > mat[i + 1]) && (!last || first)){
                first = false;
                last = true;
                cout << mat[i - 1] << " " << mat[i] << " " << mat[i + 1] << endl;
                count++;
            }

            if((mat[i] < mat[i - 1] && mat[i] < mat[i + 1]) && (last || first)){
                last = false;
                first = false;
                cout << mat[i - 1] << " " << mat[i] << " " << mat[i + 1] << endl;
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}