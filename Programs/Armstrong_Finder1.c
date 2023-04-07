// Checking for Armstrong number of any order. 
#include <math.h>
#include <stdio.h>

int main() 
{
   int num, ogn, rem, temp=0, res=0;

   printf("Enter any Number: ");
   scanf("%d", &num);

   for (ogn=num; ogn!=0; ++temp) // Determining the length of the entered number.
   {
       ogn=ogn/10;
   }

   for (ogn=num; ogn!=0; ogn=ogn/10) // Calculating.........
   {
       rem=ogn%10;
       res=res+pow(rem, temp);
   }

   if (res==num)
   {
        printf("%d is an Armstrong number.", num);
   }
   else
    {
        printf("%d is not an Armstrong number.", num);
    }
   return 0;
}
