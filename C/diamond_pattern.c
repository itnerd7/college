//Diamond Pattern. Sans ~ IT. GPL3. ~ 09.04.2023.
#include<stdio.h>
int main()
{
    //Declaring Variables.
    int size,i,j;

    //Take User Input.
    printf("Enter a size: ");
    scanf("%d", &size);

    //First for loop, setting initial conditions......
    for(i=1; i<=size; i++)
    {
        //Second for loop, printing the first half of the Diamond......
       for(j=size; j>=1; j--)
       {
           //Using if-else to determine the proper shape of the Pattern.
            if(i>=j)
            printf("* ");
            else
            printf(" ");
       }
       // New_line is needed, oviously.
        printf("\n");
    }

    //Third For loop, setting initial conditions for the 2nd half of the Diamond......
    for(i=size-1; i>=1; i--)
    {
        //Fourth For loop, printing the appropriate number of spaces in each iteration......
        for(j=1;j<size-i;j++)
           {
               printf(" ");
           }

        //Fifth For loop,(This is getting ridiculous!!!) printing the 2nd half......
        for(j=1; j<=size; j++)
        {
            //Same old if-else, nothing new.......
            if(j<=i)
            printf(" *");
            else
            printf(" ");
        }
        //And new_line, every iteration.....
        printf("\n");
    }

    return 0;
}
//###EOF###
