#include <stdio.h>

int main(){
    long long b,d,sum=0;
    int a,c;
    scanf("%d",&a);
    int i;
    for (i = 1; i <= a; i++) {
        scanf("%lld %d %lld",&b,&c,&d);
        sum=(c*b)/100;
        if(sum<=d){
            printf("Case #%d: ",i);
            printf("%lld\n", sum);
        }else{
            printf("Case #%d: ",i);
            printf("%lld\n", d);
        }
    }
    return 0;
}
