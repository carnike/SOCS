#include<stdio.h>
struct data{
	int tanggal;
	int suhu;
};
int main()
{
	int b;
	printf("masukan jumlah tanggal yang ingin di tulis\n");
	scanf("%d", &b);
	printf("masukan data tanggal dan suhu(c) untuk 1 bulan\n");
	int i,a,sum,*ptr;
	struct data data[31];
	ptr = &sum;
	
	for(i=0;i<b;i++){
		scanf("%d %d",&data[i].tanggal, &data[i].suhu);
		data[i].suhu += 273;
		sum += data[i].suhu;
	}
	printf("Menu\n");
	printf("ketik 1 untuk menampilkan data\n");
	printf("ketike 2 untuk menampilkan rata rata\n");
	scanf("%d", &a);
	switch(a){
		case 1:{
			for(i=1;i<b;i++){
		printf("%d %d kelvin\n",data[i].tanggal, data[i].suhu);
		
	}
			
			break;
		}
		case 2:{
			sum /=b;
			printf("rata rata suhu adalah %d kelvin", *ptr);
			break;
		}
	}
	
	
}
