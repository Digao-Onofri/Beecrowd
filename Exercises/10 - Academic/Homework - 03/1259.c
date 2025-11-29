/*
    Name: Even and Odd
    Link: https://judge.beecrowd.com/en/problems/view/1259
*/

#include <stdio.h>
#include <stdlib.h>

int comparison(const void *a, const void *b){
    int A = *(int *)a;
    int B = *(int *)b;

    if(A % 2 == 0){
        if(B % 2 == 0){
            return A - B; // even vs even -> ascending
        }
        else{
            return -1; // even comes before odd
        }
    }
    else if(B % 2 == 0){
        return 1; // odd comes after even
    }
    else{
        return B - A; //odd vs odd -> descending
    }
}

int main(){
    int values[100000];
    int N, i;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &values[i]);
    }

    qsort(values, N, sizeof(int), comparison);

    for(i = 0; i < N; i++){
        printf("%d\n", values[i]);
    }

    return 0;
}
