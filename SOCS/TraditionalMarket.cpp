#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && b>c){
		printf("Daging\nSayur\nTelur\n");
	}
	else if(a>c && c>b){
			printf("Daging\nTelur\nSayur\n");	
		}
	
	else if(b>a && a>c){
			printf("Sayur\nDaging\nTelur\n");

}
	else if(b>c && c>a){
			printf("Sayur\nTelur\nDaging\n");
		}

	else if(c>b && b>a)
	{
		printf("Telur\nSayur\nDaging\n");
	}
	else {
			printf("Telur\nDaging\nSayur\n");
		}
}
