// Lower to upper case
#include <stdio.h>
int main() 
{
  char ch[100];
  int i=0;
  printf("Enter string: ");
  fgets(ch, sizeof(ch), stdin);
  while (ch[i] != '\0') 
   {
    if ((ch[i] >= 'a' && ch[i] <= 'z'))
     {
        ch[i] = ch[i] - 32;
     }
       i++;
   }
    printf("Upper case : %s",ch);
    return 0;
}
