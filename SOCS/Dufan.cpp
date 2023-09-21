#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct costumer{
	char nama[20];
	int height;
	int age;
}costumer;

costumer* stack1[MAX];
costumer* stack2[MAX];
int size1,size2;

void Registrasi();
void pangilan();


int main(){
	int opt=0;
	do{
	puts("welcome");
	puts("1. Registration");
	puts("2. pangilan");
	puts("3. check cosumer");
	puts("4. report");
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
		Registrasi();
	}if(opt == 2){
		pangilan();
	}
	if(opt == 3){
		int sum;
		sum = size1 + size2;
		printf("%d costumer\n", sum);
	}
	if(opt == 4){
		int total = 20*size1 + 30*size2;
		printf("%d rb\n", total);
	}
	
		}while (opt !=0);
}
void Registrasi(){
	char name[30];
	int age,height,status;
	printf("masukan nama costumer = ");
	scanf("%s", name); getchar();
	printf("masukan umur costumer = ");
	scanf("%d", &age);
	printf("masukan tinggi costumer = ");
	scanf("%d", &height);
	printf("Status: 1.tidak Vip 2. vip\n");
	scanf("%d", &status);
	
	if(status == 1){
		costumer* queue1 = (costumer*) malloc(sizeof(costumer));
		strcpy(queue1->nama,name);
		queue1->age = age;
		queue1->height = height;
		stack1[size1]=queue1;
		size1++;
	}
	if(status == 2){
		costumer* queue2 = (costumer*) malloc(sizeof(costumer));
		strcpy(queue2->nama,name);
		queue2->age = age;
		queue2->height = height;
		stack2[size2]=queue2;
		size2++;
	}
}
void pangilan(){
	int i , sum , num;
	sum = 5 - size2;
	num = size2 + 1;
	if(size2 == 0){
		sum = size1;
		num = 1;	
	}
	for(i=0; i<size2;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Umur: %d\n tinggi: %d\n",stack2[i]->nama,stack2[i]->age, stack2[i]->height);
	}
	if(size1 + size2 < 5 && size2 != 0 ){
	for(i=0; i<size1;i++){
	printf("%d",num);
	printf("Nama: %s\n Umur: %d\n tinggi: %d\n",stack1[i]->nama,stack1[i]->age, stack1[i]->height);
	num++;
	}	
	}
	else if(size2 == 0){
	for(i=0; i<size1;i++){
	printf("%d",i+1);
	printf("Nama: %s\n Umur: %d\n tinggi: %d\n",stack1[i]->nama,stack1[i]->age, stack1[i]->height);
	num++;
	}
	}
	else{
	for(i=0; i<sum;i++){
	printf("%d",num);
	printf("Nama: %s\n Umur: %d\n tinggi: %d\n",stack1[i]->nama,stack1[i]->age, stack1[i]->height);
	num++;
	}	
	}
	
}
