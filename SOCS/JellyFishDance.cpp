#include <stdio.h>
int main (){

    int n, num = 1;
    scanf("%d",&n);

    int i;
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); 
    }

    int T;
    scanf("%d",&T);
    int j;
    for(j=0;j<T;j++){
        int a,b;
        int sum = 0;
        scanf("%d %d",&a,&b);  
        printf("Case #%d: ",num);

        int k;
        for(k=a-1; k <= b-1; k++){
            sum += array[k];
        }

        printf("%d\n", sum);
    num ++;
    }
}
