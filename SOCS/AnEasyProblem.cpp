#include <stdio.h>
int main()
{
	int a,num =1;
	int i;
	scanf("%d", &a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<a;i++){
		if(arr[i] == 1){
			printf("not easy\n");
			
			break;
		}
		num++;
	}
	if(num > a){
		printf("easy\n");
	}
}
