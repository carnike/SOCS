#include <stdio.h>

void terbilang (long int x);

int main()
{
	long angka;

	printf("Masukan angka : ");
	scanf("%ld",&angka);
	printf("terbilang = ");
	terbilang(angka); 
	
}

void terbilang(long int x){

//	nilai satuan
	if(x==1){
	printf("satu ");
	}
	else if(x==2){
	printf("dua ");
	}
	else if(x==3){
	printf("tiga ");
	}
	else if(x==4){
	printf("empat ");
	}
	else if(x==5){
	printf("lima ");
	}
	else if(x==6){
	printf("enam ");
	}
	else if(x==7){
	printf("tujuh ");
	}
	else if(x==8){
	printf("delapan ");
	}
	else if(x==9){
	printf("sembilan ");
	}
	else if(x==10){
	printf("sepuluh ");
	}
	
//	nilai belasan
	else if(x==11){
	printf("sebelas ");
	}
	else if(x>=12&&x<=19){
	terbilang(x%10);
	printf("belas ");
	}
	
//	nilai puluhan
	else if(x>=20&&x<=99){
	terbilang(x/10);
	printf("puluh ");
 	terbilang(x%10);
	}
	
//	nilai ratusan
	else if(x>=100&&x<=199){
	printf("seratus ");
	terbilang(x-100);
	}
	else if(x>=200&&x<=999){
	terbilang(x/100);
	printf("ratus ");
	terbilang(x%100);
	}
	
//	nilai ribuan
	else if(x>=1000&&x<=1999){
	printf("seribu ");
	terbilang(x-1000);
	}
	else if(x>=2000&&x<=999999){
	terbilang(x/1000);
	printf("ribu ");
	terbilang(x%1000);
	}
	
//	nilai jutaan
	else if(x>=1000000&&x<=999999999){
	terbilang(x/1000000);
	printf("juta ");
	terbilang(x%1000000);
}

	
}
