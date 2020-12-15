/*C program to find GCD(HCF) of two numbers using recursion*/
#include <stdio.h>

//Function declaration
int gcd(int a,int b);

int main()
{
    int num1,num2,hcf;
    // Taking Input from the user.
    printf("Enter any two numbers to find GCD....");
    scanf("%d%d",&num1,&num2);

    hcf=gcd(num1,num2);
    printf("HCF of %d and %d is....%d",num1,num2,hcf);
    return 0;
}
//Recursive function to find GCD of two numbers
int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b); 
}
