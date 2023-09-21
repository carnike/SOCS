#include<stdio.h>
int main(){
	int c;
	scanf("%d", &c);
	int d = 1;
	while(c>0){
		int a,b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", d);
		if(a != b){
			if ( a > b){
				printf("Go-Jo\n");	
				}else if (b > a){
					printf("Bi-Pay\n");
				}
			}
			d++;
			c--;
		}
		
		return 0;
	}
	


