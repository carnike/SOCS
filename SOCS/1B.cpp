#include<stdio.h>
#include<string.h>
//3
struct Alamat{
char Kota[100];
char almt[100];
char Alamat_lengkap[100];
};
struct Mahasiswa{
char Nama[100];
char Nim[100];
float IPK;
struct Alamat alamat_mhs[2];
};
int main(){
	struct Mahasiswa mhs1 = {"Budi","1005",3.15f,
	{{"Palembang","Jl. Indah no 7"},
	{"Jakarta","Jl. Rawa Belong no 25"}}};

	strcpy(mhs1.alamat_mhs[1].Alamat_lengkap,"Jl. U no 3");

	printf("Alamat Rumah : %s\n",mhs1.alamat_mhs[0]. almt);
	printf("Alamat Kos : %s\n",mhs1.alamat_mhs[1]. almt);
	getchar();
	return 0;
}

