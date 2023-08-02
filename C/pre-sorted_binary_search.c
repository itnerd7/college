//Santanu Paik//
//Pre-Sorted Binary Search//
#include<stdio.h>
int main ()
{
    int size,i,s,flag=0;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);

    int a[size],start=0,end=size-1,mid=(start+end)/2;
    for(i=0;i<size;i++)
    {
        printf("Enter the value for element no. %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the number to be searched: ");
    scanf("%d",&s);
    while(start<end)
    {
        mid=(start+end)/2;
        if(a[mid]==s)
        {
            printf("Searched value found at index no. %d !\n",mid);
            flag=1;
            break;
        }
        else if(a[mid]>s)
        {
            end=mid-1;
        }
        else if(a[mid]<s)
        {
            start=mid+1;
        }
    }

    if(flag==0)
    {
        printf("The search value is not present in the array !\n");
    }

    return 0;
}
