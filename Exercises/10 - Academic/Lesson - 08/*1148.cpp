/*
    Name: Countries at War
    Link: https://judge.beecrowd.com/en/problems/view/1148
*/

#include <bits/stdc++.h>
using namespace std;

void FloydWarshall(const vector<vector<long long int>> &graph) {
    int N = graph.size();
    int i, j, k;
    for (k = 0; k < N; ++k) {
        for (i = 0; i < N; ++i) {
            for (j = 0; j < N; ++j) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
}

int main(){ 
    vector<vector<long long int>> graph;

    

  return 0;
}