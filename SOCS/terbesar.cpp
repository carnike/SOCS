#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c){
		printf("angka terbesar adalah angka pertama");
	}
	else if(b>a && b>c){
			printf("angka terbesar adalah angka kedua");

}
	else{
		printf("angka terbesar adalah angka ketiga");
	
}
	return 0;
}

