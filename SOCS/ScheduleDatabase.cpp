#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	int i;
	char code[a][9];
	char day[a][10];
	char time[a][3];

	for(i=1;i<=a;i++){
	
	
	for(i=0;i<a;i++){
		scanf("%s", code[i] );
		scanf("%s", day[i] );
		scanf("%s", time[i]);
	}
	int b;
	scanf("%d", &b);
	int j;
	for(j=1;j<=b;j++){
		int c;
		scanf("%d", &c);
		printf("Query #%d:\n", j);
		printf("Code: %s\n", code[c-1]);
		printf("Day: %s\n", day[c-1]);
		if(strlen(time[c-1]) < 2){
			printf("Time: 0%s:00\n", time[c-1]);
		}else{
			printf("Time: %s:00\n", time[c-1]);
		}
		
	}	
		
		
	}
	return 0;
}
