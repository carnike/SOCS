#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int write();
int read();
int main()
{
	printf("selamat datang di log harian\n\n");
	printf("ketik 1 untuk menulis\n");
	printf("ketik 2 untuk membaca\n");
	printf("ketik 3 untuk keluar\n");
	int s;
	scanf("%d",&s);
		switch(s){
			
		case   1:{
			write();
			break;
		}
		
		case   2:{
			read();
			break;
		}
		case   3:{
			break;
		}
				
		}
}
int write(){
	

	fflush(stdin);		
	time_t rawtime;
	struct tm*timeinfo;
	time(&rawtime);
	timeinfo=localtime (&rawtime);
	printf("\ntanggal sekarang: %s\n",asctime(timeinfo));
	fflush(stdin); 
	

	FILE *output;
	char diary[12]; 
	char *text[500];
	printf("tanggal hari ini [dd-mm-yyyy]: ");
	gets(diary);
	output=fopen(diary,"a");	
	fflush(stdin);
	printf("\ntuliskan note : ");
	scanf("%[^\n]",text);	
	fprintf(output,"%s\nContent : %s\n\n",asctime(timeinfo),text);
	fclose(output);
	
}
int read(){
	fflush(stdin);
	
	FILE *input;
	char diary[12];  
	char text[500];
	char text2[500];
	printf("tuliskan tanggal [dd-mm-yyyy]: ");
	gets(diary);
	input=fopen(diary,"r");
	fflush(stdin);
	
		
	while(fgets(text,500,input)!=NULL){
		sscanf(text,"%[^\n]",text2);
		printf("%s",text);
	}
	fclose(input);
	
}
