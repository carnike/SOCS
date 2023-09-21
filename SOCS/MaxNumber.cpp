#include<stdio.h>
#include<string.h>

int main(){
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int arr1[a];
    int arr2[b];
    
    for(i=0; i<a; i++){
        scanf("%d", &arr1[i]); getchar();
    }

    for(i=0; i<b; i++){
        scanf("%d", &arr2[i]); getchar();
    }

    for(i=0; i<b; i++){
        for(j=0; j<a; j++){
            if(arr2[i] == arr1[j]){
                arr1[j]=-1;
            }
        }
    }

    for(i=0; i<a; i++){
        for(j=0; j<a-1; j++){
            if(arr1[j]<arr1[j+1]){
                int temp = arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    if(arr1[0]==-1){
        printf("Maximum number is -1\n");
    }else{
        printf("Maximum number is %d\n", arr1[0]);
    }

    return 0;
}
