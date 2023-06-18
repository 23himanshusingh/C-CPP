#include<stdio.h>
int main()
{
    int num[20];
   int i, j, a, n;
   printf("Enter the number of values to sort:\n");
   scanf("%d", &n);
   printf("Enter the values\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n-1; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i){
       if (i==(n-1)){
           printf("%d", num[i]);

       }
       else{

           printf("%d,", num[i]);

       }
    
   }
}