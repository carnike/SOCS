#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct data{
	int num;
	int tlp;
	char name[20];
}data;

data* apart[MAX];;
int size1;

void Registrasi();

int main(){
	int opt=0;
	do{
	printf("Menu:");
	printf("1. input penghuni baru");
	printf("2. cari pemilik rumah");
	printf("3. cari no rumah");
	printf("4. hapus semua");
	printf("5. keluar");
	scanf("%d", &opt);
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
		Registrasi();
	}
	if(opt== 2){
	} 
	if(opt == 3) 
	if(opt == 4) 
	if(opt == 5){
	puts("Thank you\n");
	return 0;
	}

		
	
	
	}while (opt !=0);
	
	
}
void Registrasi(){
		
		char name[30];
		int num, tlp;
		printf("masukan nama patient = ");
		scanf("%s", name); getchar();
		printf("masukan  nomer rumah = ");
		scanf("%d", num); getchar();
		printf("masukan  nomer telp = ");
		scanf("%d", tlp); getchar();
			
	
			data* node = (data*) malloc(sizeof(data));
			strcpy(node->name,name);
			node->num = num;
			node->tlp = tlp;
			apart[size1]=node;
			size1++;
}

