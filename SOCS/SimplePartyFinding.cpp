#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(){
    int a, v, i, j, k;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%d", &v);
        int mmr[v];
        int arr1, arr2;
        
        for(j=0; j<v; j++){
            scanf("%d", &mmr[j]);
        }
        int find;
        scanf("%d", &find);
        for(j=0; j<v; j++){
            for(k=0; k<v-1; k++){
                if(mmr[k]>mmr[k+1]){
                    int temp = mmr[k];
                    mmr[k] = mmr[k+1];
                    mmr[k+1] = temp;
                }
            }
        }
        for(j=0; j<v; j++){
            if(find==mmr[j]){
                if(j==v-1){
                    arr1 = mmr[j-1];
                    arr2 = find;
                }else{
                    arr1 = find;
                    arr2 = mmr[j+1];
                }
                break;
            }else{
                arr1=-1;
                arr2=-1;
            }
        }
        printf("CASE #%d: %d %d\n", i+1, arr1, arr2);
    }
}
