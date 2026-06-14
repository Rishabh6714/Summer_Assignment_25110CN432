// Maximum frequncy element in array
#include <stdio.h>
int main() 
{
   int n, arr[100], i, j, maxcount=0, element;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array:");
   for(i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }
     for(i=0; i<n; i++)
   {
     int count = 0;
     for(j=0; j<n; j++)
     {
        if(arr[i] == arr[j])
        count++;
     }
      if(count>maxcount)
     {
       maxcount = count;
       element = arr[i];
     }
   }
   printf("Maximum frequency element = %d\n", element);
   printf("frequency is = %d",maxcount);
   return 0;
}
