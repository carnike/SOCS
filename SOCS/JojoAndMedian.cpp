#include <stdio.h>
struct item{
	int ID[101];
	char a[101];	
	long long sum;
};
int main()
{
	int b,i,j;
	scanf("%d", &b);
	struct item arr[b];
	
	for(i=0; i<b; i++){
		scanf("%s", &arr[i].ID);
		getchar();
		scanf("%[^\n]", &arr[i].a);
		getchar();
		scanf("%lld", &arr[i].sum);
		getchar();
		
	}
	float median;
	if(b % 2 == 0){
		median = (arr[b/2].sum + arr[b/2].sum)/2;
		
	}
	else {
		median = arr[b/2].sum;
	}
	for(j=0; j<b; j++){
		if(arr[j].sum >= median){
			printf("%s %s\n", arr[j].ID , arr[j].a);
		}
	}
}
