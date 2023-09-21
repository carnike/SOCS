#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct patient{
	char nama[20];
	char tanggal[20];
	int age;
	char alamat[30];
	char clinic[20];
	char DrName[20];
	char sakit[20];
	char obat[20];
	char status[10];
	int cost;
}patient;

patient* stack1[MAX];
patient* stack2[MAX];
patient* stack3[MAX];
patient* stack4[MAX];
patient* stack5[MAX];
patient* stack6[MAX];
patient* stack7[MAX];
patient* stack8[MAX];
patient* stack9[MAX];
int size1,size2,size3,size4,size5,size6,size7,size8,size9;

void Registrasi();
void check_queue();
void outpatient();
void check_pharmancy();
void payment();


int main(){
	int opt=0;
	do{
	puts("welcome");
	puts("1. Check list doctor");
	puts("2. Registration");
	puts("3. Check clinic queue");
	puts("4. Outpatient");
	puts("5. Check pharmancy Queue ");
	puts("6. Payment");
	puts("0. exit");
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
		printf("dotor gigi = Dr.Beni , Dr.Agus\n");
		printf("dotor kecantikan = Dr.Meli , Dr.Dinda\n");
		printf("dotor THT = Dr.Beno , Dr.Andi\n");
		printf("dotor anak = Dr.Jono , Dr.Anita\n\n");
	}
	if(opt== 2){
	Registrasi();
		
	} 
	if(opt == 3) check_queue();
	if(opt == 4) outpatient();
	if(opt == 5) check_pharmancy();
	if(opt == 6 ) payment();
		
	
	
	}while (opt !=0);
	
	puts("Thank you\n");
	return 0;
}
void Registrasi(){
		
		char name[30], alamat[30],tanggal[20],clinic[20], DrName[20];
		int age;
		printf("masukan nama patient = ");
		scanf("%s", name); getchar();
		printf("masukan  alamat = ");
		scanf("%[^\n]", alamat); getchar();
		printf("masukan  tanggal lahir = ");
		scanf("%[^\n]", tanggal); getchar();
		printf("masukan umur patient = ");
		scanf("%d", &age);
		printf("Mau ke clinc apa? = ");
		scanf("%s", clinic); getchar();
		printf("masukan nama dokter = ");
		scanf("%s", DrName); getchar();
			
		if(strcmp(DrName,"beni") == 0){
			patient* queue1 = (patient*) malloc(sizeof(patient));
			strcpy(queue1->nama,name);
			strcpy(queue1->alamat,alamat);
			strcpy(queue1->tanggal,tanggal);
			queue1->age = age;
			strcpy(queue1->clinic,clinic);
			strcpy(queue1->DrName,DrName);
			stack1[size1]=queue1;
			size1++;	
		}
		if(strcmp(DrName,"agus")==0){
			patient* queue2 = (patient*) malloc(sizeof(patient));
			strcpy(queue2->nama,name);
			strcpy(queue2->alamat,alamat);
			strcpy(queue2->tanggal,tanggal);
			queue2->age = age;
			strcpy(queue2->clinic,clinic);
			strcpy(queue2->DrName,DrName);
			stack2[size2]=queue2;
			size2++;
		}
		if(strcmp(DrName,"meli")==0){
			patient* queue3 = (patient*) malloc(sizeof(patient));
			strcpy(queue3->nama,name);
			strcpy(queue3->alamat,alamat);
			strcpy(queue3->tanggal,tanggal);
			queue3->age = age;
			strcpy(queue3->clinic,clinic);
			strcpy(queue3->DrName,DrName);
			stack3[size3]=queue3;
			size3++;
		}
		if(strcmp(DrName,"dinda")==0){
			patient* queue4 = (patient*) malloc(sizeof(patient));
			strcpy(queue4->nama,name);
			strcpy(queue4->alamat,alamat);
			strcpy(queue4->tanggal,tanggal);
			queue4->age = age;
			strcpy(queue4->clinic,clinic);
			strcpy(queue4->DrName,DrName);
			stack4[size4]=queue4;
			size4++;
		}
		if(strcmp(DrName,"beno")==0){
			patient* queue5 = (patient*) malloc(sizeof(patient));
			strcpy(queue5->nama,name);
			strcpy(queue5->alamat,alamat);
			strcpy(queue5->tanggal,tanggal);
			queue5->age = age;
			strcpy(queue5->clinic,clinic);
			strcpy(queue5->DrName,DrName);
			stack5[size5]=queue5;
			size5++;
		}
		if(strcmp(DrName,"andi")==0){
			patient* queue6 = (patient*) malloc(sizeof(patient));
			strcpy(queue6->nama,name);
			strcpy(queue6->alamat,alamat);
			strcpy(queue6->tanggal,tanggal);
			queue6->age = age;
			strcpy(queue6->clinic,clinic);
			strcpy(queue6->DrName,DrName);
			stack6[size6]=queue6;
			size6++;
		}
		if(strcmp(DrName,"jono")==0){
			patient* queue7 = (patient*) malloc(sizeof(patient));
			strcpy(queue7->nama,name);
			strcpy(queue7->alamat,alamat);
			strcpy(queue7->tanggal,tanggal);
			queue7->age = age;
			strcpy(queue7->clinic,clinic);
			strcpy(queue7->DrName,DrName);
			stack7[size7]=queue7;
			size7++;
		}
		if(strcmp(DrName,"anita")==0){
			
			patient* queue8 = (patient*) malloc(sizeof(patient));
			strcpy(queue8->nama,name);
			strcpy(queue8->alamat,alamat);
			strcpy(queue8->tanggal,tanggal);
			queue8->age = age;
			strcpy(queue8->clinic,clinic);
			strcpy(queue8->DrName,DrName);
			stack8[size8]=queue8;
			size8++;
		}
		puts("Terima kasih sudah mendaftar harap menunggu\n");
		
	}

