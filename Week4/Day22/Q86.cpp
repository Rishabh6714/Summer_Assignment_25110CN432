// Counts words in a sentence
#include <stdio.h>
int main()
{
  char ch[100];
  int i, count = 1;
  printf("Enter any sentence: ");
  fgets(ch, sizeof(ch), stdin);
  for(i = 0; ch[i] != '\0'; i++)
 {
   if(ch[i] == ' ')
   count++;
 }
printf("Number of words = %d", count);
return 0;
}
