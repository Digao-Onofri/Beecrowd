/*
    Name: Throwing Cards Away
    Link: https://judge.beecrowd.com/en/problems/view/1110
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> cards;
    int cases, i, head;
    bool first;

    scanf("%d", &cases);

    while(cases != 0){

        for(i = 1; i <= cases; i++){
            cards.push_back(i);
        }

        cout << "Discarded cards: ";
        first = true;
        while(cards.size() > 1){
            head = cards.front();
            cards.pop_front();

            if(first){
                first = false;
            }
            else{
                cout << ", ";
            }
            cout << head;

            head = cards.front();
            cards.pop_front();
            cards.push_back(head);
        }
        cout << "\n";

        cout << "Remaining card: " << cards.front() << "\n";
        cards.pop_front();

        scanf("%d", &cases);
    }

    return 0;
}