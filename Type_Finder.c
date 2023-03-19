/*WAP to find if an entered value is a Vowel, Consonant, Number or Special Character.*/
#include<stdio.h>

int main()
{
    /*Declaring required Variable and Taking input from user.*/
    char ch;
    printf("Please Enter the character: ");
    scanf("%c",&ch);

    /*Checking if Entered Value is a Special Character or not. Refer to the ASCII table if this seems confusing.*/
    if((ch>=33 && ch<=47)||( ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=126))
    printf("Entered Value is a Special Character.\n");

    /*Checking if Entered Value is a Number or not. Again, refer to the ASCII table if this seems confusing.*/
    else if (ch>=48 && ch<=57)
    printf("Entered Value is a Number.\n");

    /*Checking if Entered Value is a Vowel or a Consonant using a nested Switch Case.*/
    else 
    {
        switch(ch)
        {   /*Checking for Vowels.*/
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            printf("Entered Value is a Vowel.\n");
            break;

            /*Checking for Consonants.*/
            default:
            printf("Entered Value is a Consonant.\n");
            break;
        }    
    }

    return 0;
}
