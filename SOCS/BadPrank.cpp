#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int a,b;
	int i,j,k;
    fscanf(fp, "%d\n", &a);
    
    int arr[a];
    char ch[a][100];
    for(i=0; i<a; i++){
     fscanf(fp, "%d\n", &arr[i]);
        fscanf(fp, "%[^\n]\n", ch[i]);
    }
    
    for(i=0; i<a; i++){
     b=strlen(ch[i]);
        for(j=0; j<b; j++){
         
         if (ch[i][j] == '0') {
          ch[i][j] = 'O';
      } else if (ch[i][j] == '1') {
          ch[i][j] = 'I';
         } else if (ch[i][j] == '3') {
          ch[i][j] = 'E';
   } else if (ch[i][j] == '4') {
          ch[i][j] = 'A';
   } else if (ch[i][j] == '5') {
          ch[i][j] = 'S';
   } else if (ch[i][j] == '6') {
          ch[i][j] = 'G';
   } else if (ch[i][j] == '7') {
          ch[i][j] = 'T';
   } else if (ch[i][j] == '8') {
          ch[i][j] = 'B';      
      } 
    
    if (ch[i][j] != ' ') {
    ch[i][j]-= arr[i] ;
    if (ch[i][j] < 65){
    ch[i][j] += 26;
    }  
      } 

        }
    }

    for(k=0; k<a; k++){
  printf("Case #%d: %s\n",k+1,ch[k]);

    }
    fclose(fp);
    return 0;
}
