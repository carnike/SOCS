#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("testdata.in","r");
    int a,b,i,j;
    fscanf(fp, "%d\n", &a);
    int arr[a][10];
    char nama[a][50];
    for(i=0; i<a; i++){
        fscanf(fp, "%d %[^\n]\n", arr[i], nama[i] );
 }
 	fscanf(fp,"%d\n", &b);
    int search[b][10];
    for(i=0; i<b; i++){
       fscanf(fp, "%s\n", search[i]);
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
