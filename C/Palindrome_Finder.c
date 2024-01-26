#include<stdio.h>
int main()
{
	int r,i,n,rev=0;
	printf("Enter the desired number: ");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("The reversed number is: %d\n",rev);

	if(i==rev)
	{
		printf("This number is a Palindrome.\n");
	}
	else
	{
		printf("This number is not a Palindrome.\n");
	}

	return 0;
}
