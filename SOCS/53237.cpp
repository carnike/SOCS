#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	
	char ch[100001];
  scanf("%[^\n]s", &ch);
  int a = strlen(ch);
  
  int i;
  for (i = 0; i < a; i++){
  	if(toupper(ch[i] )== 'I'){
  		ch[i] = '1';
	  }
	  else if(toupper(ch[i]) == 'R'){
  		ch[i] = '2';
  }
  	else if(toupper(ch[i]) == 'E'){
  		ch[i] = '3';
  	}
  	else if(toupper(ch[i] )== 'A'){
  		ch[i] = '4';
  	}
  	else if(toupper(ch[i]) == 'S'){
  		ch[i] = '5';
  	}
  	else if(toupper(ch[i]) == 'G'){
  		ch[i] = '6';
  	}
  	else if(toupper(ch[i]) == 'T'){
  		ch[i] = '7';
  	}
  	else if(toupper(ch[i]) == 'B'){
  		ch[i] = '8';
  	}
  	else if(toupper(ch[i]) == 'P'){
  		ch[i] = '9';
  	}
  	else if(toupper(ch[i]) == 'O'){
  		ch[i] = '0';
  	}
  	else{
  		ch[i]= toupper(ch[i]);
	  }
}
	printf("%s\n", ch);
	return 0;		
}
