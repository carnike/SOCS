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
void search();
void searchNum();

int main(){
	int opt=0;
	do{
	printf("Menu:\n");
	printf("1. input penghuni baru\n");
	printf("2. cari pemilik rumah\n");
	printf("3. cari no rumah\n");
	printf("4. hapus semua\n");
	printf("5. keluar\n");
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
		Registrasi();
	}
	if(opt== 2){
	search();
	} 
	if(opt == 3){
	searchNum();
	} 
	if(opt == 4){
		
	}

	}while (opt !=5);
	
}
void Registrasi(){
		
		char name[30];
		int num, tlp;
		printf("masukan nama = ");
		scanf("%s", name); getchar();
		printf("masukan  nomer rumah = ");
		scanf("%d", &num); 
		printf("masukan  nomer telp = ");
		scanf("%d", &tlp);
			
	
			data* node = (data*) malloc(sizeof(data));
			strcpy(node->name,name);
			node->num = num;
			node->tlp = tlp;
			apart[size1]=node;
			size1++;
}

void search()
{
	char name[20];
	int numbering;
	printf("masukan nama orang yang ingin dicari\n");
	scanf("%s", name); getchar();
	for(int i=0; i<size1; i++){
		if(strcmp(name,apart[i]->name)==0){
			printf("Nama: %s\n num rumah: %d\n telp: %d\n",apart[i]->name, apart[i]->num, apart[i]->tlp);
			numbering++;
		}
	}
	if(numbering++ > size1){
		printf("data tidak ada\n");
	}
}
void searchNum(){
	int num , numbering;
	printf("masukan num rumah yang ingin dicari\n");
	scanf("%d", &num);
	for(int i=0; i<size1; i++){
		if(apart[i]->num == num){
			printf("Nama: %s\n num rumah: %d\n telp: %d\n",apart[i]->name, apart[i]->num, apart[i]->tlp);
		}
	}
	if(numbering++ > size1){
		printf("data tidak ada\n");
	}
}
