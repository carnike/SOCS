#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = fopen("testdata.in", "r");
	int a,b,i,j;
	int num=0;
	fscanf(fp, "%d\n", &a);
	
	int arr[a];
	char nama[a][50];
	for(i=0;i<a;i++){
		fscanf(fp, "%d %s\n", &arr[i], nama[i]);
	}	
	
	fscanf(fp,"%d\n", &b);
	int search[b];
	for(i=0;i<b;i++){
		fscanf(fp,"%d", &search[i]);
	}
	int temp[105];
    for(i=0; i<b; i++){
        temp[i]=-1;
    }
    for(i=0; i<b; i++){
    for(j=0; j<a; j++){
        if(search[i] ==  arr[j]){
            temp[i]=j;
             
            }
            num++;
        } 
		 
	if(temp[i]==-1){
   	printf("Case #%d: N/A\n",i+1);
  	}else{
   	printf("Case #%d: %s\n",i+1,nama[temp[i]]);
  } 
  
  
    }
    fclose(fp);
 	return 0; 
}
