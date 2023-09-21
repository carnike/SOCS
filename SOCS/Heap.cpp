#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct data{
	int umur;
	char jenis[20];
	char name[20];
}data;
data* queue1[MAX];
int size1;

void Registrasi();
void check_queue();
void swap();
int main()
{
	int opt=0;
	do{
	puts("welcome");
	puts("1. Registration");
	puts("2. Check clinic queue");	
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
		Registrasi();
	}
	if(opt == 2) check_queue();
		
	}while (opt !=0);
	
}
void Registrasi(){
		
		char name[30], jenis[30];
		int umur;
		printf("masukan nama = ");
		scanf("%s", name); getchar();
		printf("masukan  umur = ");
		scanf("%d", &umur); 
		printf("masukan  jenis kelamin = ");
		scanf("%s",jenis);
			
	
			data* node = (data*) malloc(sizeof(data));
			strcpy(node->name,name);
			strcpy(node->jenis,jenis);
			node->umur = umur;
			queue1[size1]=node;
			size1++;
}
void check_queue(){
		
	int i  , num = 0;
	
		for(i=0; i<size1;i++){
			if(queue1[num]->umur < queue1[i+1]->umur){
				num++;
			}
			
		}
		
	
	printf("antirian pertama");
	printf("Nama: %s\n jenis kelamin: %s\n Umur: %d\n",queue1[num]->name,queue1[num]->jenis, queue1[num]->umur);
	
	
	
	
}