void check_queue(){
	int i;
	printf("queue Dr.Beni: \n");
	for(i=0; i<size1;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack1[i]->nama,stack1[i]->alamat, stack1[i]->tanggal, 
		stack1[i]->age);
	}
	printf("queue Dr.Agus: \n");
	i=0;
	for(i=0; i<size2;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack2[i]->nama,stack2[i]->alamat, stack2[i]->tanggal, 
		stack2[i]->age);
	}
	printf("queue Dr.Meli: \n");
	i=0;
	for(i=0; i<size3;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack3[i]->nama,stack3[i]->alamat, stack3[i]->tanggal, 
		stack3[i]->age);
	}
	printf("queue Dr.Dinda: \n");
	i=0;
	for(i=0; i<size4;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack4[i]->nama,stack4[i]->alamat, stack4[i]->tanggal, 
		stack4[i]->age);
	}
	printf("queue Dr.Beno: \n");
	i=0;
	for(i=0; i<size5;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack5[i]->nama,stack5[i]->alamat, stack5[i]->tanggal, 
		stack5[i]->age);
	}
	printf("queue Dr.Andi: \n");
	i=0;
	for(i=0; i<size6;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack6[i]->nama,stack6[i]->alamat, stack6[i]->tanggal, 
		stack6[i]->age);
	}
	printf("queue Dr.Jono: \n");
	i=0;
	for(i=0; i<size7;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack7[i]->nama,stack7[i]->alamat, stack7[i]->tanggal, 
		stack7[i]->age);
	}
	printf("queue Dr.Anita: \n");
	i=0;
	for(i=0; i<size8;i++){
		printf("%d",i+1);
		printf("Nama: %s\n Alamat: %s\n Tanggal Lahir: %s\n Umur: %d\n",stack8[i]->nama,stack8[i]->alamat, stack8[i]->tanggal, 
		stack8[i]->age);
	}
}
void outpatient(){
	char DrName[20];
	int i;
	patient* queue9 = (patient*) malloc(sizeof(patient));
	printf("Antrian dari Dokter : ");
	scanf("%s", DrName); getchar();
	if(strcmp(DrName,"beni")== 0){
		strcpy(queue9->nama , stack1[0]->nama);
		for(i=0;i< size1-1;i++){
			stack1[i] = stack1[i+1];
		}
		stack1[i] = NULL;
		size1--;
		
	}
	if(strcmp(DrName,"agus")== 0){
		strcpy(queue9->nama , stack2[0]->nama);
		for(i=0;i< size2-1;i++){
			stack2[i] = stack2[i+1];
		}
		stack2[i] = NULL;
		size2--;
		
	}
	if(strcmp(DrName,"meli")== 0){
		strcpy(queue9->nama , stack3[0]->nama);
		for(i=0;i< size3-1;i++){
			stack3[i] = stack3[i+1];
		}
		stack3[i] = NULL;
		size3--;
		
	}
	if(strcmp(DrName,"dinda")== 0){
		strcpy(queue9->nama , stack4[0]->nama);
		for(i=0;i< size4-1;i++){
			stack4[i] = stack4[i+1];
		}
		stack4[i] = NULL;
		size4--;
		
	}
	if(strcmp(DrName,"beno")== 0){
		strcpy(queue9->nama , stack5[0]->nama);
		for(i=0;i< size5-1;i++){
			stack5[i] = stack5[i+1];
		}
		stack5[i] = NULL;
		size5--;
		
	}
	if(strcmp(DrName,"andi")== 0){
		strcpy(queue9->nama , stack6[0]->nama);
		for(i=0;i< size6-1;i++){
			stack6[i] = stack6[i+1];
		}
		stack6[i] = NULL;
		size6--;
		
	}
	if(strcmp(DrName,"jono")== 0){
		strcpy(queue9->nama , stack6[0]->nama);
		for(i=0;i< size7-1;i++){
			stack7[i] = stack7[i+1];
		}
		stack7[i] = NULL;
		size7--;
		
	}
	if(strcmp(DrName,"anita")== 0){
		strcpy(queue9->nama , stack8[0]->nama);
		for(i=0;i< size8-1;i++){
			stack8[i] = stack8[i+1];
		}
		stack8[i] = NULL;
		size8--;
		
	}
	char sakit[20];
	char obat[20];
	int cost;
	char status[10];
	printf("patient sakit = ");
	scanf("%s", sakit); getchar();
	printf("obat yang dibutuhkan = ");
	scanf("%[^\n]", obat); getchar();
	printf("harga obat = ");
	scanf("%d", &cost);
	printf("Apakah Anda memiliki BPJS? : ");
	scanf("%s", status );getchar();
	
	strcpy(queue9->sakit,sakit);
	strcpy(queue9->obat,obat);
	queue9->cost = cost;
	strcpy(queue9->status,status);
	stack9[size9]=queue9;
	size9++;
	
}
void check_pharmancy(){
	int i;
	for(i=0; i<size9;i++){
		printf("%d",i+1);
		printf("Nama: %s\n sakit: %s\n obat: %s\n cost: %d\n status: %s\n",stack9[i]->nama,stack9[i]->sakit, stack9[i]->obat, 
		stack9[i]->cost,stack9[i]->status);
	}
	
}
void payment(){
	printf("Terima kasih sudah berobat di sini\n");
	printf("total tagihannya adalah %d\n", stack9[0]->cost);
	if(strcmp(stack9[0]->status,"iya")==0){
		printf("Biaya tagihan anda sudah di tanggung oleh BPJS\n");
	}
	int i;
	for(i=0;i< size9-1;i++){
			stack9[i] = stack9[i+1];
		}
		stack9[i] = NULL;
		size9--;
}
