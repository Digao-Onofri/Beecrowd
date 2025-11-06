/*
    Name: Man, Elephant and Mouse
    Link: https://judge.beecrowd.com/en/problems/view/1477
    Time limit exceeded
*/

#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

//For sum operations use return 0 and + in operations
//For product operations use return 1 and * in operations

struct segment_tree{
    segment_tree *left, *right;
    int from, to, value;

    segment_tree(int _from, int _to)
    : from(_from), to(_to), left(NULL), right(NULL), value(0) { }
};

segment_tree* build(const vector<int> &arr, int l, int r){
    if (l > r) return NULL;
    segment_tree *res = new segment_tree(l, r);
    if (l == r){
        res->value = arr[l];
    }
    else{
        int m = (l + r) / 2;
        res->left = build(arr, l, m);
        res->right = build(arr, m + 1, r);
        if (res->left != NULL) res->value += res->left->value;
        if (res->right != NULL) res->value += res->right->value;
    }
    return res;
}

int query(segment_tree *tree, int l, int r){
    if (tree == NULL) return 0;
    if (l <= tree->from && tree->to <= r) return tree->value;
    if (tree->to < l) return 0;
    if (r < tree->from) return 0;
    return query(tree->left, l, r) + query(tree->right, l, r);
}

int update(segment_tree *tree, int i, int val){
    if (tree == NULL) return 0;
    if (tree->to < i) return tree->value;
    if (i < tree->from) return tree->value;

    if (tree->from == tree->to && tree->from == i) tree->value = val;
    else tree->value = update(tree->left, i, val) +
    update(tree->right, i, val);

    return tree->value;
}

vector<int> vet;

int main(){
    segment_tree *tree;

    return 0;
}

#include <stdio.h>
#include <string.h>
#define N 100010
int main(){
    int players, operations;
    int aux[N], i, j;
    int man, elephant, mouse;
    char operation;

    while(scanf("%d %d", &players, &operations) != EOF){
        memset(aux, 0, sizeof(aux));
        while(operations--){
            scanf(" %c %d %d", &operation, &i, &j);
            man = elephant = mouse = 0;
            if(operation == 'C'){
                while(i <= j){
                    if(aux[i] == 0){
                        man++;
                    } else if(aux[i] == 1){
                        elephant++;
                    } else{
                        mouse++;
                    }
                    i++;
                }
                printf("%d %d %d\n", man, elephant, mouse);
            }
            else{
                while(i <= j){
                    if(aux[i] + 1 == 3){
                        aux[i] = 0;
                    }
                    else{
                        aux[i]++;
                    }
                    i++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}