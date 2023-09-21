#include <stdio.h>
int main()
{

	int sudut1,sudut2,sudut3;
	printf("masukan sudut pertama = ");
	scanf("%d", &sudut1);
	printf("masukan sudut kedua = ");
	scanf("%d", &sudut2);
	sudut3= 180 - sudut1 - sudut2;
	printf("sudut ketiga = %d", sudut3);
	
	return 0;
}
