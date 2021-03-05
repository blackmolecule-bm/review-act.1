#include<stdio.h>
 int main()
 {
   int number;

   printf("Input any integer: ");
   scanf("%d",&number);

   if(number>0)
   {
     printf("The integer is a positive number",number);
   }
   else if(number<0)
   {
     printf("The integer is a negative number",number);
   }
   else
   {
     printf("Number is zero");
   }

   return 0;
 }
