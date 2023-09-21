#include <stdio.h>
#include <string.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i,j;
	char ch[100][100];
	char temp [100];
	
	for(i=0;i<=a;i++){
		gets(ch[i]);
	}
	for(i=0;i<=a;i++){
	for(j=i+1;j<=a;j++){
		if(strcmp(ch[i],ch[j])>0){
                strcpy(temp, ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
	}
	}
	
	
}
for(i=0;i<=a;i++){
		puts(ch[i]);
	}
}
