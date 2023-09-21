#include <stdio.h>
#include <string.h>

typedef struct mahasiswa{
    char nama[101];
    char nim[101];
    double ipk;
}data;
int num;
data arr[101];
void inputdata(){
    printf("Berapa banyak data yang akan di input?\n");
    scanf("%d",&num);
    printf("Masukkan data dengan format NIM-NAMA-IPK\n");
    for(int i=0;i<num;i++){
        scanf("%[^-]-%[^-]-%lf",&arr[i].nim,&arr[i].nama,&arr[i].ipk);
		getchar();
    }
}
void sorting(){
    if(num==0){
        printf("tolong input data lebih dari 1\n");
        
    }else{
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j].ipk<arr[j+1].ipk);
            data temp =arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0;i<num;i++){
        printf("%d. %s - %s - %.2lf\n",i+1,arr[i].nim,arr[i].nama,arr[i].ipk);
        }  
           
    }
}
void searching(){
    if(num==0){
        printf("data tidak tersedia.\n");
        
    }else{
        printf("Masukkan NIM mahasiswa yang ingin dicari IPKnya\n");
        char nims[101];
        scanf("%s",nims);getchar();
        int temp;
        for(int i=0;i<num;i++){
            if(strcmp(nims, arr[i].nim) == 0){
                printf("%s - %.2lf\n",arr[i].nama,arr[i].ipk);
            }

        }
        printf("Ingin mencari NIM lagi?(1.Untuk Ya./n2.Untuk Tidak)\n");
        int angka;
        scanf("%d",&angka);
        if(angka==1){
           searching();
        }
    }
}
void displaydata(){
    if(num==0){
        printf("data tidak ada.\n");
        
    }else{
    for(int i=0;i<num;i++){
        printf("%d. %s - %s - %.2lf\n",i+1,arr[i].nim,arr[i].nama,arr[i].ipk);
        }
    }
    
}
int main()
{
	menu:
	printf("Menu :\n");
	printf("1. input data mahasiswa\n");
	printf("2. searching sesuai NIM\n");
	printf("3. urutkan data\n");
	printf("4. display data seluruh mahasiswa\n");
	printf("5. keluar\n");
	mahasiswa data;
	int a;
	scanf("%d", &a);
	switch(a){
		case 1:{
			inputdata();
			goto menu;
		}
		case 2:{
			searching();
			goto menu;
		}
		case 3:{
			sorting();
			goto menu;
		}
		case 4:{
			displaydata();
			goto menu;
		}
		case 5:{
			printf("terima kasih dan sampai jumpa");
			break;
		}
	}
	
}

