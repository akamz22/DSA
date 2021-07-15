#include <stdio.h>
int main()
{
   int n, m, count = 0;
   int a[n];
   int b[m];
   int i, j;
   printf("Enter the size of array a:");
   scanf("%d", &n);
   printf("Enter the size of array b:");
   scanf("%d", &m);
   for (i = 0; i < n; i++)
   {
      printf("Enter the value of a array element at %d position:", i);
      scanf("%d", &a[i]);
   }

   for (i = 0; i < m; i++)
   {
      printf("Enter the value of b array element at %d position:", i);
      scanf("%d", &b[j]);
   }

   for (j = 0; j < m; j++)
   {
      for (i = 0; i < n; i++)
      {

         if (a[i] == b[j])
         {
            count++;
         }
      }
   }
   printf("\n");
   printf("total intersection elements is %d.", count);

   return 0;
}