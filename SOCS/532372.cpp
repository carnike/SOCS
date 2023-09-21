#include <stdio.h>
#include <string.h>

void replace_char(char *string, char replace, char baru);

int main(void)
{
  

  char ch[100000];
  scanf("%[^\n]s", &ch);
  strupr (ch);	
  

 
  replace_char(ch, 'I', '1');
  replace_char(ch, 'R', '2');
  replace_char(ch, 'E', '3');
  replace_char(ch, 'A', '4');
  replace_char(ch, 'S', '5');
  replace_char(ch, 'G', '6');
  replace_char(ch, 'T', '7');
  replace_char(ch, 'B', '8');
  replace_char(ch, 'P', '9');
  replace_char(ch, 'O', '0');
 
  printf("%s", ch);

  

  return 0;
}


void replace_char(char *string, char replace, char baru)
{
  int slen = strlen(string);

  
  for (int i = 0; i < slen; i++)
    if (string[i] == replace)
      string[i] = baru;
}
