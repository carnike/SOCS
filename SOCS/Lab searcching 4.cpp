#include <stdio.h>
#include <string.h>

int main(){
	int n;
	int i;
	scanf("%d", &n);
	char arr[n][55];
	for(i=0;i<n;i++){
		scanf("%s", arr[i]);
		getchar();
	}
	char c[55];
	scanf("%s", c);
	int j;
	int num=0;
	for(j=0;j<n;j++){
		if(strcmp(c,arr[j]) == 0){
			num++;
		}
		
	
	
}
if(num == 0){
		printf("nama %s tidak ditemukan\n ", c);
	}
	else{
		printf("nama %s  ditemukan %d kali\n ", c, num);
	}
}
