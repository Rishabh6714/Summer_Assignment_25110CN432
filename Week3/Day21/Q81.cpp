// Find string length without using strlen()
#include <stdio.h>
int main() 
{
  char ch[100];
  int i=0;
  printf("Enter string: ");
  fgets(ch, sizeof(ch), stdin);
  while (ch[i] != '\0') 
   {
     i++;
   }
    printf("Length of string = %d\n", i-1);
    return 0;
}
