#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp = fopen("testdata.in", "r");
	int a,i,j,k;
	fscanf(fp, "%d\n", &a);
	int arr[a];
	char nama[a][45];
	
	for(i=0;i<a;i++){
		fscanf(fp,"%d#%[^\n]\n", &arr[i], nama[i]);
	}
	
	
	for(i=0;i<a;i++){
	for(j=0;j<a-1;j++){
		if(strcmp(nama[j],nama[j+1])> 0){
			int temp =arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			char temp2[45];
			strcpy(temp2,nama[j]);
			strcpy(nama[j],nama[j+1]);
			strcpy(nama[j+1],temp2);
		}
	}
	}
	for(k=0;k<a;k++){
		printf("%d %s\n", arr[k], nama[k]);
	}
	fclose(fp);
	return 0;
	
}
