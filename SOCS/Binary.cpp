#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b[10];
    scanf("%d",&a);
    int i;
    for(i=0;a>0;i++){
        b[i]=a%2;
        a=a/2;
    }
    int x=0;
    int j;
    for(j=i-1;j>=0;j--){
        x++;
    }
    int y=16-x;
    int k;
    for (k = 0; k < y; k++){
        printf("0");
    }
    for(i=i-1;i>=0;i--){
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
