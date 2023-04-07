// Checking for 3 digit Armstrong Number.
// n = user inputted number, r = remainder, prcn = processed number, ogn = original number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,prn=0,ogn;
    printf("Enter the number: ");
    scanf("%d",&n);
    ogn=n;

    while(n>0)
    {
        r=n%10;
        prn=prn + (r*r*r);
        n=n/10;
    }

    if (prn==ogn)
    {
        printf("%d is an Armstrong number !",ogn);
    }

    else
    {
        printf("%d is not an Armstrong number.",ogn);
    }

    return 0;
}
