#include<stdio.h>
int main()
{
    int n,i,d;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("\t\tMULTIPLICATION\n\n");
    for(i=1;i<=12;i++)
    {
        d=n*i;
        printf(" %d * %d = %d\n\n",n,i,d);
    }
    return 0;
}
