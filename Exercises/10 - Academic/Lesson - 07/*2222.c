/*
    Name: Playing with Sets
    Link: https://judge.beecrowd.com/en/problems/view/2222
    Wrong answer (55%)
*/

#include <stdio.h>
#include <string.h>

typedef struct sets{
    int values[61];
}sets;

int main(){
    sets storage_sets[10010];
    int instances, elements, i, j;
    int amount_sets, operations;
    int type, set1, set2;
    int count_distinct, sets_lengths[61];

    while(scanf("%d", &instances) != EOF){
            while(instances--){

            scanf("%d", &amount_sets);

            for(i = 1; i <= amount_sets; i++){
                scanf("%d", &elements);
                sets_lengths[i] = elements;
                for(j = 0; j < elements; j++){
                    scanf("%d", &storage_sets[i].values[j]);
                }
            }

            scanf("%d", &operations);
            while(operations--){
                scanf("%d %d %d", &type, &set1, &set2);

                count_distinct = 0;
                if(type == 1){
                    for(i = 0; i < sets_lengths[set1]; i++){
                        for(j = 0; j < sets_lengths[set2]; j++){
                            if(storage_sets[set1].values[i] == storage_sets[set2].values[j]){
                                count_distinct++;
                            }
                        }
                    }
                }
                else{
                    for(i = 0; i < sets_lengths[set1]; i++){
                        for(j = 0; j < sets_lengths[set2]; j++){
                            if(storage_sets[set1].values[i] == storage_sets[set2].values[j]){
                                storage_sets[set1].values[i] = -1;
                            }
                        }
                        
                        if(storage_sets[set1].values[i] != -1){
                            count_distinct++;
                        }
                    }
                    
                    for(j = 0; j < sets_lengths[set2]; j++){
                        if(storage_sets[set2].values[j] != -1){
                            count_distinct++;
                        }
                    }
                }
                printf("%d\n", count_distinct);
            }   
        }
    }

    return 0;
}