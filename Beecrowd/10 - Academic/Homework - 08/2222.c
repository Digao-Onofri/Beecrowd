/*
    Name: Playing with Sets
    Link: https://judge.beecrowd.com/en/problems/view/2222
*/

#include <stdio.h>
#include <string.h>

typedef struct sets{
    unsigned long long mask;
}sets;

int main(){
    sets storage_sets[10010];
    int instances, elements, i, j;
    int amount_sets, operations;
    int type, set1, set2, current;
    int count_distinct;
    unsigned long long result;

    while(scanf("%d", &instances) != EOF){
            while(instances--){

            scanf("%d", &amount_sets);

            for(i = 1; i <= amount_sets; i++){
                storage_sets[i].mask = 0ULL;
                scanf("%d", &elements);
                for(j = 0; j < elements; j++){
                    scanf("%d", &current);
                    storage_sets[i].mask |= (1ULL << current);
                }
            }

            scanf("%d", &operations);
            while(operations--){
                scanf("%d %d %d", &type, &set1, &set2);

                count_distinct = 0;
                if(type == 1){
                    result = storage_sets[set1].mask & storage_sets[set2].mask;
                }
                else{
                    result = storage_sets[set1].mask | storage_sets[set2].mask;
                }
                count_distinct = __builtin_popcountll(result);
                printf("%d\n", count_distinct);
            }   
        }
    }

    return 0;
}