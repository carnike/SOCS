#include <stdio.h>
typedef struct CLUB{
    char club[101];
    int score;
}data;
data arr[101];
int main()
{
	
	printf("ketik 1 untuk memasukan data klub\n");
	printf("ketik 2 untuk menampilkan hasil liga\n");
	int s;
	scanf("%d", &s);
	switch(s){
		case 1:{
			FILE *fp = fopen("club.in", "w");
			FILE *fp2 = fopen("club", "r");
			int a,b,c,d,i;
			fscanf(fp2,"%d",&a);
			fprintf(fp,"%d\n", a);
			printf("masukan data dari club\n");
			for(i=0;i<a;i++){
				fscanf(fp2,"%s", arr[i].club);
			 	fprintf(fp,"%s ",arr[i].club);
			 	printf("masukan jumlah menang dari %s = ", arr[i].club);
			 	scanf("%d", &b);
			 	arr[i].score += (b*3);
			 	printf("masukan jumlah seri dari %s = ", arr[i].club);
			 	scanf("%d", &c);
			 	arr[i].score += c;
			 	printf("masukan jumlah kalah dari %s =  ", arr[i].club);
			 	scanf("%d", &d);
			 	printf("\n");
			 	arr[i].score += 0;
			 	fprintf(fp,"%d\n",arr[i].score);
			 	arr[i].score=0;
			}
			 fclose(fp);
			 fclose(fp2);
			 
			break;
		}
		case 2:{
			FILE *fp = fopen("club.in", "r");
			int a,i,j;
			fscanf(fp,"%d",&a);
			for(i=0;i<a;i++){
			fscanf(fp,"%s %d\n", arr[i].club, &arr[i].score);
	}
			for(i=0;i<a-1;i++){
				for(j=0;j<a-i-1;j++){
				if(arr[j].score<arr[j+1].score){
				data temp =arr[j+1];
            	arr[j+1]=arr[j];
            	arr[j]=temp;	
				}
				}
			}
			for(i=0;i<a;i++){
        	printf("%s %d\n", arr[i].club, arr[i].score);
        } 
			break;
		}
	}
	
	
	
}
