#include<stdio.h>

int main()
{
    int num,rem,temp,c,sum=0,x=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    c=num;
    while(num>0)
    {
        x++;
        num=num/10;
    }
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+pow(rem,x);
        temp=temp/10;
    }
    if(sum==c)
    printf("Armstrong number.");
    else
    printf("Not Armstrong number.");
    
    
    return 0;
}