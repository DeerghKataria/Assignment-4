/*C program to check palindrome number using recursion*/
 
#include <stdio.h>
#include <math.h>

// Function declaration 
int reverse(int num);
int isPalindrome(int num);

int main()
{
    int num;
    // Taking input from the user.
    printf("Enter any number....");
    scanf("%d",&num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is NOT a palindrome.\n", num);
    }
    return 0;
}
/**
 * Function to check whether a number is palindrome or not.
 * This function returns 1 if the number is palindrome otherwise 0.
 */
int isPalindrome(int num)
{
    if(num==reverse(num))
    return 1;
    
    return 0;
}

// Recursive function to find reverse of any number.
int reverse(int num)
{
    // Finding number of digits in a number.
    int digit=(int)log10(num);
    
    if(num==0)
    return 0;

    return ((num%10*pow(10,digit))+reverse(num/10));
}
