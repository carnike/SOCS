#include <stdio.h>
#include <string.h>

struct name{
	int num;
	char nama[50];
};
int main()
{
	int a;
	scanf("%d", &a);
	int i,j;
	struct name arr[50] ,temp;
	char temp2 [100];
	for(i=0;i<a;i++){
		scanf("%s %d", arr[i].nama,&arr[i].num );
	}
	for(i=0;i<a-1;i++){
	for(j=i+1;j<a;j++){
		if(arr[i].num > arr[j].num){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j]= temp;	
		}
	}
	}
	
	for(i=0;i<a-1;i++)
	for(j=i+1;j<a;j++)
	if(arr[i].num == arr[j].num){
		if(strcmp(arr[i].nama, arr[j].nama) > 0){
			strcpy(temp2, arr[i].nama);
                strcpy(arr[i].nama,arr[j].nama);
                strcpy(arr[j].nama,temp2);
		}
	}
	
	for(i=0;i<a;i++){
		printf("%s\n", arr[i].nama);
		
	}
}
