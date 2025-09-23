/*
    Name: I Can Guess the Data Structure!
    Link: https://judge.beecrowd.com/en/problems/view/1250
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> stack;
    priority_queue<int> priority_queue;
    queue<int> queue;
    int cases, operations, element;
    bool stck, prqueu, queu;

    while(scanf("%d", &cases) != EOF){

        while(!stack.empty()){
            stack.pop();
        }

        while(!priority_queue.empty()){
            priority_queue.pop();
        }

        while(!queue.empty()){
            queue.pop();
        }
        
        stck = prqueu = queu = true;
        while(cases--){
            scanf("%d %d", &operations, &element);

            if(operations == 1){
                if(stck){
                    stack.push(element);
                }
                if(prqueu){
                    priority_queue.push(element);
                }
                if(queu){
                    queue.push(element);
                }
            }
            else{                
                if(stck){
                    if(stack.top() != element){
                        stck = false;
                    }
                    else{
                        stack.pop();
                    }
                }
                if(prqueu){
                    if(priority_queue.top() != element){
                        prqueu = false;
                    }
                    else{
                        priority_queue.pop();
                    }
                }
                if(queu){
                    if(queue.front() != element){
                        queu = false;
                    }
                    else{
                        queue.pop();
                    }
                }
            }
        }

        if(stck && prqueu && queu){
            printf("not sure\n");
        }
        else if((stck && prqueu) || (stck && queu) || (prqueu && queu)){
            printf("not sure\n");
        }
        else if(prqueu){
            printf("priority queue\n");
        }
        else if(queu){
            printf("queue\n");
        }
        else if(stck){
            printf("stack\n");
        }
        else{
            printf("impossible\n");
        }
    }

    return 0;
}