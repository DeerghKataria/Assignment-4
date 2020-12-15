/*C program to find sum of all even or odd numbers in given range using recursion*/
#include <stdio.h>

// Function declaration 
int sumofEvenOdd(int start, int end);

int main()
{
    int start, end, sum;
    // raking input of the range from the user.
    printf("Enter lower limit....");
    scanf("%d",&start);
    printf("Enter upper limit....");
    scanf("%d",&end);
    
    printf("Sum of even/odd numbers between %d to %d is....%d\n",start,end,sumofEvenOdd(start, end));
    return 0;
}
// Recursive function to find the sum of all even or odd numbers 
int sumofEvenOdd(int start, int end) 
{
    if(start>end)
        return 0;
    else
        return (start+sumofEvenOdd(start+2,end));
}
