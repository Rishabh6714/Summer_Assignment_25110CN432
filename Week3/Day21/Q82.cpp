// Reversed string
#include <stdio.h>
int main() 
{
  char ch[100];
  int i=0, len;
  printf("Enter string: ");
  fgets(ch, sizeof(ch), stdin);
  while (ch[i] != '\0') 
   {
     i++;
   }
   len=i-2;
    printf("Reversed string: ");
    for(i=len; i>=0; i--)
    {
       printf("%c",ch[i]);
    }
    return 0;
}
