// Palindrome string
#include <stdio.h>
#include <string.h>
int main()
{
  char ch[50];
  int i, len, flag = 1;
  printf("Enter any string: ");  
  scanf("%s", ch);  
  len = strlen(ch);  
  for(i = 0; i < len / 2; i++)  
 {  
   if(ch[i] != ch[len - 1 - i])  
    {  
      flag = 0;  
      break;  
    }  
 }  
if(flag==1)  
    printf("Palindrome String");  
else  
    printf("Not a Palindrome String");  
return 0;
}