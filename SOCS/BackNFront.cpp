#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	int a;
	
	for(i=1; i <= 3; i++){
		scanf("%d", &a);
		char ch[a];
		int jumlah;
		scanf("%s", &ch);
		getchar();
		jumlah = strlen(ch);
		
		
		for(j=jumlah -1; j >= 0; j--){
				if(j == 0){
					printf("%c", ch[j]);
				}
				if(j== jumlah-1){
					printf("%c", ch[j]);
				}
				
			}
			printf("\n");
		}
	
		
		
		
}
	

