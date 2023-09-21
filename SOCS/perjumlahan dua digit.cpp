#include <stdio.h>>

int main()
{
	int angka,hasil;
	printf("masukan angka = ");
	scanf("%d", &angka);
	hasil = angka/10 + angka%10;
	printf("hasil = %d", hasil );
		
	return 0;
}
